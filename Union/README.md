## `union` – Dùng chung 1 vùng nhớ (Tiết kiệm RAM tối đa)

### Mục đích
- **Chỉ lưu 1 giá trị tại 1 thời điểm**
- **Tiết kiệm RAM cực mạnh** (chỉ tốn `sizeof(lớn nhất)`)
- **Xử lý giao thức, chuyển kiểu, truy cập bit riêng**

---

### Cú pháp
```c
union tên {
    kiểu1 thành_viên1;
    kiểu2 thành_viên2;
    kiểu3 thành_viên3;
};