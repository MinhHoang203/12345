#include <stdio.h>

float trung_binh(int s[], int n) {
    int b = 0;
    for (int i = 0; i < n; i++) {
        b += s[i];
    }
    return (float)b / n;
}
int main() {
    int n;
    printf("Nhap kich thuoc cua mang la: ");
    scanf("%d", &n);
    

    int arr[n];
    printf("Nhap cac gia tri cua mang la:\n ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    float ketqua =trung_binh (arr, n);
    printf("So nguyen trung binh cua mang la: %.2f\n", ketqua);
    
    
    return 0;
}
