## `struct` – Nhóm dữ liệu liên quan (Cấu trúc thiết bị, gói tin, driver)

### Mục đích
- **Gom nhiều kiểu dữ liệu vào 1 biến**
- **Tăng tính đọc & tổ chức code**
- **Dễ truyền tham số, lưu cấu hình**

---

### Cú pháp cơ bản
```c
struct tên {
    kiểu1 thành_viên1;
    kiểu2 thành_viên2;
    // ...
};