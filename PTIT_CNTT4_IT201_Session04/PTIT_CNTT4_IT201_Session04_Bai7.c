#include <stdio.h>
int main() {
    int n,arr[1000];
    // nhap so luong phan tu
    printf("nhap so luong phan tu: \n");
    scanf("%d",&n);
    if (n <=0 || n >1000) {
        printf("so luong phan tu khong hop le\n");
        return 1;
    }
    // nhap mang
    printf("nhap cac phan tu: \n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    // tim va in cac dap doi xung
     int isSymmetric = 1;
    for (int i = 0; i < n/2; i++) {
        if (arr[i] != arr[n-1-i]) {
            isSymmetric = 0;
            break;
        }
    }
    if (!isSymmetric) {
        printf("khong tim thay cap doi xung\n");
    }
    return 0;

}
