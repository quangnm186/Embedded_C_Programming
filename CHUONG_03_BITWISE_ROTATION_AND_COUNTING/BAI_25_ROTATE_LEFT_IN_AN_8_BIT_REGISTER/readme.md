Bạn được cho một thanh ghi 8-bit và số vị trí n. 

Hãy xoay thanh ghi sang trái n bit. 

Thao tác xoay phải là xoay vòng (circular), nghĩa là các bit ở ngoài cùng bên trái khi bị đẩy ra sẽ quay vòng về phía bên phải.

Sử dụng chỉ số bắt đầu từ 0 (0-based indexing) và trả về kết quả dưới dạng một giá trị 8-bit.

Ví dụ 1:

Đầu vào: reg = 0b1011 0000, n = 1

Đầu ra: 0b0110 0001

Ví dụ 2:

Đầu vào: reg = 0b1000 0001, n = 2

Đầu ra: 0b0000 0110

Ví dụ 3:

Đầu vào: reg = 0b1111 1111, n = 4

Đầu ra: 0b1111 1111