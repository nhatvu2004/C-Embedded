## `volatile` – Biến có thể thay đổi ngoài luồng (ISR, phần cứng)

### Mục đích
- **Ngăn trình biên dịch tối ưu sai**
- **Đảm bảo đọc/ghi RAM thật** (không cache trong thanh ghi)
- **Dùng cho ISR, thanh ghi ngoại vi, biến chia sẻ**

---

### Cú pháp
```c
volatile uint32_t millis;         // Biến toàn cục
volatile GPIO_TypeDef* GPIOA;     // Thanh ghi