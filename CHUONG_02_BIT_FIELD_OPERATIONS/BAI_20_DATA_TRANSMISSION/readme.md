Bạn đang chuẩn bị một giá trị 32-bit để truyền qua bus giao tiếp. Để đảm bảo tính tương thích giữa các nền tảng khác nhau, bạn phải chuyển đổi giá trị này thành 4 byte (theo thứ tự big-endian) và lưu chúng vào một mảng byte.

Ví dụ 1:

Đầu vào (Input): value = 0x12345678

Đầu ra (Output): arr[0] = 0x12, arr[1] = 0x34, arr[2] = 0x56, arr[3] = 0x78

Ví dụ 2:

Đầu vào (Input): value = 0x01020304

Đầu ra (Output): arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4