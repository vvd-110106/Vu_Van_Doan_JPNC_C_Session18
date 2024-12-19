#include<stdio.h>

int main(){
	
	struct Student{
		char name[100];
		int age;
		char phone[20];
	};
	struct Student student={"Vu Phuong Anh", 18, "123456789"};
	printf("Ho ten la: %s \n", student.name);
	printf("Tuoi la: %d\n", student.age);
	printf("So dien thoai la: %s\n", student.phone);
	return 0;
}
