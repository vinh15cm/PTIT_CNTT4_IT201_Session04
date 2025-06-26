#include<stdio.h>
#include<string.h>
#define MAX 100
// khai bao cau truc student
typedef struct{
int id;
    char name[MAX];
    int age;
} Student;
int main() {
    Student students[5];
    // nhap thong tin 5 sinh vien
    printf("nhap thong tin 5 sinh vien: \n");
    for (int i = 0; i < 5; i++) {
        printf("sinh vien thu %d: \n", i+1);
        printf("id: ");
        scanf("%d", &students[i].id);
        getchar();// loai bo ki tu '\n'con lai trong bo dem
        printf("name: ");
        fgets(students[i].name,MAX,stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';// xoa '\n' o cuoi chuoi
        printf("age: ");
        scanf("%d", &students[i].age);


    }
    // nhap ID can tim
    int searchId;
    printf("nhap ID can tim: \n");
    scanf("%d", &searchId);
    // tim kiem ID
    int found = -1;
    for (int i = 0; i < 5; i++) {
        if (students[i].id == searchId) {
            printf("{id: %d, name: \"%s\", age: %d}\n",
            students[i].id,
            students[i].name,
            students[i].age);
            found = 1;
            break;
        }
    }
    if (found == -1) {
        printf("khong tim thay\n");
    }
    return 0;
}