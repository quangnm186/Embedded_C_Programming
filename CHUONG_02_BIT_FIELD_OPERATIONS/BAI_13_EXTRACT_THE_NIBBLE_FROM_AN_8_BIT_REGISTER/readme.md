Đề bài: Viết chương trình C để trích xuất một nibble (giá trị 4-bit) từ một thanh ghi 8-bit.

Người dùng cung cấp một số nguyên 8-bit (giá trị thanh ghi) và vị trí của nibble (0 cho nibble thấp, 1 cho nibble cao).

Nhiệm vụ của bạn là trích xuất và in ra giá trị thập phân của nibble đó.

Định dạng đầu vào (Input Format):

Một số nguyên 8-bit (0-255) đại diện cho giá trị của thanh ghi.

Một vị trí nibble (0 cho nibble thấp, 1 cho nibble cao).

Định dạng đầu ra (Output Format):

Giá trị 4-bit được trích xuất (0-15).

Ví dụ 1:

Đầu vào: reg = 0xAB, pos = 0

Đầu ra: 11 (0xAB → nibble thấp = 0xB = 11)

Ví dụ 2:

Đầu vào: reg = 0xAB, pos = 1

Đầu ra: 10 (0xAB → nibble cao = 0xA = 10)

Ví dụ 3:

Đầu vào: reg = 0xFF, pos = 0

Đầu ra: 15