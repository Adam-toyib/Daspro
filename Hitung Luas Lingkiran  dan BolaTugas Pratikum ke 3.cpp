#include <iostream>

using namespace std;

int main(){
	float phi=3.14, R;
	
	cout <<"masukan jar jari: ";
	cin>>R;
	//Hitung Luas Permukaan Bola
	float L = 4*phi*R*R; 
	cout<<"Luas Permukaan Bola adalah  "<<  L <<endl;
	//Hitung Keliling Lingkaran
	
	float I = 4/3*phi*R*R*R; 
	cout<<"Volume bola adalah "<< I;
	
	
	
	return 0;
}
