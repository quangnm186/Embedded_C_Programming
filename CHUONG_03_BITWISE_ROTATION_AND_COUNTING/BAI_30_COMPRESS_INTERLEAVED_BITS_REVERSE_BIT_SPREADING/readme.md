Ở bài toán trước, chúng ta đã xen kẽ (interleave) một số 8-bit thành một giá trị 16-bit bằng cách chèn số 0 vào giữa mỗi bit. Bây giờ nhiệm vụ của bạn là:

- Đảo ngược quá trình xen kẽ đó (Reverse interleaving)

- Trích xuất chỉ các bit ở các vị trí chẵn từ một số 16-bit

- Tái tạo lại giá trị 8-bit ban đầu

Logic ví dụ:

Đầu vào 16-bit:b15 b14 b13 ... b1 b0

Trích xuất các bit tại các vị trí: 0, 2, 4, 6, 8, 10, 12, 14  và xếp lại thành:

b0 b1 b2 b3 b4 b5 b6 b7 (tức là b(2i) -> bit i)

Ví dụ 1

Đầu vào: val = 20548-> Nhị phân: 0101000001000100

Đầu ra: 202 (Nhị phân: 11001010)

Ví dụ 2

Đầu vào: val = 21845 -> Nhị phân: 0101010101010101

Đầu ra: 255 (Nhị phân: 11111111)

Ví dụ 3

Đầu vào: val = 1 -> Nhị phân: 0000000000000001

Đầu ra: 1