## `Bitwise` – Thao tác bit (Cốt lõi trong Embedded)

### Mục đích
- **Điều khiển thanh ghi vi điều khiển**
- **Tối ưu bộ nhớ & tốc độ**
- **Xử lý giao tiếp: UART, SPI, I2C, GPIO**

---

### Các toán tử Bitwise

| Toán tử | Tên | Ví dụ | Dùng để |
|--------|-----|-------|--------|
| `&` | AND | `x & 0x01` | Kiểm tra bit |
| `|` | OR  | `x | 0x01`  | Bật bit |
| `^` | XOR | `x ^ 0x01`  | Đảo bit |
| `~` | NOT | `~x`        | Đảo tất cả bit |
| `<<` | Shift left  | `x << 1` | Nhân 2 |
| `>>` | Shift right | `x >> 1` | Chia 2 (số nguyên) |

---

### Ứng dụng thực tế trong Embedded

```c
// 1. Đọc trạng thái nút bấm (GPIO)
#define BUTTON_PIN  0
if (GPIO_PORT & (1 << BUTTON_PIN)) { /* Đang nhấn */ }

// 2. Bật LED (bit set)
GPIO_PORT |= (1 << LED_PIN);

// 3. Tắt LED (bit clear)
GPIO_PORT &= ~(1 << LED_PIN);

// 4. Đảo trạng thái LED (bit toggle)
GPIO_PORT ^= (1 << LED_PIN);

// 5. Kiểm tra bit thứ n
#define BIT(n) (1 << (n))
if (status & BIT(3)) { /* bit 3 = 1 */ }