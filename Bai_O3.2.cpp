#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void nhapc(char str[]){
	do{
		cout<<"Nhap chuoi khong qua 50 ky tu: ";
		fflush(stdin);
		gets(str);
	}while(strlen(str) > 50);
}
void kiem_tra(char str[]){
	int dau = 0, dem = 0;
	for(int i = 0; i< strlen(str) - 1; i++){
		if(str[i] == ' ' && str[i + 1] == ' '){
			dau++;
		}
		if(str[i] == ' ' && str[i +1] != ' '){
			dem++;
		}
	}
	if(str[0] != ' '){
			dem++;
		}
	if(dau != 0 || dem > 10){
		cout<<"Chuoi khong hop le!";
	}else{
		cout<<"Chuoi hop le!";
	}
}
int main(){
	char str[50];
	nhapc(str);
	kiem_tra(str);
}
