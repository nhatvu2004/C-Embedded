# Bit-Flag Control – Quản lý trạng thái bằng Bit

**Code minh họa việc dùng `bitwise` + `macro` để điều khiển nhiều trạng thái chỉ trong 1 byte (`uint8_t`)**

---

## Mục tiêu
- **Tiết kiệm RAM**: 8 cờ trạng thái → chỉ dùng **1 byte**
- **Tốc độ cao**: thao tác bit → không cần `if/else`
- **Dễ bảo trì**: dùng tên thay số (`FLAG_LED1`, `SET_FLAG_LED1()`)

---

## Cấu trúc `status` (1 byte = 8 bit)

| Bit | Tên | Mô tả |
|-----|-----|------|
| 0 | `FLAG_BTN1` | Nút 1: `1` = nhấn, `0` = không |
| 1 | `FLAG_BTN2` | Nút 2 |
| 2 | `FLAG_BTN3` | Nút 3 |
| 3 | `FLAG_BTN4` | Nút 4 |
| 4 | `FLAG_LED1` | LED 1: `1` = sáng |
| 5 | `FLAG_LED2` | LED 2 |
| 6 | `FLAG_LED3` | LED 3 |
| 7 | `FLAG_BAT`  | Pin yếu: `1` = yếu |

> **Tổng cộng: 8 thiết bị → chỉ dùng 1 byte RAM**

---

## Macro điều khiển (dễ dùng, an toàn)

```c
// LED1
#define SET_FLAG_LED1()    (status |= (1 << FLAG_LED1))
#define CLR_FLAG_LED1()    (status &= ~(1 << FLAG_LED1))
#define CHECK_FLAG_LED1()  (status & (1 << FLAG_LED1))