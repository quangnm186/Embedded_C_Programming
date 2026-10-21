Cho một thanh ghi 8-bit. Hãy bật tất cả các bit nằm trong khoảng từ vị trí start đến end (tính cả hai đầu mút) thành 1.

Chỉ số vị trí được tính từ 0 (0-based indexing) và giả định rằng start <= end.

Ví dụ 1

Đầu vào: reg = 0b00000000, start = 1, end = 3

Đầu ra: 0b00001110

Ví dụ 2

Đầu vào: reg = 0b00001000, start = 0, end = 2

Đầu ra: 0b00001111

Ví dụ 3

Đầu vào: reg = 0b00000001, start = 3, end = 5

Đầu ra: 0b00111001