#include <iostream>
using namespace std;

int main (void){
	int x,y, res;
	 cout<<"ingrese un entero";
	 cin>>x;
	 
	 while(x>0){
	 	
	 	res=x%10;
	 	x/=10;
	 	if(y!=res){
	 		cout<<res;
		 }
	 }
	system("pause>nul");
	return 0;
}
