#include <iostream>

using namespace std;

int main(){
	float phi=3.14, R;
	
	cout <<"masukan jar jari: ";
	cin>>R;
	//Hitung Luas Lingkaran
	float L = phi*R*R; 
	cout<<"Luas Lingkaran adalah  "<<  L <<endl;
	//Hitung Keliling Lingkaran
	
	float I = 2*phi*R; 
	cout<<"Isi bola adalah "<< I;
	
	
	
	return 0;
}
