Cho một thanh ghi 32-bit, hãy thay thế một nhóm bit (bắt đầu từ vị trí pos) bằng một giá trị mới (val).
Chỉ các bit được chỉ định mới bị thay đổi — các bit khác phải được giữ nguyên.

Ví dụ 1

Đầu vào: reg = 0b1111 1111, val = 0b0000, pos = 4, len = 4

Đầu ra: 0b0000 1111

Ví dụ 2

Đầu vào: reg = 0b0000 1111, val = 0b10, pos = 1, len = 2

Đầu ra: 0b0000 1101