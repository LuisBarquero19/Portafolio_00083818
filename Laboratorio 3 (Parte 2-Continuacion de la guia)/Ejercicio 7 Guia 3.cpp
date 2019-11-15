# include  < iostream >
# include  < string >

usando el  espacio de nombres  estándar ;

struct  TNum {
    int valor;
   
};
typedef  struct  TNum Num;

Num solicitarNumero () {
    Num p;
    
    cout << " Ingresar un numero: " ; cin >> p. valor ;
    cin. ignorar ();
    bool continuar = verdadero ;
   
    volver p;
}

vacío  mostrarNumero (Num p) {
    cout << " Numero: " << p. valor << endl;
}

struct  TNodo {
    Num dato;
    struct  TNodo * sig;
};
typedef  struct  TNodo Nodo;
Nodo * pInicio;

vacío  insertarInicio (Num p) {
    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = pInicio;
    
    pInicio = nuevo;
}

vacío  insertar Final (Num p) {
    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = NULL ;
    
    if (pInicio == NULL ) {
        pInicio = nuevo;
    } más {
        Nodo * p = pInicio;
        Nodo * q = NULL ;
        while (p! = NULL ) {
            q = p;
            p = p-> sig ;
        }
        q-> sig = nuevo;
    }
}

vacío  agregarNumero () {
    Num p = solicitarNumero ();
    bool continuar = verdadero ;
    hacer {
        int opcion = 0 ;
        cout << " \ t 1) Desea agregar al principio \ n \ t 2) Desea agregar al final "
            << " \ n \ t Opción: " ;
        cin >> opcion;
        interruptor (opción) {
            caso  1 : insertarInicio (p); continuar = falso ;
            romper ;
            caso  2 : insertarFinal (p); continuar = falso ;
            romper ;
            predeterminado : cout << " ERROR ... Opcion invalida " << endl;
            romper ;
        }
    } while (continuar);
}

vacío  mostrarNumero () {
    Nodo * s = pInicio;

    while (s! = NULL ) {
        mostrarNumero (s-> dato );
        s = s-> sig ;
    }
}


int  Contador ( int num) {
	Nodo * s;
	int cont = 0 ;
	
	 for (s = pInicio; s! = NULL ; s = s-> sig ) {
	 	
	   if ((s-> dato ). valor == num)
	   
	     cont ++;
     }
	volver cont;   
}


nulo  eliminarN ( int num, int cantidad) {

	
 int n = 0 ;
 
 while (n! = cantidad) {
	Nodo * borrar = pInicio, * p = NULL ;    
    while (borrar! = NULL && (borrar-> dato ). valor ! = num) {
        p = borrar;
        borrar = borrar-> sig ;
    }
    if (borrar == NULL ) {
        cout << " Numero no exite \ n " << endl;
        sistema ( " pausa " );
        volver ;
    }
    si (p == NULL )
        pInicio = pInicio-> sig ;
    más
        p-> sig = borrar-> sig ;
    eliminar (borrar);
    n ++;
 }
cout << " Ocurrencias eliminadas \ n " ;
 sistema ( " pausa " );
}

void  eliminarOcurrencias () {
	flotador ocu = 0 ;
	
	int contador = 0 ;
	
	cout << " Ingrese el numero deseado \ n " ;
	
	cin >> ocu;
	
	contador = Contador (ocu);
	cout << "  " << ocu << "  " << contador;
	sistema ( " pausa " );
	
	eliminarN (ocu, contador);
}

int  main () {

    int unVALOR = 0 ;
    pInicio = NULL ;
    
    bool continuar = verdadero ;
    hacer {
        int opcion = 0 ;
        cout << " Menú: \ n \ t 1) Agregar numero \ n \ t 2) Ver datos "
            << " \ n \ t 3) Eliminar ocurrencias "
            << " \ n \ t 4) Salir \ n \ t Opción: " ;
        cin >> opcion;
        cout << endl;
        interruptor (opción) {
            caso  1 : cout << " Agregando ... " << endl;
                agregarNumero ();
            romper ;
            caso  2 : cout << " Mostrando ... " << endl;
                mostrarNumero ();
            romper ;
            caso  3 : cout << " Eliminando ... " << endl;
                eliminarOcurrencias ();
            romper ;
		    caso  4 : continuar = falso ;
            romper ;
            predeterminado : cout << " ERROR ... Opcion Invalida " << endl;
            romper ;
        }
    } while (continuar);

    devuelve  0 ;
}
