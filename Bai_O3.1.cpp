#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void nhapchuoi(char str[]){
	cout<<"Nhap chuoi: ";
	fflush(stdin);
	gets(str);
}
void xoa_kt(char str[]){
	char n;
	cout<<"Nhap ky tu can xoa: ";
	cin>>n;
	for(int i = 0; i< strlen(str); i++){
		if(str[i] == n){
			for(int j = i; j<strlen(str); j++){
				str[j] = str[j + 1];
			}
			i--;
		}
	}
	cout<<"Chuoi sau khi xoa la: "<<str<<endl;
}

int count_lower_letter(char str[]){
	int count = 0;
	for(int i = 0; i < strlen(str); i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			count++;
		}
	}
	return count;
}

int main(){
	char str[10];
	nhapchuoi(str);
	cout<<"Chuoi vua nhap la: "<<str<<endl;
	xoa_kt(str);
	
	int count = count_lower_letter(str);
	if(count == 0){
		cout << "Chuoi khong co ki tu in thuong";
	}else{
		cout << "Chuoi co " << count << " ki tu in thuong";
	}
	
} 
