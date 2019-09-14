#include<iostream>

using namespace std;
int suma(int n){
	if(n==1)
	return 1;
	else
	return n + suma (n-1);
}
int i,n,sum,num;
int main(){
 cout<<"cuantos numeros quieres sumar:"; 
 cin>>n;
 for(i=1;i<=n;i++){
  sum+=i;}
 cout<<"la suma total es"<<sum;
 cout<<"favor ingrese los numeros";
 cin>>num;
 cout<<" la suma de los numeros es de"<<suma(num);
 system("pause>nul");
 return 0;
}
