#include <iostream>
using namespace std;
int main(){
	int a[100];
	int n,k;
	cout<<"Nhap n phan tu: ";
	cin>>n;
	cout<<"Nhap k: ";
	cin>>k;
	for(int i=0; i<n; i++){
		cout<<"Nhap phan tu thu "<<i+1<<": ";
		cin>>a[i];
	}
	n++;
	a[n]=k;
}
