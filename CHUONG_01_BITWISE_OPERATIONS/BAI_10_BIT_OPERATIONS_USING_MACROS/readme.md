Trong hệ thống nhúng, việc sửa đổi các bit cụ thể của thanh ghi điều khiển hoặc thanh ghi trạng thái là một công việc thường xuyên. Bạn được cung cấp một thanh ghi 8-bit (uint8_t) và phải thực hiện các thao tác bit sau trên nó:

Thiết lập (set) các bit 2 và 7

Xóa (clear) bit 3

Đảo trạng thái (toggle) bit 5

Nhiệm vụ của bạn là hiện thực hóa một hàm có các đặc điểm sau:

Nhận vào một thanh ghi uint8_t reg làm đầu vào

Áp dụng tất cả các thao tác trên theo đúng thứ tự đã cho

Trả về giá trị thanh ghi đã được cập nhật

Sử dụng các macro thao tác bit phù hợp để dễ dàng bảo trì.

Ví dụ 1
Đầu vào: 0

Đầu ra: 164
(00000000 → 10100100)

Ví dụ 2
Đầu vào: 255

Đầu ra: 215
(11111111 → Set 2 & 7 → đã được thiết lập sẵn, Clear 3 → xóa bit 3, Toggle 5 → đảo bit 5 → trở thành 0)

Ví dụ 3
Đầu vào: 36

Đầu ra: 132
(00100100 → Toggle 5 → bị xóa, Clear 3 → đã ở trạng thái 0 sẵn, Set 2 và 7 → trở thành 10000100)