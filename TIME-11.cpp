#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
class Time{
int gio;
int phut;
int giay;
public :
	Time(int a=0,int b=0,int c=0){
		gio=a;
		phut=b;
		giay=c;
	}
	void Input();
	void Display(char *s);
    Time Time_Distance(Time t);
   
};
void Time::Input(){
	
	do{
		cout<<endl<<"Moi nhap gio :";
		cin>>gio;
		if(gio>24||gio<0){
			cout<<endl<<"nhap sai , nhap lai :";
			cin>>gio;
		}
	}
	while(gio<0||gio>24);
	
		do{
		cout<<endl<<"Moi nhap phut :";
		cin>>phut;
		if(phut>60||gio<0){
			cout<<endl<<"nhap sai , nhap lai :";
			cin>>phut;
		}
	}
	while(phut<0||phut>60);

		do{
		cout<<endl<<"Moi nhap giay :";
		cin>>giay;
		if(giay>60||giay<0){
			cout<<endl<<"nhap sai , nhap lai :";
			cin>>giay;
		}
	}
	while(giay<0||giay>60);
}
void Time::Display(char *s){
	cout<<endl<<s<<gio<<" "<<"gio"<<" "<<phut<<" "<<"phut"<<" "<<giay<<" "<<"giay";
}

Time Time::Time_Distance(Time T){
	Time KC;
	int s=gio*3600+phut*60+giay;
	int s2=T.gio*3600+T.phut*60+T.giay;
	int s3=abs(s-s2);
	KC.gio=s3/3600;
	KC.phut=s3%3600/60;
	KC.giay=s3%3600%60;
	return KC;
}


int main(){
	Time P(12,8,60);
	P.Display("thoi diem 1: ");
	Time H;
	Time H2;
	H.Input();
	H.Display("thoi diem 2 :");
	H2=H.Time_Distance(P);
	H2.Display("khoang cach la :");
	return 0;
}

