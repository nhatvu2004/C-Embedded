## `#pragma pack` – Đóng gói struct (Loại bỏ padding)

### Mục đích
- **Đảm bảo struct có kích thước đúng** (không bị chèn byte thừa)
- **Dùng cho giao tiếp**: UART, SPI, CAN, Modbus, Flash
- **Tiết kiệm RAM/Flash** trong vi điều khiển

---

### Cú pháp
```c
#pragma pack(push, 1)  // Bắt đầu đóng gói 1-byte
typedef struct {
    uint8_t  id;
    uint16_t value;
    uint8_t  crc;
} packet_t;
#pragma pack(pop)      // Kết thúc, trở về mặc định