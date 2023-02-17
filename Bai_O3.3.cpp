#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void nhap_chuoi(char str[]){
	do{
		cout<<"Nhap xau khong qua 80 ky tu: ";
		fflush(stdin);
		gets(str);
	}while(strlen(str) > 80);
}
void chen_ky_tu(char str[], char c, int k){
	if(k < 0) k = 0;
	if(k > strlen(str)) k = strlen(str);
	for(int i = strlen(str); i >= k; i--){
		str[i] = str[i - 1];
	}
	str[k - 1] = c;
}
int main(){
	char str[80];
	nhap_chuoi(str);
	char c;
	int k;
	cout<<"Nhap ky tu can chen : ";
	cin>>c;
	cout<<"Nhap vi tri chen : ";
	cin>>k;
	chen_ky_tu(str, c, k);
	cout<<"Chuoi sau khi chen : "<<str;
}
