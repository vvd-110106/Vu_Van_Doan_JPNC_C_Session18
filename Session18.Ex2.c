#include<stdio.h>

int main(){
	
	struct Student{
		char fullName[100];
		int age;
		char phone[20];
	};
	struct Student student;
	printf("Nhap thong tin cho sinh vien \n");
	printf("---Nhap ho va ten cho sinh vien : ");
	fgets(student.fullName, sizeof(student.fullName), stdin);
	printf("---Nhap so tuoi cho sinh vien: ");
	scanf("%s", &student.age);
	fflush(stdin);
	printf("---Nhap so dien thoai cho sinh vien : ");
	fgets(student.phone, sizeof(student.phone), stdin);
	printf("Ho ten la: %s \n", student.fullName);
	printf("Tuoi la: %d\n", student.age);
	printf("So dien thoai la: %s\n", student.phone);
	return 0;
}
