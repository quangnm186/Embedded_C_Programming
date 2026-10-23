Bạn đang làm việc với một thanh ghi điều khiển UART 32-bit. Tốc độ truyền (baud rate) được điều khiển bởi 4 bit nằm ở vị trí thứ 8 (tức là từ bit 8 đến bit 11).

Hãy viết một hàm để cập nhật trường tốc độ truyền này với một giá trị 4-bit mới. Tất cả các bit khác trong thanh ghi phải được giữ nguyên không đổi.

Ví dụ 1:

Đầu vào: reg = 0b0000 0000 0000 0000 0000 0000 0000 0000, baud = 0b1010

Đầu ra: 0b0000 0000 0000 0000 0000 1010 0000 0000

Ví dụ 2:

Đầu vào: reg = 0b1111 1111 1111 1111 1111 1111 1111 1111, baud = 0b0000

Đầu ra: 0b1111 1111 1111 1111 1111 0000 1111 1111