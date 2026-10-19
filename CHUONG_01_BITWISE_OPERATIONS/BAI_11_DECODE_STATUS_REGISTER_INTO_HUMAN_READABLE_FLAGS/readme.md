Trong hệ thống nhúng, các thanh ghi trạng thái thường biểu diễn nhiều cờ (flag) bằng từng bit. Bạn được cung cấp một thanh ghi trạng thái 8-bit. Mỗi bit tương ứng với một điều kiện khác nhau.

Ánh xạ Bit sang Cờ
Bit 0: Power On (Nguồn bật)

Bit 1: Error (Lỗi)

Bit 2: Tx Ready (Sẵn sàng truyền)

Bit 3: Rx Ready (Sẵn sàng nhận)

Bit 4: Overheat (Quá nhiệt)

Bit 5: Undervoltage (Sụt áp)

Bit 6: Timeout (Hết thời gian chờ)

Bit 7: Reserved (Dành riêng)

Bạn phải viết một hàm có các đặc điểm sau:

Nhận vào một uint8_t status_reg

Giải mã xem cờ nào đang được bật (bit = 1)

Chỉ in ra tên các cờ được bật, mỗi cờ một dòng, theo thứ tự từ bit thấp đến bit cao (từ 0 đến 7)

Ví dụ 1
Đầu vào:
13

Đầu ra:

Plaintext
Power On
Tx Ready
Rx Ready

Ví dụ 2
Đầu vào:
48

Đầu ra:

Plaintext
Overheat
Undervoltage

Ví dụ 3
Đầu vào:
255

Đầu ra:

Plaintext
Power On
Error
Tx Ready
Rx Ready
Overheat
Undervoltage
Timeout
Reserved