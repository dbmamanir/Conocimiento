#include <iostream>
using namespace std;
int main(){
	int a, b, r;
	char op;
	cout<<"ingrese dos numeros:";
	cin>>a>>b;
	cout<<"ingrese el operador:";
	cin>>op;
	switch (op){
		case '+':
			r = a + b;
			break;
		case '-':
			r = a - b;
			break;
		case '*':
			r = a * b;
			break;
		case '/':
			r = a / b;
			break;
	}
	cout<<r;
	return 0;
}