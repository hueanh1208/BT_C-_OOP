#include <iostream>
#include <math.h>
using namespace std;

class VECTOR{
	int n;
	float* v;
	public: 
	VECTOR(int N){
		n=N;
		v=new float[n];
	}
	void create_vector(char* S){
		cout<<S;
		for (int i=0;i<n;i++){
			cout<<"\nNhap v["<<i<<"]: ";
			cin>>v[i];
		}
	}	
	int Get(float *&V){
		V=v;
		return n;
	}
	void display(char* S){
		cout<<S<<"\n";
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
	}
	VECTOR& operator+(VECTOR &vt){
		int Nt=n+vt.n;
		VECTOR vtt(Nt);
		for (int i=0;i<n;i++){
			vtt.v[i]=v[i];
		}
		for (int i=n;i<Nt;i++){
			vtt.v[i]=vt.v[i-n];
		}
		return vtt;
	}
	float operator*( VECTOR &vt){
		int Nt= (n<vt.n ? n : vt.n);
		float sum=0;
		for(int i=0;i<Nt;i++){
			sum=sum+v[i]*vt.v[i];
		}
		
		return sqrt(sum);
	}
		
};
int main(){
	VECTOR vt1(3),vt2(3);
	vt1.create_vector("Nhap mang 1:");
	vt2.create_vector("Nhap mang 2:");
	vt1.display("mang 1");
	vt2.display("\nmang 2");
	
	VECTOR vt3=vt1+vt2;
	vt3.display("\nMang sau khi ghep:");
	float s=vt1*vt2;
	cout<<"\nTich vo huong: "<<s;
	
}
