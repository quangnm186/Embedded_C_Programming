Đề bài: Viết một chương trình C để bật (set) hoặc xóa (clear) một bit cụ thể trong thanh ghi 8-bit dựa trên dữ liệu người dùng nhập vào.

- Người dùng cung cấp một số nguyên 8-bit (giá trị của thanh ghi), vị trí bit (từ 0 đến 7), và chế độ hoạt động (0 để xóa bit, 1 để bật bit).

- Nhiệm vụ của bạn là chỉnh sửa giá trị thanh ghi tương ứng và in ra giá trị mới sau khi cập nhật.

Định dạng đầu vào (Input Format)

- Một số nguyên 8-bit (từ 0 đến 255) biểu diễn giá trị thanh ghi.

- Một số nguyên (từ 0 đến 7) biểu diễn vị trí của bit cần thao tác.

- Một số nguyên (0 hoặc 1) biểu diễn thao tác cần thực hiện (1 để bật bit, 0 để xóa bit).

Định dạng đầu ra (Output Format)

- Giá trị của thanh ghi sau khi đã thực hiện bật/xóa bit.

Ví dụ 1 (Bật bit thứ 3)

- Đầu vào (Input):10 3 1

- Đầu ra (Output):10

Giải thích:

- 10 trong hệ nhị phân = 00001010

- Bật bit 3=> 00001010 (hệ thập phân là 10)