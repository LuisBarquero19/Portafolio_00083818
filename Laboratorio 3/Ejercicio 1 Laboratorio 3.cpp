# include  < iostream >
# include  < stdlib.h >
# include  < time.h >
usando el  espacio de nombres  estándar ;


struct  Nodo {
	int dato;
	Nodo * siguiente;
};
typedef  struct  Nodo * PNodo;


vacío  insertarFinal (PNodo y lista, int num) {
	
	PNodo aux, nuevo_nodo = nuevo (Nodo);
	
	nuevo_nodo-> dato = num;
	nuevo_nodo-> siguiente = NULL ;
	
	if (lista == NULL ) {
		lista = nuevo_nodo;
	} más {
		aux = lista;
		while (aux-> siguiente ! = NULL ) {
			aux = aux-> siguiente ;
		}
		aux-> siguiente = nuevo_nodo;
	}
}

vacío  insertarInicio (PNodo y lista, int num) {
	PNodo nuevo_nodo = nuevo (Nodo);
	nuevo_nodo-> dato = num;
	nuevo_nodo-> siguiente = lista;
	lista = nuevo_nodo;
}

void  generarNodos (PNodo & lista, int n) {
	srand ( tiempo ( NULL ));
	para ( int i = 0 ; i <n; i ++) {
		insertarFinal (lista, 1 + rand ()% ( 100 - 1 ));
	}
}

vacío  mostrarTodos (PNodo lista) {
	int i = 0 ;
	cout << " \ n MOSTRAR TODOS \ n " ;
	while (lista! = NULL ) {
		cout << '  ' << i + 1 << " ) " << lista-> dato << endl;
        lista = lista-> siguiente ;
        i ++;
	}
}
vacío  mostrarPares (PNodo lista) {
	int i = 0 , aux = 0 ;
	
	cout << " \ n MOSTRAR PARES \ n " ;
	while (lista! = NULL ) {
		if (lista-> dato % 2 == 0 ) {
			cout << '  ' << i + 1 << " ) " << lista-> dato << endl;
			aux ++;
		}
        lista = lista-> siguiente ;
        i ++;
	}
	if (aux == 0 ) {
		cout << " \ n ** No hay pares ** \ n \ n " ;
	}
}

vacío  mostrarImpares (PNodo lista) {
	int i = 0 , aux = 0 ;
	
	cout << " \ n MOSTRAR IMPARA \ n " ;
	while (lista! = NULL ) {
		if (lista-> dato % 2 ! = 0 ) {
			cout << '  ' << i + 1 << " ) " << lista-> dato << endl;
			aux ++;
		}
        lista = lista-> siguiente ;
        i ++;
	}
	if (aux == 0 ) {
		cout << " \ n ** Sin problemas de heno ** \ n \ n " ;
	}
}

nula  Inversa (PNodo lista) {
	
	if (lista! = NULL ) {
		Inversa (lista-> siguiente );
		cout <<lista-> dato << endl;
	}
	
}
int  main () {
	PNodo Lista = NULL ;
	int dato;
	
	cout << " Cantidad de nodos a crear: " << endl;
	cin >> dato;
	
	generarNodos (Lista, dato);
	mostrarTodos (Lista);
	mostrarPares (Lista);
	mostrarImpares (Lista);
	cout << " \ n \ n " ;
	cout << " MOSTRAR INVERSA \ n " ;
	Inversa (Lista);
	sistema ( " pausa " );
	regreso  22 ;
}
