#include <stdio.h>
#include "globals.h"

// ĐỊNH NGHĨA thật (chỉ 1 lần)
uint32_t counter = 0;

int main() {
    printf("Ban đầu: %u\n", counter);

    // Gọi hàm từ file khác
    tick();
    tick();

    printf("Sau 2 tick: %u\n", counter);
    return 0;
}