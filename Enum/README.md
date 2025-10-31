## `enum` – Liệt kê hằng số (Trạng thái, mã lệnh, cấu hình)

### Mục đích
- **Tăng tính đọc code** (thay số bằng tên)
- **Tránh lỗi "magic number"**
- **Dễ bảo trì, debug, mở rộng**

---

### Cú pháp cơ bản
```c
enum tên {
    GIÁ_TRỊ_1,
    GIÁ_TRỊ_2 = 5,
    GIÁ_TRỊ_3
};