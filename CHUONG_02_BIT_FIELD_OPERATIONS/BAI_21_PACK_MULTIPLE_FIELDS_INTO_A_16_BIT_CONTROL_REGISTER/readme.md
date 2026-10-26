Trong các hệ thống nhúng (embedded systems), nhiều trường cấu hình (configuration fields) thường được đóng gói vào một thanh ghi duy nhất bằng các thao tác cấp độ bit (bit-level operations).

Bạn được cung cấp bảng mô tả các trường cần đóng gói vào một thanh ghi điều khiển 16-bit như sau:

Trường (Field)    Số bit (Bits)   Vị trí theo thứ tự bit trọng số thấp trước (Position - LSB-first)
Mode              3                Bit 0 – 2

Speed             5                Bit 3 – 7

Reserved          2                Bit 8 – 9 (bắt buộc phải bằng 0)

Status            6                Bit 10 – 15

Nhiệm vụ của bạn là:
- Đọc các giá trị mode, speed, và status từ đầu vào (input).
- Đóng gói chúng vào một thanh ghi kiểu uint16_t theo đúng cấu trúc bit đã cho.
- Đảm bảo các bit dành riêng (reserved bits 8–9) luôn giữ giá trị bằng 0.
- In ra giá trị thanh ghi sau khi đã đóng gói.

Ví dụ 1:
 Đầu vào (Input): mode = 3, speed = 10, status = 12
 Đầu ra (Output): 12371(Hệ Hex: 0x3053, Hệ nhị phân: 0011 0000 0101 0011)

Ví dụ 2:
 Đầu vào (Input): mode = 7, speed = 31, status = 63
 Đầu ra (Output): 64767(Hệ Hex: 0xFCFF, Hệ nhị phân: 1111 1100 1111 1111)