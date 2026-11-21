Bạn được cho một mảng các số nguyên cùng với kích thước của nó. Chỉ sử dụng các phép toán trên con trỏ (pointer arithmetic) để thực hiện các yêu cầu sau:

* Duyệt qua mảng
* Tính tổng của tất cả các số chẵn
* In ra tổng đó

❌ Không sử dụng cách truy cập chỉ số dạng `arr[i]`.
✅ Chỉ sử dụng việc di chuyển con trỏ và giải tham chiếu (dereferencing - dùng toán tử `*`).

**Ví dụ 1**

* **Đầu vào:** `n = 5, arr = [10 21 32 43 50]`
* **Đầu ra:** `Sum = 92`

**Ví dụ 2**

* **Đầu vào:** `n = 4, arr = [11 13 15 17]`
* **Đầu ra:** `Sum = 0`

**Ví dụ 3**

* **Đầu vào:** `n = 6, arr = [2 4 6 8 10 12]`
* **Đầu ra:** `Sum = 42`