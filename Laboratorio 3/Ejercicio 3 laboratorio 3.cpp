# include  < iostream >
# include  < stdlib.h >
# include  < cstring >

usando el  espacio de nombres  estándar ;

struct  Libro {
	char titulo [ 35 ];
	int numPaginas;
	Libro * siguiente;
};

typedef  struct  Libro * Llibro;

vacío  insertarLibroFinal (Llibro y listaLibros, char * titulo, int num) {
	Llibro aux, nuevo_nodo = nuevo (Libro);
	
	strcpy (nuevo_nodo-> titulo , titulo);
	nuevo_nodo-> numPaginas = num;
	nuevo_nodo-> siguiente = NULL ;
	
	if (listaLibros == NULL ) {
		listaLibros = nuevo_nodo;
	} más {
		aux = listaLibros;
		while (aux-> siguiente ! = NULL ) {
			aux = aux-> siguiente ;
		}
		aux-> siguiente = nuevo_nodo;
	}
	
}

vacío  mostrarLibros (Llibro listaLibros) {
	int i = 0 ;
	while (listaLibros! = NULL ) {
		cout << '  ' << i + 1 << " ) " << listaLibros-> titulo << endl;
		cout << " # Paginas -> " << listaLibros-> numPaginas << " \ n \ n \ n " ;
        listaLibros = listaLibros-> siguiente ;
        i ++;
	}
}

void  registrarLibros (Llibro y listaLibros, int num) {
	char titulo [ 35 ];
	int numpag;
	para ( int i = 0 ; i <num; i ++) {
		cout << " ---------------------------- # " << i + 1 << " --------- -------------------- " << endl;
		cout << " Ingrese el titulo: " ; cin. getline (titulo, 35 );
		cout << " Ingrese el numero de paginas: " ; cin >> numpag; cin. ignorar ();
		cout << " \ n \ n " ;
		insertarLibroFinal (listaLibros, titulo, numpag);
	}
}

void  buscarLibro (Llibro y listaLibros, char * x, int aux) {
	
	if (listaLibros! = NULL ) {
		
	
		if ( strcmp (x, listaLibros-> titulo ) == 0 ) {
			cout <<listaLibros-> titulo << endl;
			cout <<listaLibros-> numPaginas << endl;
			aux ++;
		}
		
		
		buscarLibro (listaLibros-> siguiente , x, 0 );
	}
	
}


 menú vacío () {
	
	
	cout << " 1 - Registrar libros " << endl;
	cout << " 2 - Mostrar Catalogo " << endl;
	cout << " 3 - Buscar Libro " << endl;
	cout << " 4 - Salir " << endl;
	
	cout << " \ n Ingrese una opcion: " ;
	
		
}




int  main () {
	Llibro Lista = NULL ;
	int dato = 0 , opc_menu = 0 ;
	char llave [ 35 ];
	
	hacer {
		menú (); cin >> opc_menu; cin. ignorar ();
		conmutador (opc_menu) {
			caso  1 :
				cout << " Cuantos libros desea registrador: " ; cin >> dato; cin. ignorar ();
				registrador Libros (Lista, dato);
			romper ;
			caso  2 :
				mostrarLibros (Lista);
			romper ;
			caso  3 :
				cout << " Titulo a buscar: " ; cin. getline (llave, 35 ); cin. ignorar ();
				buscarLibro (Lista, llave, 0 );
			romper ;
		}
		cout << endl << endl;
        sistema ( " pausa " );  sistema ( " cls " );
	} while (opc_menu! = 4 );
	
	
	

	
	
	sistema ( " pausa " );
	devuelve  0 ;
}

