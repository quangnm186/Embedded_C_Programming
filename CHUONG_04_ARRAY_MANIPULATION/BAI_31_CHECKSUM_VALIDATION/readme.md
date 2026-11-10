Bạn được cung cấp một khối bộ nhớ (mảng gồm n byte), bao gồm n - 1 byte dữ liệu và byte cuối cùng là byte kiểm tra lỗi (checksum).

Nhiệm vụ của bạn là xác minh xem byte cuối cùng có bằng phép XOR của tất cả các byte phía trước nó hay không (không bao gồm chính nó).

Trả về:
- 1 nếu checksum hợp lệ.

- 0 nếu checksum không chính xác.

Giải thích về Checksum:

Checksum là một phương pháp phát hiện lỗi đơn giản nhằm đảm bảo dữ liệu không bị hỏng trong quá trình lưu trữ hoặc truyền tải. Bên gửi sẽ tính toán giá trị này dựa trên một thuật toán cụ thể rồi gửi kèm theo dữ liệu; bên nhận sẽ tính toán lại tương tự từ dữ liệu nhận được — nếu cả hai khớp nhau thì dữ liệu còn nguyên vẹn, ngược lại nhiều khả năng dữ liệu đã bị lỗi.

Một số phương pháp thường dùng:

- Simple Sum (Tổng đơn giản): Cộng tất cả các byte lại với nhau, chỉ giữ lại 8 hoặc 16 bit thấp nhất.

- XOR Checksum: Thực hiện phép XOR trên tất cả các byte dữ liệu.

- CRC (Cyclic Redundancy Check): Độ chính xác cao hơn, v.v.

Ví dụ:

- Ví dụ 1:

    Đầu vào: n = 5, mem = [10, 20, 30, 40, 60]
    
    Đầu ra: 1
    
    (Giải thích: XOR = 10 ^ 20 ^ 30 ^ 40 = 60)
    
- Ví dụ 2:

    Đầu vào: n = 4, mem = [5, 9, 1, 3]
    
    Đầu ra: 0
    
    (Giải thích: XOR = 5 ^ 9 ^ 1 = 13, trong khi checksum ở cuối mảng là 3)
    
- Ví dụ 3:

    Đầu vào: n = 3, mem = [7, 3, 4]

    Đầu ra: 1
    
    (Giải thích: XOR = 7 ^ 3 = 4)