#include <iostream>
using namespace std;
int factorial (int b);
double suma(int a);
int main(){
	double n, sum;
	cout<<"ingrese un numero entero:";
	cin>>n;
	sum = suma(n);
	cout<<"la sumatoria es:"<<sum;
	return 0;
}

//hallar el factorial de un numero
int factorial (int b){
	int f = 1;
	for (int i=2; i<=b; i++){
		f = f * i;
	}
	return f;
}

//hallar la sumatoria
double suma (int a){
	double s = 0;
	for (int i = 1; i<=a; i++){
		s = s + (factorial (i) / (2.0 * i));
	}
	return s;
}