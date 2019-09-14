#include <iostream>
using namespace std;
 void Jugada(int disco, int torre1,int torre2,int torre3){
 	if(disco == 1){
	 
 	cout<<"Mover disco de la torre"<<torre1<<"hacia la torre"<<torre3<<endl;
 	} 
	 else{
 		Jugada(disco-1, torre1, torre3, torre2);
 		cout<<"Mover disco de la torre"<<torre1<<"hacia la torre"<<torre3<<endl;
 		Jugada(disco-1, torre2, torre1, torre3);
	 } 
}
	 int main(){
	 	int Torre1 = 1, Torre2 = 2, Torre3 = 3, Disco = 0;
	 	cout<<"Con cuantos discos quieres jugar";
	 	cin>> Disco;
	 	Jugada(Disco, Torre1, Torre2, Torre3);
	 	
	 	system("pause>nul");
	 	return 0;
	 }
