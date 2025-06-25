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
    int found = 0;
    for (int i=0;i<n;i++) {
        if (arr[i] == arr[n-1-i]) {
            printf("cap doi xung:(%d,%d) \n ",arr[i],arr[n-1-i]);
            found = 1;
        }
    }
    if (!found) {
        printf("khong tim thay cap doi xung\n");
    }
    return 0;

}
