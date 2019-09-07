#include<iostream>
using namespace std;
int multi(int a,int b)
{
	if(b==1) return a;
	if(b>1)
	{
		return a+multi(a,b-1);
	} else 
	{
		return -a+multi(a,b+1);
	}
	return (0);
}
int main()
{
	int a,b;
	cout<<"ingrese el primer numero:";
	cin>>a;
	cout<<"ingrese el numero a multiplicar:";
	cin>>b;
	cout<<a<<"*"<<b<<"="<<multi(a,b)<<endl;
	system("pause>nul");
}
