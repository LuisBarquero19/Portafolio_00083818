#include <iostream>
using namespace std;
int main(){
	int total=0, contador=0,suma,prom,numero;
	while(contador !=10){
		cout<<"Digite el numero entero";
		cin>>numero;
		total += numero;
		contador += 1;
	}
	
	if(contador !=0){
	suma=total;
	prom= total/10;
	cout<<"la suma es:"<<suma;
cout<<"promedio:"<<prom;
}
	system("pause>nul");
	return 0;
}
