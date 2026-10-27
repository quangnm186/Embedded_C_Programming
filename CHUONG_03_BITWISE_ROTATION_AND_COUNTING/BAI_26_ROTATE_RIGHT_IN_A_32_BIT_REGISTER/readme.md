Bạn được cho một thanh ghi phần cứng 32-bit và một số nguyênn. 

Hãy xoay thanh ghi sang phải n bit theo dạng xoay vòng (circular).

Các bit bị đẩy ra ở phía bên phải sẽ xuất hiện trở lại ở phía ngoài cùng bên trái.

Ví dụ 1:

Đầu vào: reg = 0b0000 0000 0000 0000 0000 0000 0000 1111, n = 4

Đầu ra: 0b1111 0000 0000 0000 0000 0000 0000 0000

Ví dụ 2:

Đầu vào: reg = 0b0000 0000 0000 0000 0000 0000 0000 0001, n = 1

Đầu ra: 0b1000 0000 0000 0000 0000 0000 0000 0000

Ví dụ 3:

Đầu vào: reg = 0b1000 0000 0000 0000 0000 0000 0000 0000, n = 2

Đầu ra: 0b0010 0000 0000 0000 0000 0000 0000 0000