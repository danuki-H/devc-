#include <iostream>
using namespace std;
void nhapn(int &n){
	do{
		cout<<"Nhap n>0: ";
		cin>>n;
	}while(n <= 0);
}
void nhap(int *a, int n){
	cout<<"Nhap mang: "<<endl;
	for(int i = 0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>*(a + i);
	}
}
void xuat(int *a, int n){
	for(int i = 0; i < n; i++){
		cout<<" "<<*(a+i);
	}
	cout<<endl;
}
void xoa(int *a, int &n){
	for(int i = 0; i < n; i++){
		if(*(a + i)%2 != 1){
			for(int j = i; j < n; j++){
				*(a + j) = *(a + j + 1);
			}
			i--;
			n--;
		}
	}
}
int main(){
	int n;
	nhapn(n);
	int *a = new int[n];
	nhap(a, n);
	cout<<"Mang vua nhap la: ";
	xuat(a, n);
	xoa(a, n);
	cout<<"Mang sau khi xoa cac phan tu chan: ";
	xuat(a, n);
	delete a;
}
