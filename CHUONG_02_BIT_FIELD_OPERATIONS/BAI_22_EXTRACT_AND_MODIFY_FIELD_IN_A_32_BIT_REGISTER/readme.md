Trong các hệ thống nhúng (embedded systems), một thanh ghi cấu hình 32-bit thường chứa nhiều trường dữ liệu được đóng gói chung với nhau.

Nhiệm vụ của bạn là:

- Trích xuất (extract) một trường dữ liệu gồm 5 bit nằm ở các vị trí từ bit 10 đến bit 14 từ một giá trị thanh ghi 32-bit.

- Nếu giá trị của trường này nhỏ hơn 31, hãy tăng giá trị của nó lên 1 đơn vị (increment by 1).

- Sau đó, ghi giá trị vừa được cập nhật này quay trở lại đúng các vị trí bit đó trong thanh ghi, đồng thời giữ nguyên toàn bộ các bit còn lại không đổi.

- Chỉ sử dụng các phép toán thao tác bit (bitwise operations) để trích xuất, chỉnh sửa và cập nhật lại thanh ghi.

Mô hình bố cục bit (bit 0 là LSB - bit trọng số thấp nhất):

Plaintext

Thanh ghi: [31 ... 15 | 14 13 12 11 10 | 9 ... 0]

                         ↑  ↑  ↑  ↑  ↑ (trường mục tiêu cần xử lý)
Ví dụ 1:

Đầu vào (Input): 0x00003C00

Đầu ra (Output): 0x00004000

(Trường ở bit 10–14 ban đầu có giá trị là 0x1E = 30 -> được tăng lên 31)

Ví dụ 2: 
Đầu vào (Input): 0x00000000
Đầu ra (Output): 0x00000400

(Trường ban đầu có giá trị là 0 -> trở thành 1)

Ví dụ 3:

Đầu vào (Input): 0x00007C00

Đầu ra (Output): 0x00007C00

(Trường ban đầu có giá trị là 31 -> giữ nguyên không đổi)