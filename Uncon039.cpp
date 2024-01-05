#include <stdio.h>

int main() {
  int n;
  printf("Nhap so luong phan tu cua mang la: ");
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++) {
    printf("nhap so luong phan tu %d: ", i + 1);
    scanf("%d", &a[i]);
  }
 
  int max = -1;
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] % 2 == 0) {
      max = i;
      break;
    }
  }
  
  if (max != -1) {
    printf("so chan co trong mang là %d.\n", a[max]);
  } else {
    printf("Khong co so chan trong mang.\n");
  }

  return 0;
}
