#include<stdio.h>
#include<stdlib.h>
// ham hoan doi hai gia tri
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// ham sap xep mang tang dan(bubble sort)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
// ham tim kiem nhi pha
int binarySearch(int arr[], int n, int x) {
    int left =0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) {
            return 1;// tim thay
        } else if (arr[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }

    }
    return 0;// khong tim thay
}
int main() {
    int n;
    int arr[1000];
    // nhap so luong phan tu
    printf("nhap so luong phan tu: \n");
    scanf("%d", &n);
    // nhap cac phan tu trong mang
    printf("nhap cac phan tu: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // sap xep mang
    bubbleSort(arr, n);
    // tim kiem nhi pha
    int x;
    printf("nhap gia tri can tim: \n");
    scanf("%d", &x);
    if (binarySearch(arr, n, x)) {
        printf("tim thay\n");
    } else {
        printf("khong tim thay\n");
    }
    return 0;
}
