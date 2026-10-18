Trong firmware của bạn, bạn muốn đảo trạng thái (toggle) một bit cụ thể trong một thanh ghi 8-bit. Đảo trạng thái nghĩa là nghịch đảo giá trị của bit đó: nếu là 1 → chuyển thành 0, và nếu là 0 → chuyển thành 1.

Sử dụng chỉ số bắt đầu từ 0 (0-based indexing) cho các vị trí bit (0 = bit có trọng số nhỏ nhất - LSB, 7 = bit có trọng số lớn nhất - MSB).

Ví dụ 1

Đầu vào: reg = 0b00000110, pos = 1

Đầu ra: 0b00000100

Ví dụ 2

Đầu vào: reg = 0b00000000, pos = 3

Đầu ra: 0b00001000

Ví dụ 3

Đầu vào: reg = 0b00001111, pos = 3

Đầu ra: 0b00000111