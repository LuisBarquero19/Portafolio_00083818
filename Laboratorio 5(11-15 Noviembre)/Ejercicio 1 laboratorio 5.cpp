# include  < iostream >
usando el  espacio de nombres  est�ndar ;

struct  TNodo {
    int dato;
    struct  TNodo * sig;
};
typedef  struct  TNodo Nod;
Nod * pInicio;

vac�o  insertarFinal ( int num) {
    Nod * nuevo = nuevo Nod;
    nuevo-> dato = num;
    nuevo-> sig = NULL ;

    if (pInicio == NULL ) {
        pInicio = nuevo;
    } m�s {
        Nod * p = pInicio;
        Nod * q = NULL ;
        while (p! = NULL ) {
            q = p;
            p = p-> sig ;
        }
        q-> sig = nuevo;
    }
}


vac�o  mostrarLista () {
    Nod * s = pInicio;

    while (s! = NULL ) {
        cout << (s-> dato ) << "  " ;
        s = s-> sig ;
    }
}

estructura  nodo {
    int info;
    struct  nodo * izq;
    struct  nodo * der;
};
typedef  struct  nodo Nodo;
typedef  struct  nodo * Arbol;

Arbol crearArbol ( int x) {
    Arbol p = nuevo Nodo;
    p-> info = x;
    p-> izq = NULL ;
    p-> der = NULL ;
    volver p;
}

void  asignarIzq (Arbol a, int unDato) {
    if (a == NULL )
        cout << " Error: arbol vacio " << endl;
    otra cosa  si (a-> izq ! = NULL )
        cout << " Error: subarbol IZQ ya existe " << endl;
    m�s
        a-> izq = crearArbol (unDato);
}

void  asignarDer (Arbol a, int unDato) {
    if (a == NULL )
        cout << " Error: arbol vacio " << endl;
    otra cosa  si (a-> der ! = NULL )
        cout << " Error: subarbol DER ya existe " << endl;
    m�s
        a-> der = crearArbol (unDato);
}

void  agregarNodo (Arbol a, float numero) {
    Arbol p = a;
    while ( verdadero ) {
        if (numero == p-> info ) {
            cout << " Error: " << numero << " ya existe " << endl;
            volver ;
        }
        otra cosa  si (numero <p> info ) {
            if (p-> izq == NULL )
                romper ;
            m�s
                p = p-> izq ;
        }
        m�s {
            if (p-> der == NULL )
                romper ;
            m�s
                p = p-> der ;
        }
    }

    if (numero <p-> info )
        asignarIzq (p, numero);
    m�s
        asignarDer (p, numero);
}

bool  buscar (Arbol a, int num) {
    if (a == NULL ) {
    devuelve  falso ;
    }
    otra cosa  si (a-> informaci�n == num) {
    insertarFinal (a-> info );
    volver  verdadero ;
    }
    otra cosa  si (a-> informaci�n <num) {
    insertarFinal (a-> info );
    volver  buscar (a-> der , num);
    }
    otra cosa  si (a-> Informaci�n > num) {
    insertarFinal (a-> info );
    volver  buscar (a-> izq , num);
    }
}

int  main () {
    pInicio = NULL ;

    Arbol arbol = crearArbol ( 5 );

    agregarNodo (arbol, 3 );
    agregarNodo (arbol, 7 );
    agregarNodo (arbol, 2 );
    agregarNodo (arbol, 4 );
    agregarNodo (arbol, 6 );
    agregarNodo (arbol, 9 );
    agregarNodo (arbol, 1 );
    agregarNodo (arbol, 10 );

    flotante n = 0 ;
    cout << " Ingrese dato a buscar: " ;
    cin >> n;

        if ( buscar (arbol, n) == verdadero ) {
        cout << " \ t Si se encontro el dato " << endl;
        }
        m�s {
        cout << " \ t No se encontro el dato " << endl;
        }

    cout << " \ n \ t Recorrido en arbol: " ;
    mostrarLista ();
    cout << endl;

    devuelve  0 ;
}
