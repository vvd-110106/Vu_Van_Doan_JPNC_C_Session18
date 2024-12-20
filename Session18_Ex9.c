#include<stdio.h>

// Khai bao nguyen mau ham

void showMenu();
void thucDon();
void themPhanTu();
void suaPhanTu();
void xoaPhanTu();
void sapXep();
void timKiem();

struct Dish{
		int id;
		char name[100];
		int price;
	};
	struct Dish menu[100]={
		{1, "Banh Mi Bate", 10.000},
		{2, "Pho Bo Tai", 30.000},
		{3, "Lau Ech", 500.000},
		{4, "Bia", 15.000},
		{5, "Lau Thai", 500.000},
	};

int choice;
int cound=5;
int main(){
	do{
		showMenu();
		printf("--->Lua chon cua ban la: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				thucDon();
				break;
			case 2:
				themPhanTu();
				break;
			case 3:
				suaPhanTu();
				break;
			case 4:
				xoaPhanTu();
				break;
			case 5:
				sapXep();
				break;
			case 6:
				timKiem();
				break;
			case 7:
				printf("Cam on ban da su dung chuong trinh...>>>");
				return 0;
			default:
				printf("Khong hop le. ");
		}
	}while(choice!=7);
	return 0;
}

// Khai bao logic ham

void showMenu(){
	printf("\n----------MENU---------\n");
	printf(" 1. In ra gia tri cac phan tu co trong menu mon an.\n ");
	printf("2. Them phan tu vao vi tri chi dinh. \n");
	printf(" 3. Sua phan tu vao vi tri chi dinh. \n");
	printf(" 4. Xoa phan tu vao vi tri chi dinh. \n");
	printf(" 5. Sap xep cac mon an. \n");
	printf(" 6. Tim kiem mon an . \n");
	printf(" 7. Thoat. \n");
}

void thucDon(){ 
	for(int i=0 ; i<5 ; i++){
		menu[i].id = i + 1;
		printf("Id mon an: %d\n", menu[i].id);
		printf("Ten mon an: %s\n", menu[i].name);
		printf("Gia tien: %d.000\n", menu[i].price);
	}
}
void themPhanTu(){
	fflush(stdin);
	printf("Nhap mon an muon them: ");
	fgets(menu[cound].name, sizeof(menu[cound].name), stdin);
	printf("Moi ban nhap gia tien: ");
    scanf("%d", &menu[cound].price);
    fflush(stdin);
	printf("Sau khi them la:\n");
	for(int i=0 ; i<cound+1; i++){
		menu[i].id = i + 1;
		printf("Id mon an: %d\n", menu[i].id);
		printf("Ten mon an: %s\n", menu[i].name);
		printf("Gia tien: %d.000\n", menu[i].price);
	}
	cound++;
}

void suaPhanTu(){
	int sua;
	fflush(stdin);
	printf("Nhap vi tri ban muon sua:");
	scanf("%d", &sua);
	fflush(stdin);
	printf("Nhap mon sua vao: ");
	fgets(menu[sua].name, sizeof(menu[sua].name), stdin);
	printf("Moi ban nhap gia tien: ");
    scanf("%d", &menu[cound].price);
    fflush(stdin);
	printf("Sau khi sua la:\n");
	for(int i=0 ; i<cound; i++){
		menu[i].id = i + 1;
		printf("Id mon an: %d\n", menu[i].id);
		printf("Ten mon an: %s\n", menu[i].name);
		printf("Gia tien: %d.000\n", menu[i].price);
	}
}

void xoaPhanTu(){
	cound--;
	printf("Sau khi xoa phan tu : \n");
	for(int i = 0 ; i < cound ; i++){
		printf("Id cua mon la: %d\n", menu[i].id);
		printf("Ten mon an la: %s\n", menu[i].name);
		printf("GIa tien la: %d\n", menu[i].price);
	}
}

void sapXep(){
	for (int i = 0; i < cound - 1; i++){
        for (int j = 0; j < cound - i - 1; j++){
            if (menu[j].price > menu[j + 1].price){
                struct Dish temp = menu[j];
                menu[j] = menu[j + 1];
                menu[j + 1] = temp;
            }
        }
    }
    for(int i = 0 ; i < cound ; i++){
		printf("Id cua mon la: %d\n", menu[i].id);
		printf("Ten mon an la: %s\n", menu[i].name);
		printf("GIa tien la: %d\n", menu[i].price);
	}
}

void timKiem(){
	
}
