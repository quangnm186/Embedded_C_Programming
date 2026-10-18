Bạn đang làm việc với một thanh ghi cấu hình 32-bit. Hãy bật (set) một số bit bắt đầu từ một vị trí cho trước và kéo dài trong một khoảng độ dài cụ thể. Các bit này phải được đặt thành 1 (ON) mà không làm ảnh hưởng đến các bit khác trong thanh ghi.

Sử dụng chỉ số bắt đầu từ 0 (0-based indexing).

Ví dụ 1

Đầu vào: reg = 0b0000 0000 0000 0000 0000 0000 0000 0000, pos = 4, len = 3

Đầu ra: 0b0000 0000 0000 0000 0000 0000 0111 0000

Ví dụ 2

Đầu vào: reg = 0b0000 0000 0000 0000 0000 0000 0000 0001, pos = 1, len = 2

Đầu ra: 0b0000 0000 0000 0000 0000 0000 0000 0111