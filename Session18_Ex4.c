#include<stdio.h>
#include<string.h>

int main(){
	struct Student{
		int id;
		char fullName[100];
		int age;
		char phone[20];
	};
	struct  Student students[50];
	printf("Ban hay nhap thong tin cho sinh vien.\n");
	for(int i=0; i<5; i++){
		students[i].id = i + 1; 
		printf("Nhap thong tin cho sinh vien thu %d\n", i+1);
		printf("---Nhap ho va ten cho sinh vien : ");
		fgets(students[i].fullName, sizeof(students[i].fullName), stdin);
		printf("---Nhap so tuoi cho sinh vien: ");
		scanf("%d", &students[i].age);
		fflush(stdin);
		printf("---Nhap so dien thoai cho sinh vien : ");
		fgets(students[i].phone, sizeof(students[i].phone), stdin);
	}
	for(int i=0; i<5; i++){
		printf("Thong tin sinh vien thu %d la: \n", i+1);
		printf("\nSinh vien %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
		printf("Ho va ten: %s",students[i].fullName);
		printf("Tuoi %d",students[i].age);
		printf(" So dien thoai %s",students[i].phone);
	}
	return 0;
}
