## Con trỏ (Pointer) – Kiến thức cốt lõi

| Loại con trỏ | Mục đích | Ví dụ |
|-------------|---------|-------|
| **Con trỏ thông thường** | Lưu địa chỉ của biến cùng kiểu | `int *p = &x;` |
| **Con trỏ void (`void *`)** | Con trỏ chung, không biết kiểu → linh hoạt | `void *ptr = malloc(10);` |
| **Con trỏ hàm** | Lưu địa chỉ hàm → gọi động, callback | `void (*func_ptr)() = myFunction;` |

> **Tại sao quan trọng?**  
> - Truy cập bộ nhớ trực tiếp (RAM, thanh ghi vi điều khiển)  
> - Tối ưu hiệu năng (truyền tham chiếu, không copy dữ liệu)  
> - Xây dựng hệ thống linh hoạt: menu, driver, RTOS

---

Ứng dụng thực tế trong Embedded

- **Truy cập thanh ghi**: `*(volatile uint32_t*)0x40021000`
- **Quản lý bộ nhớ động**: `malloc`, `free`
- **Callback**: nút bấm, timer, UART nhận dữ liệu
- **Bảng hàm (jump table)**: xử lý lệnh nhanh trong firmware

---

> **Mục tiêu**: Hiểu sâu → Áp dụng thuần thục trong lập trình vi điều khiển  
> (STM32, ESP32, AVR, PIC, v.v.)

---

