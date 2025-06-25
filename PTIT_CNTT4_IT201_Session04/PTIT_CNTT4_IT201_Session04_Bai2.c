#include<stdio.h>
int main() {
    int n;
    // nhap so luong phan tu
    printf("nhap so luong phan tu: \n");
    scanf("%d", &n);
    // kiem tra so luong hop le
    if(n <=0 || n >1000){
        printf("so luong phan tu khong hop le\n");
        return 1;
    }
    int arr[1000];
    // nhap cac phan tu trong mang
    printf("nhap cac phan tu :\n ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    // tim gia tri lon nhat va tri so dau tien cua no
    int max = arr[0];
    int index =0;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }
    // in ra chi so cua phan tu lon nhat dau tien
    printf(" %d\n", index);
    return 0;
}