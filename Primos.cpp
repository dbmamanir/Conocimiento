#include <iostream>
using namespace std;
int main (){
	int a,b;
	int c = 0, i=1;
	cout<<"ingrese dos numeros enteros:";
	cin>>a>>b;
	while (i <= a && i <= b){
			if (a % i == 0 && b % i == 0){
				c++;
			}
			i++;
	}
	if (c>1){
		cout<<"no son PESI";
	}
	else 
		cout<<"son PESI";
	return 0;
}