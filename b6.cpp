#include <iostream>
 using namespace std;
 int main (){ int sodau, socuoi, kw;
 cout<<"Nhap so KW dau: ";
 cin>>sodau;
 cout<<"Nhap so KW cuoi: ";
 cin>>socuoi;
 kw= socuoi-sodau;
 long t=0;
 if (kw <=100){
   t = kw*2000; }
 else{
 	if( kw<=200){
 		t=100*2000 + (kw - 100)*2500;
	}
else{
	if(kw<=300)
	{
		t = 100*2000+100*2500+ (kw-200)*3000;
	}
	else 
	t = 100*2000+ 100*2500+100*3000+ (kw-300)+5000;
	}
}
cout<<"tien dien la: "<<t;
}
 
 
