#include <stdio.h>

// Hàm phụ trợ: Đảo ngược các phần tử trong mảng từ vị trí start đến end
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate_left(int arr[], int n, int k) {
    // Trường hợp mảng rỗng hoặc không cần xoay
    if (n == 0) return;
    
    // Xử lý nếu k lớn hơn kích thước mảng n
    k = k % n; 
    if (k == 0) return;

    // Áp dụng quy tắc đảo ngược 3 bước
    reverse(arr, 0, k - 1);     // Bước 1: Đảo k phần tử đầu
    reverse(arr, k, n - 1);     // Bước 2: Đảo n - k phần tử sau
    reverse(arr, 0, n - 1);     // Bước 3: Đảo toàn bộ mảng
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[100];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Rotate the array
    rotate_left(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n-1){
            printf(" ");
        }
    }

    return 0;
}