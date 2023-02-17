#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void nhap_xau(char str[]){
	cout<<"Nhap xau : ";
	fflush(stdin);
	gets(str);
}
int kiem_tra(char str[]){
	int dem = 0;
	for(int i = 0; i < strlen(str); i++){
		if(str[i] == '('){
			dem1++;
		}
		if(str[i] == ')'){
			if(dem == 0){
				return false;
			}else{
				dem--;	
			}		
		}
	}
	if(dem){
		return false;
	}
	return true;	
}
int main(){
	char str[100];
	nhap_xau(str);
	if(kiem_tra(str)){
		cout<<"Xau hop le.";
	}else{
		cout<<"Xau khong hop le!";
	}
}
