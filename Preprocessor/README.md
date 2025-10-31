## `preprocessor` – Xử lý mã nguồn trước khi biên dịch

### Mục đích
- **Tổ chức code**: `#include`, `#define`
- **Điều kiện biên dịch**: `#ifdef`, `#ifndef`
- **Tránh lỗi lặp**: include guard
- **Tối ưu & cấu hình**: macro, debug

---

### Các chỉ thị chính

| Chỉ thị | Dùng để |
|--------|--------|
| `#include <file>` | Chèn file hệ thống |
| `#include "file"` | Chèn file dự án |
| `#define TÊN giá_trị` | Thay thế văn bản |
| `#undef TÊN` | Xóa macro |
| `#ifdef TÊN` | Nếu đã định nghĩa |
| `#ifndef TÊN` | Nếu chưa định nghĩa |
| `#endif` | Kết thúc điều kiện |
| `#pragma once` | Include guard nhanh |

---

### Ví dụ thực tế

```c
// 1. Include guard (tránh lỗi lặp)
#ifndef MY_HEADER_H
#define MY_HEADER_H

typedef struct { ... } config_t;

#endif

// 2. Macro tiện lợi
#define LED_ON()    (GPIOA->ODR |= (1 << 5))
#define LED_OFF()   (GPIOA->ODR &= ~(1 << 5))
#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

// 3. Cấu hình theo board
#define STM32F1
// #define ESP32

#ifdef STM32F1
    #define UART_BAUD 9600
#elif defined(ESP32)
    #define UART_BAUD 115200
#endif

// 4. Debug có điều kiện
#define DEBUG
#ifdef DEBUG
    #define LOG(...) printf(__VA_ARGS__)
#else
    #define LOG(...)
#endif