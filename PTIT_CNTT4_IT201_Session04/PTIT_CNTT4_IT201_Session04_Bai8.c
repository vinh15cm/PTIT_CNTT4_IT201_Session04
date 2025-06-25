#include<stdio.h>
int main() {
    int n ,ar[1000],x;
    //nhap so luong phan tu
    printf("nhap so luong phan tu: \n");
    scanf("%d", &n);
    if (n <=0 || n >1000) {
        printf("so luong phan tu khong hop le\n");
        return 1;
    }
    // nhap cac phan tu
    printf("nhap cac phan tu: \n");
    for (int i=0;i<n;i++) {
        scanf("%d", &ar[i]);
    }
    // nhap gia tri can tim
    printf("nhap gia tri can tim: \n");
    scanf("%d", &x);
    // tim va in vi tri cac phan tu bang x
    int found = 0;
    for (int i=0;i<n;i++) {
        if (ar[i] == x) {
            if (found>0) printf(" ,");
            printf("%d",i);
            found++;
        }
    }
    if (!found) {
        printf("phan tu khong co trong mnag\n");
    }
    printf("\n");
    return 0;
}