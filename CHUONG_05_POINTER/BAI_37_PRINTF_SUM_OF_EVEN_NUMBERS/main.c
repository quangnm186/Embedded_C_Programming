#include <stdio.h>

int sum_even_numbers(int *ptr, int n) {
    // Your logic here
    int tong=0;
    for(int i=0;i<n;i++)
    {
        if(ptr[i]%2==0)
        {
            tong = tong + ptr[i];
        }
    }
    return tong;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sum_even_numbers(arr, n);

    printf("Sum = %d", result);

    return 0;
}