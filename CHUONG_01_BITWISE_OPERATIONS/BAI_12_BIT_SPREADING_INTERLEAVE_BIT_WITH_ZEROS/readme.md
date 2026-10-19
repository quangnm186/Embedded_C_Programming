Trong một số giao thức hoặc ứng dụng phần cứng (ví dụ: kết xuất đồ họa, mã hóa tín hiệu), việc rải bit (bit spreading) hoặc xen kẽ bit được sử dụng để chèn các số 0 vào giữa các bit của một giá trị nhằm phục vụ cho các mục đích như căn chỉnh dữ liệu hoặc truyền tải.

Bạn được cung cấp một số 8-bit, và nhiệm vụ của bạn là:

Rải các bit sao cho sau mỗi bit sẽ là một số 0

Kết quả sẽ là một số 16-bit trong đó mỗi bit gốc nằm ở các vị trí chẵn (0, 2, 4...)

Tất cả các vị trí lẻ đều là số 0

Lô-gic ví dụ
Gốc (8-bit): b7 b6 b5 b4 b3 b2 b1 b0

Kết quả sau khi rải (16-bit): 0 b7 0 b6 0 b5 0 b4 0 b3 0 b2 0 b1 0 b0

Ví dụ 1
Đầu vào: val = 0b11001010 (Hệ thập phân: 202)

Đầu ra: 0b0101000001000100 → Hệ thập phân: 20548

Ví dụ 2
Đầu vào: val = 0b10101010

Đầu ra: 0b0100010001000100 → Hệ thập phân: 17476

Ví dụ 3
Đầu vào: val = 0b11111111

Đầu ra: 0b0101010101010101 → Hệ thập phân: 21845