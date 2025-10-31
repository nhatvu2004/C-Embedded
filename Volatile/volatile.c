#include <stdio.h>
#include <stdint.h>

// Biến volatile – thay đổi trong ISR
volatile uint32_t tick_count = 0;

// Hàm giả lập ISR (gọi tay thay vì ngắt thật)
void simulate_isr() {
    tick_count++;           // ISR ghi vào biến
    printf("[ISR] Tick: %lu\n", tick_count);
}

int main() {
    printf("Bắt đầu: tick_count = %lu\n", tick_count);

    // Giả lập 3 lần ngắt
    simulate_isr();
    simulate_isr();
    simulate_isr();

    // Main loop đọc biến volatile
    printf("Main thấy: %lu\n", tick_count);

    // === PHẦN SO SÁNH: Không volatile ===
    // Nếu bỏ volatile → trình biên dịch có thể cache = 0 → in sai!
    // Thử bỏ volatile → compile lại → sẽ thấy in "Main thấy: 0" (sai)

    return 0;
}