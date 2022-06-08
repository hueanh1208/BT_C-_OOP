#include <iostream>
using namespace std;
class ARRAY {
	int n, *v;
  public:
  	ARRAY (int size, int a=0){
  		n=size; v= new int [n];
  		for (int i=0 ; i<n ;i++)
  		  v[i]=a;
  	}
  	~ARRAY () { 
	  delete []v;         
	}
  	void NhapDay () {
  		for (int i=0 ; i<n ;i++) {
  		  cout << "v[" << i <<"]= ";
  		  cin >> v[i];
  		}
  	}
  	void XuatDay () {
  		cout << endl;
  		for (int i=0 ; i<n ;i++) {
  		  cout << v[i] << " ";
  		}
  	}
	
	int Get(int *&V) { V=v ; return n ; }
};

int main () {
	ARRAY A (5);
	A.NhapDay();
	A.XuatDay();
	int N , *V ;
	
	N=A.Get(V);
		cout << endl << "ARRAY in tu ham main : ";
  		for (int i=0 ; i<N ;i++) 
  		  cout << V[i] << " ";
  		
	
	
}
