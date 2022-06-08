#include <iostream>
using namespace std;
class COMPLEX{
	int Re,Im;
	public:
	COMPLEX(int a=0,int b=0){
		Re=a;  Im=b;
	}
	void Display(char* S){
		cout<<"\n"<<S<<Re;
		if (Im>0) cout<<"+i"<<Im;
		else if(Im<0)cout<<"-i"<<-Im;
	}
	COMPLEX& operator+(COMPLEX &o){
		COMPLEX ot(Re+o.Re, Im+o.Im);
		return ot;
	}
	COMPLEX& operator-(COMPLEX &o){
		COMPLEX oh(Re-o.Re, Im-o.Im);
		return oh;
	}
	COMPLEX& operator!(){
		COMPLEX od(Re,-Im);   
		return od;
	}
};
int main(){
	COMPLEX c1(-5,2),c2(3,2);
	c1.Display("So phuc C1=");
	c2.Display("So phuc C2=");
	COMPLEX c3=c1+c2;
	c3.Display("Tong: ");
	COMPLEX c4=c1-c2;
	c4.Display("Hieu: ");
	COMPLEX c5=!c1;
	c5.Display("Lien hop: ");
}
