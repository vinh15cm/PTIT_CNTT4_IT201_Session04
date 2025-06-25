#include <stdio.h>
int main() {
    int n;
    int arr[1000];
    // nhap so luong phan tu
    printf("nhap so luong phan tu: \n");
    scanf("%d", &n);
    // kiem tra so luong hop le
    if(n <=0 || n >1000){
        printf("so luong phan tu khong hop le\n");
        return 1;
    }
    // nhap mang
    printf("nhap cac phan tu: \n");
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    // nhap cac gia tri can tim
    int x;
    printf("nhap cac gia tri can tim :\n");
    scanf("%d",&x);

    // tim chi so cuoi cung cua x
    int index = -1;
    for (int i=0;i<n;i++) {
        if (arr[i] == x) {
            index = i;
        }
    }
    if (index != -1) {
        printf("%d\n",index);
    }else {
        printf("khong tim thay phan tu\n");
    }
    return 0;

}