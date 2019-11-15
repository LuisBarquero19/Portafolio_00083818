# include  < iostream > 
 usando el  espacio de nombres  estándar ; 
 struct  node {string nombre;
  int edad;
  nodo * siguiente;}; 
  clase  datosPersona { privado: lista de nodos *; public: datosPersona () {list = NULL ;}
   vacío  llenarLista (string, int );
   vacío  mostrarLista ();
   vacío  eliminarLista (cadena);
    vacío  actualizarLista (cadena);};
	
	 int  main () {
	 
	 datosPersona lista;
	 cadena nombre; 
	 int edad;
	 int opt;
	 char siNo;
	 hacer {
	 
	 cout << " ============== Menú ============== " << endl;
	 
	 cout << " 1. Llenar Lista " << endl;
	 cout << " 2. Mostrar Lista " << endl;
	 cout << " 3. Eliminar " << endl;
	 cout << " 4. Actualizar datos " << endl;
	 cout << " 5. Salir " << endl;
	 cout << " \ n Seleccione una opción: " << endl;
	 cin >> opt; 
	 
	 cambiar (optar) {
	 
	 caso  1 :
	 do {cout << " \ n Nombre: " ;
	 cin >> nombre; cout << " Edad: " ;
	 cin >> edad; lista. llenarLista (nombre, edad);
	 cout << "¿ Desea agregar otra persona (s / n)? " << endl;
	 cin >> siNo;}
	 
	 while (siNo == ' s ' );
	 romper ;
	  
	 caso  2 :
	 
	 lista. mostrarLista ();
	 romper ;
	 
	 caso  3 :
	 cout << " Nombre de persona a eliminar de la lista: " ;
	 cin >> nombre; lista. eliminarLista (nombre);
	 romper ;
	 
	 caso  4 :
	 cout << " Nombre de persona a actualizar: " ;
	 cin >> nombre;
	 lista. actualizarLista (nombre);
	 descanso ;
	 
	  } while (opt! = 5 );
	  
	  devuelve  0 ;}
	  
	// LLENAR LISTA
	
	void  datosPersona :: llenarLista (string nombre, int edad) {
	
	nodo * Nuevo_nodo = nuevo nodo;
	Nuevo_nodo-> nombre = nombre;
	Nuevo_nodo-> edad = edad;
	Nuevo_nodo-> siguiente = lista; lista = Nuevo_nodo;
	}
	
	// MOSTRAR LISTA
	
	void  datosPersona :: mostrarLista () {
	
	nodo * actual = nuevo nodo;
	actual = lista; 
	
	while (real! = NULL ) {
	
	cout << endl << " Nombre: " <<actual-> nombre << endl;
	cout << " Edad: " <<actual-> edad << endl; actual = actual-> siguiente ;}
	}
	
	// LISTA ELLIMINAR
	
	void  datosPersona :: eliminarLista (string nombre) {
	
	nodo * aux_delete = lista;
	nodo * anterior = NULL ;
	
	while ((aux_delete! = NULL ) && (aux_delete-> nombre ! = nombre)) {
	anterior = aux_delete;
	aux_delete = aux_delete-> siguiente ;}
	
	 if (aux_delete == NULL ) {
	 cout << " No se ha encontrado en la lista! " << endl;}
	 
	  otra cosa  si (anterior == NULL ) {
	  lista = lista-> siguiente ;
	  eliminar aux_delete;}
	  
	  más {anterior-> siguiente = aux_delete-> siguiente ;
	  eliminar aux_delete;}
	  }
	  
	  // ACTUALIZAR LISTA
	  
	  void  datosPersona :: actualizarLista (string nombre) {
	  
	  string nuevoNombre; 
	  int edad;
	  nodo * actual = nuevo nodo;
	  actual = lista; 
	  
	  while (actual-> nombre ! = nombre) {
	  actual = actual-> siguiente ;
	  }
}
