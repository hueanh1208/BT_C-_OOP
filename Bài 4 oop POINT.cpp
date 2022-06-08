#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class point
{
	private:
		int x,y;
	public:
		point(int a=0, int b=0);
		void nhap();
		point Doi_xung();
		int Tong_toado(point td2);
		float Khoang_cach(point td2);
		void Display();
};
point::point(int a, int b)
{
	x=a;
	y=b;
}
void point::nhap()
{
	cout<<"Nhap x,y: ";
	cin>>x>>y;
}
point point::Doi_xung()
{
	point td;
	td.x=-x;
	td.y=-y;
	return td;
}
int point::Tong_toado(point td2)
{
	return x+td2.x+y+td2.y;
}
float point::Khoang_cach(point td2)
{
	return sqrt(((td2.x-x)*(td2.x-x))+((td2.y-y)*(td2.y-y)));
}
void point::Display()
{
	cout<<"("<<x<<" , "<<y<<")";
}
int main()
{
	point td1,td2;
	td1.nhap();
	td2.nhap();
	cout<<"\nToa do 1: ";td1.Display();
	cout<<"\nToa do 2: ";td2.Display();
	cout<<"\nTong cua 2 toa do: "<<td1.Tong_toado(td2)<<endl;
	point td3=td1.Doi_xung();
	cout<<"\nToa do doi xung voi td1 ";
	td1.Display();
	cout<<" qua goc toa do la ";
	td3.Display();
	cout<<"\nKhoang cach giua hai diem: "<<td1.Khoang_cach(td2);
}
