#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
int x,n[7],z=0;
float me;
cout<<"calculando mediana:";

cout<<"introduce 7 numeros cuales quiera";

for(x=0;x<7;x++)
{
cout<<"\nnumero "<<x+1<<": ";
cin>>n[x];
z=+z+n[x];
}
me=z/7;

cout<<"la media es: "<<me;
getch();
return 0;
}
