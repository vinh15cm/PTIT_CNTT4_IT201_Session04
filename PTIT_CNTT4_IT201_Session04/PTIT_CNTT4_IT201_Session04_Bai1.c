#include<stdio.h>
int main(){
int n;
// nhap so luong phan tu
printf("nhap so luong phan tu: \n");
scanf("%d", &n);

// kiem tra so hop le
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
int x;
// nhap gia tri can tim
printf("nhap gia tri can tim: \n");
scanf("%d", &x);
// tim chi so dau tien co gia tri x
int timThay =0;
for(int i = 0; i < n; i++){
if(arr[i] == x){
printf("%d\n",i); // in ra cho so dau tien
timThay=1;
break;
}
}
if(!timThay){
printf("khong tim thay\n");
}
return 0;
}