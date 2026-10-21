Bạn đang làm việc với một thanh ghi trạng thái phần cứng 32-bit. Hãy trích xuất một vài bit từ thanh ghi đó, bắt đầu từ một vị trí bit cho trước với độ dài nhất định. Trả về giá trị đã trích xuất dưới dạng một số nguyên không dấu.

Quy ước chỉ số bắt đầu từ 0 (LSB - bit có trọng số nhỏ nhất ở vị trí 0).

Ví dụ 1

Đầu vào: reg = 0b1011 0110 0111 0000 0000 0000 0000 0000, pos = 28, len = 4

Đầu ra: 0b1011

Ví dụ 2

Đầu vào: reg = 0b0000 0000 0000 0000 0000 0000 1111 1111, pos = 0, len = 8

Đầu ra: 0b11111111