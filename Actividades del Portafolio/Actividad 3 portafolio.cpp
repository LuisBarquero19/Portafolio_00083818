#include <iostream>
#include <conio.h>
using namespace std;
bool busquedaRecursivaDato(int vec[],int n, int dato){
        if(n==0 && vec[n]==dato)
        return true;
        else if(n==0)
        return false;
        else if(vec[n]==dato)
        return true;
        else
        return busquedaRecursivaDato(vec,n-1,dato);
}
int main(){
        int n, dato;
        cout<<"ingrese el tamaño del arreglo:";
        cin>>n;
        int vec[n];
        srand(time(NULL));
        for(int i=0;i<n;i++){
                vec[i] = (int)((rand()/ ));
                cout<<vec[i]<<"\t";
                
        }
        cout<<"\nFavor ingresar el dato a buscar:";
        cin>>dato;
        if(busquedaRecursivaDato(vec,n-1,dato))
        cout<<"\nEl dato se encuentra en la posicion:";
        else
        cout<<"\nEl dato NO se encuentra ";
        
}