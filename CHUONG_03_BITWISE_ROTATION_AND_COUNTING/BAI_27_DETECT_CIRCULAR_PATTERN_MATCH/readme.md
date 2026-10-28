Cho một thanh ghi 16-bit và một mẫu mục tiêu (cũng gồm 16-bit). Hãy kiểm tra xem mẫu mục tiêu có thể khớp với bất kỳ phép xoay vòng (circular rotation) nào của thanh ghi hay không.

Ví dụ 1

Đầu vào: reg = 0b1011 0000 0000 0000, target = 0b0000 0000 0000 1011

Đầu ra: 1 (khớp sau khi xoay trái 13 lần)

Ví dụ 2

Đầu vào: reg = 0b1000 0000 0000 0001, target = 0b0000 0000 0000 1100

Đầu ra: 1

Ví dụ 3

Đầu vào: reg = 0b1111 1111 1111 1111, target = 0b1111 1111 1111 0111

Đầu ra: 0