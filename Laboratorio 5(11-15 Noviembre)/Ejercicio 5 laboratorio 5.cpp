# include < iostream >
usando el  espacio de nombres  est�ndar ;

estructura  nodo {	
	int dato;
	nodo * izq;
	nodo * der;
};

struct  lista {
	int dato;
	lista * sig;
};


void  agregarLista ( int , lista * &);	// Lista
vac�o  mostrarLista (lista * &);		// Lista
vac�o  agregarnodo ( int , nodo * &);		// Arbol
vac�o  mostrarArbol (nodo * &, int );		// Arbol
void  crearArbol (nodo * &, lista * &);	// Crear arbol


int  main () {
	lista * Inicio2 = NULL ;
	nodo * Inicio = NULL ;
	
	agregarLista ( 40 , Inicio2);
	agregarLista ( 20 , Inicio2);
	agregarLista ( 10 , Inicio2);
	agregarLista ( 50 , Inicio2);
	agregarLista ( 60 , Inicio2);
	
	cout << " Creando lista ... \ n " ;
	cout << " \ n Lista: " ;
	mostrarLista (Inicio2);
	
	crearArbol (Inicio, Inicio2);
	cout << " \ n \ n Creando arbol con valores de lista ... \ n \ n " ;
	mostrarArbol (Inicio, 0 );
	
	cout << " \ n \ n NOTA: Lista no modificable en consola. " ;
	
	
	devuelve  0 ;
}


nulo  agregarLista ( int n, lista * & p) {					 
	lista * nuevo = nueva lista;
	nuevo-> dato = n;
	nuevo-> sig = NULL ;
	if (p == NULL ) {
		p = nuevo;
		volver ;
	} m�s {
		agregarLista (n, p-> sig );
	}
}

vac�o  mostrarLista (lista * & p) {							
	if (p == NULL ) {
		volver ;
	} m�s {
		cout << p-> dato << " \ n        " ;
		mostrarLista (p-> sig );
	}
}

nulo  agregarnodo ( int n, nodo * & p) {						 
	nodo * nuevo = nuevo nodo;
	nuevo-> dato = n;
	nuevo-> der = NULL ;
	nuevo-> izq = NULL ;
		
	if (p == NULL ) {
		p = nuevo;
		volver ;
	} else  if (n <p-> dato ) {
		agregarnodo (n, p-> izq );	
	} else  if (n> p-> dato ) {
		agregarnodo (n, p-> der );
	}
}

void  mostrarArbol (nodo * & arbol, int espaciado) {			
    if (! arbol) {
        volver ;
    }
    m�s {
        mostrarArbol (arbol-> der , espaciado + 1 );

        para ( int i = 0 ; i <espaciado; i ++) {
            cout << " \ t " ;
        }
        cout <<arbol-> dato << endl;

        mostrarArbol (arbol-> izq , espaciado + 1 );
    }
}

void  crearArbol (nodo * & p, lista * & a) {					
	if (a == NULL ) {
		volver ;
	} m�s {
		agregarnodo (a-> dato , p);
		crearArbol (p, a-> sig );
	}		
}
