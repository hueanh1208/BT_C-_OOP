#include <iostream>
using namespace std;
class TIME{
	int gio, phut, giay;
	public:
		TIME(int a=0, int b=0, int c=0){
			gio=a;
			phut=b;
			giay=c;
		}
		void NHAP();
		void DISPLAY(string s);
		TIME Distance(TIME);
};

void TIME::NHAP(){
	cout<<"Nhap gio: ";
	cin>>gio;
	while(gio>24||gio<0){
		cout<<"Nhap lai gio: ";
		cin>>gio;
	}
	cout<<"Nhap phut: ";
	cin>>phut;
	while(phut>60||gio<0){
		cout<<"Nhap lai phut: ";
		cin>>phut;
	}
	cout<<"Nhap giay: ";
	cin>>giay;
	while(giay>60||giay<0){
		cout<<"Nhap lai giay: ";
		cin>>giay;
	}
}
void TIME::DISPLAY(string s){
	cout<<endl<<s<<gio<<" "<<"gio"<<" "<<phut<<" "<<"phut"<<" "<<giay<<" "<<"giay";
}
void TIME::Distance(TIME){
	
	
}
int main(){
	Time P(13,44,30);
	P.Display("Hien tai la:");
	Time H;
	Time H2;
	H.Input();
	H.Display("Bay gio la :");
	H2=H.Time_Distance(P);
	H2.Display("khoang cach la :");
	
}
