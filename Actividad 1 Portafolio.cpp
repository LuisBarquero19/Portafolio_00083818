#include <iostream>
using namespace std;
void calculos(int num, int *doble, int *triple){
	*doble = 2 * num;
	*triple= 3 * num;
}

int main(){
	
	int numero = 2, doble = 0, triple = 0;

	calculos(numero,&doble,&triple);
	cout<<"El doble de 2 es"<< doble<<endl;
	cout<<"El triple de 2 es"<<triple<<endl;
	cout<<"Direccion de la variable numero:"<<&numero<<endl;
	cout<<"Direccion de la variable doble:"<<&doble<<endl;
	cout<<"Direccion de la variable triple:"<<&triple<<endl;
	
	system("pause>nul");
	return 0;
}
