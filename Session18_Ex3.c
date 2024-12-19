#include<stdio.h>
#include<string.h>

int main(){
	struct Student{
		int id;
		char fullName[100];
		int age;
		char phone[20];
	};
	struct  Student students[5];
	for(int i=0; i<5; i++){
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
		printf("%s",students[i].fullName);
		printf("%d",students[i].age);
		printf("%s",students[i].phone);
	}
	return 0;
}
