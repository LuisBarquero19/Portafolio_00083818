#include <iostream>
#include <stdlib.h>

using namespace std;


typedef struct nodo{
     int nro;
     struct nodo *izq, *der;
}*ABB;

int numNodos = 0; 


struct nodoCola{
    ABB ptr;
    struct nodoCola *sgte;
};
struct cola{
    struct nodoCola *delante;
    struct nodoCola *atras;
};

void inicializaCola(struct cola &q)
{
    q.delante = NULL;
    q.atras = NULL;
}

void encola(struct cola &q, ABB n)
{
     struct nodoCola *p;
     p = new(struct nodoCola);
     p->ptr = n;
     p->sgte = NULL;
     if(q.delante==NULL)
         q.delante = p;
     else
         (q.atras)->sgte = p;
     q.atras = p;
}

ABB desencola(struct cola &q)
{
    struct nodoCola *p;
    p = q.delante;
    ABB n = p->ptr;
    q.delante = (q.delante)->sgte;
    delete(p);
    return n;
}

ABB crearNodo(int x)
{
     ABB nuevoNodo = new(struct nodo);
     nuevoNodo->nro = x;
     nuevoNodo->izq = NULL;
     nuevoNodo->der = NULL;

     return nuevoNodo;
}
void insertar(ABB &arbol, int x)
{
     if(arbol==NULL)
     {
           arbol = crearNodo(x);
           cout<<"\n\t  Insertado..!"<<endl<<endl;
     }
     else if(x < arbol->nro)
          insertar(arbol->izq, x);
     else if(x > arbol->nro)
          insertar(arbol->der, x);
}
void verArbol(ABB arbol, int n)
{
     if(arbol==NULL)
          return;
     verArbol(arbol->der, n+1);

     for(int i=0; i<n; i++)
         cout<<"   ";

     numNodos++;
     cout<< arbol->nro <<endl;

     verArbol(arbol->izq, n+1);
}
bool busquedaRec(ABB arbol, int dato)
{
     int r=0;  

     if(arbol==NULL)
        return r;

     if(dato<arbol->nro)
         r = busquedaRec(arbol->izq, dato);

     else if(dato> arbol->nro)
         r = busquedaRec(arbol->der, dato);

     else
        r = 1;  

     return r;
}

ABB unirABB(ABB izq, ABB der)
{
    if(izq==NULL) return der;
    if(der==NULL) return izq;

    ABB centro = unirABB(izq->der, der->izq);
    izq->der = centro;
    der->izq = izq;
    return der;
}
void recorrerxNivel(ABB arbol)
{
     struct cola q;
     inicializaCola(q);
     cout << "\t";

     if(arbol!=NULL)
     {
         encola(q, arbol);

         while(q.delante!=NULL)
         {
             arbol = desencola(q);
             cout << arbol->nro << ' ';

             if(arbol->izq!=NULL)
                 encola(q, arbol->izq);
             if(arbol->der!=NULL)
                 encola(q, arbol->der);
         }
     }
}
void menu()
{
     
     cout << "\n\t\t  ..[ ARBOL BINARIO DE BUSQUEDA ]..  \n\n";
     cout << "\t [1]  Insertar elemento                  \n";
     cout << "\t [2]  Mostrar arbol                      \n";
     cout << "\t [3]  Recorrido por nieveles (Amplitud)  \n";
     cout << "\t [4]  Contar nodos                       \n";
     cout << "\t [5] SALIR                              \n";

     cout << "\n\t Ingrese opcion : ";
}
int main()
{
    ABB arbol = NULL;
    int x;
    int op, op2;


    
    do
    {
          menu();  cin>> op;
          cout << endl;

          switch(op)
          {
               case 1:
                    cout << " Ingrese valor : ";  cin>> x;
                    insertar( arbol, x);
                    break;

               case 2:
                    verArbol(arbol, 0);
                    break;
                    case 3:
                    cout<<"\n\n Mostrando recorrido por nivel\n\n";
                    recorrerxNivel(arbol);
                    break;
                    case 4:
                    verArbol(arbol, 0);
                    cout << "\n\n El numero de nodos es : ";
                    cout << numNodos;
                    break;
                     case 5:
                    exit(0);
          }

          cout<<"\n\n\n";
          
    }while(op!=11);

}
                    
