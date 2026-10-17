Bạn đang làm việc với một thanh ghi điều khiển 8-bit. Hãy viết một hàm để xóa (đặt về 0) bit tại một vị trí cho trước mà không làm ảnh hưởng đến các bit khác.

Sử dụng chỉ số tính từ 0 cho các vị trí bit (0 = LSB - bit có trọng số nhỏ nhất, 7 = MSB - bit có trọng số lớn nhất).

Ví dụ 1:

Đầu vào: reg = 0b00000111, pos = 0

Đầu ra: 0b00000110

Ví dụ 2:

Đầu vào: reg = 0b00001111, pos = 3

Đầu ra: 0b00000111