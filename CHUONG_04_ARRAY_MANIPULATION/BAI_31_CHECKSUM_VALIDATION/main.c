#include <stdio.h>

int validate_checksum(int *mem, int n) {
    // Write your XOR scan logic here
    int a=0;
    for(int i=0;i<n-1;i++)
    {
        a = a ^ (mem[i]);
    }
    if(a == mem[n-1])
    {
        return 1;
    }
    else
    {
       return 0;
    }
   
}

int main() {
    int n, arr[100];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = validate_checksum(arr, n);
    printf("%d", result);

    return 0;
}