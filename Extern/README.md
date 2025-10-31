## `extern` – Khai báo biến/hàm ở file khác (Liên kết nhiều file .c)

### Mục đích
- **Chia sẻ biến toàn cục** giữa các file `.c`
- **Tránh định nghĩa lại** → chỉ **khai báo**
- **Tổ chức code lớn**: driver, config, state

---

### Cú pháp
```c
// file.h
extern uint32_t system_ticks;

// file.c (chỉ 1 file định nghĩa)
uint32_t system_ticks = 0;