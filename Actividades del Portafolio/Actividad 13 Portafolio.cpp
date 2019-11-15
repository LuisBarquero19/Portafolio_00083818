# include  < iostream >
# include  < string >
usando el  espacio de nombres  est�ndar ;

enum generos {ciencia_ficcion, aventura, policial, romance, misterio};

struct  TLibro {
    int isbn;
    titulo de cuerda;
    autor de cadena;
    generos genero;
    bool espanol;
};
typedef  struct  TLibro Libro;

Libro solicitarLibro () {
    Libro p;
    // --- Solicitar ISBN, Titulo y Autor ---
    cout << " ISBN: " ; cin >> p. isbn ;
    cin. ignorar (); // Limpiando el buffer
    cout << " Titulo: " ; getline (cin, p. titulo );
    cout << " Autor: " ; getline (cin, p. autor );

    // --- Solicitar genero del libro ---
    bool continuar = verdadero ;
    hacer {
        opcion de char = 0 ;
        cout << " Genero (c-ciencia | a-aventura | p-policial | r-romance | m-misterio): " ;
        cin >> opcion;
        interruptor (opci�n) {
            caso  ' c ' : p. genero = ciencia_ficcion; continuar = falso ;
            romper ;
            caso  ' a ' : p. genero = aventura; continuar = falso ;
            romper ;
            caso  ' p ' : p. genero = policial; continuar = falso ;
            romper ;
            caso  ' r ' : p. genero = romance; continuar = falso ;
            romper ;
            caso  ' m ' : p. genero = misterio; continuar = falso ;
            romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
            romper ;
        }
    } while (continuar);

    // --- Solicitar idioma del libro ---
    continuar = verdadero ;
    hacer {
        letra de char = 0 ;
        cout << " Espa�ol (s / n): " ;
        cin >> letra;
        interruptor (letra) {
            caso  ' s ' :
            caso  ' S ' : p. espa�ol = verdadero ; continuar = falso ;
            romper ;
            caso  ' n ' :
            caso  ' N ' : p. espa�ol = falso ; continuar = falso ;
            romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
            romper ;
        }
    } while (continuar);

    // --- Devolver libro ya poblado ---
    volver p;
}

vac�o  mostrarLibro (Libro p) {
    cout << " ISBN: " << p. isbn << endl;
    cout << " Titulo: " << p. titulo << endl;
    cout << " Autor: " << p. autor << endl;

    cout << " Genero: " ;
    interruptor (p. genero ) {
        caso ciencia_ficcion: cout << " Ciencia ficci�n " << endl;
        romper ;
        caso aventura: cout << " Aventura " << endl;
        romper ;
        caso policial: cout << " Policial " << endl;
        romper ;
        caso romance: cout << " Romance " << endl;
        romper ;
        caso misterio: cout << " Misterio " << endl;
        romper ;
    }

    cout << " Idioma: " << (p. espa�ol ? " Espa�ol " : " Otro " ) << endl;
    cout << endl;
}

struct  TNodo {
    Libro dato;
    struct  TNodo * sig;
};
typedef  struct  TNodo Nodo;
Nodo * pInicio;

vac�o  insertarInicio (Libro p) {
    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = pInicio;

    pInicio = nuevo;
}

vac�o  insertar Final (Libro p) {
    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = NULL ;

    if (pInicio == NULL ) {
        pInicio = nuevo;
    } m�s {
        Nodo * p = pInicio;
        Nodo * q = NULL ;
        while (p! = NULL ) {
            q = p;
            p = p-> sig ;
        }
        q-> sig = nuevo;
    }
}

vac�o  insertarDespuesDe (Libro p) {
    int unISBN = 0 ;
    cout << " ISBN de libro de referencia: " ;
    cin >> unISBN;

    Nodo * s = pInicio;

    while (s! = NULL && (s-> dato ). isbn ! = unISBN)
        s = s-> sig ;
    if (s == NULL ) {
        cout << " Libro de referencia NO existe " << endl;
        volver ;
    }

    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = s-> sig ;

    s-> sig = nuevo;
    cout << " Libro insertado con exito " << endl;
}

vac�o  insertarAntesDe (Libro p) {
    int unISBN = 0 ;
    cout << " ISBN de libro de referencia: " ;
    cin >> unISBN;

    Nodo * s = pInicio, * q = NULL ;

    while (s! = NULL && (s-> dato ). isbn ! = unISBN) {
        q = s;
        s = s-> sig ;
    }
    if (s == NULL ) {
        cout << " Libro de referencia NO existe " << endl;
        volver ;
    }

    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = s;

    si (q == NULL )
        pInicio = nuevo;
    m�s
        q-> sig = nuevo;
    cout << " Libro insertado con exito " << endl;
}

void  agregarLibro () {
    Libro p = solicitarLibro ();
    bool continuar = verdadero ;
    hacer {
        int opcion = 0 ;
        cout << " \ t 1) Al principio \ n \ t 2) Al final "
            << " \ n \ t 3) Despues de \ n \ t 4) Antes de "
            << " \ n \ t Opci�n elegida: " ;
        cin >> opcion;
        interruptor (opci�n) {
            caso  1 : insertarInicio (p); continuar = falso ;
            romper ;
            caso  2 : insertarFinal (p); continuar = falso ;
            romper ;
            caso  3 : insertarDespuesDe (p); continuar = falso ;
            romper ;
            caso  4 : insertarAntesDe (p); continuar = falso ;
            romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
            romper ;
        }
    } while (continuar);
}

vac�o  mostrarLista () {
    Nodo * s = pInicio;

    while (s! = NULL ) {
        mostrarLibro (s-> dato );
        s = s-> sig ;
    }
}

void  eliminarLibro () {
    int unISBN = 0 ;
    cout << " ISBN de libro a eliminar: " ;
    cin >> unISBN;

    Nodo * p = pInicio, * q = NULL ;

    while (p! = NULL && (p-> dato ). isbn ! = unISBN) {
        q = p;
        p = p-> sig ;
    }
    if (p == NULL ) {
        cout << " Libro a borrar NO existe " << endl;
        volver ;
    }
    si (q == NULL )
        pInicio = p-> sig ;
    m�s
        q-> sig = p-> sig ;
    eliminar (p);
    cout << " Libro borrado! " << endl;
}

bool  buscarLibro () {
    int unISBN = 0 ;
    cout << " ISBN de libro a buscar: " ;
    cin >> unISBN;

    Nodo * s = pInicio;
    while (s! = NULL && (s-> dato ). isbn ! = unISBN)
        s = s-> sig ;

    // Si s! = NULL entonces el libro SI se encuentra
    // Si s == NULL entonces el libro NO se encuentra
    return (s! = NULL );
}

vac�o  eliminarmisterio () {
    Nodo * p = pInicio, * q = NULL ;
    while (p! = NULL && (p-> dato ). genero ! = misterio) {
        q = p;
        p = p-> sig ;
    }
    if (p == NULL ) {
        cout << " Se han eliminado los libros de misterio " << endl;
        volver ;
    } m�s
        si (q == NULL )
        pInicio = p-> sig ;
    m�s
        q-> sig = p-> sig ;
    eliminar (p);
    eliminarmisterio ();
}

vac�o  buscarespanol () {
    Nodo * s = pInicio;
    int contador = 0 ;
    while (s! = NULL ) {
        if ((s-> dato ). espanol == verdadero ) {
            contador ++;
        }
        s = s-> sig ;
    }
    si (contador> 0 )
    cout << " SI se encontraron libros en espa�ol ( " << contador << " ) " << endl;
    m�s
    cout << " NO se encontraron libros en espa�ol " << endl;
}


vac�o  buscarcf () {
    Nodo * s = pInicio;
    int contador = 0 ;
    while (s! = NULL ) {
        if ((s-> dato ). genero == ciencia_ficcion) {
            contador ++;
        }
        s = s-> sig ;
    }
    si (contador> 0 )
    cout << " SI se encontraron libros de ciencia ficci�n ( " << contador << " ) " << endl;
    m�s
    cout << " NO se encontraron libros de ciencia ficci�n " << endl;
}

int  main () {
    cout << " Inicializando ... " << endl;
    pInicio = NULL ;

    bool continuar = verdadero ;
    hacer {
        int opcion = 0 ;
        cout << " \ n Men�: \ n \ t 1) Agregar Libro \ n \ t 2) Ver Libros "
            << " \ n \ t 3) Eliminar libro \ n \ t 4) Buscar Libro \ n \ t 5. Buscar libros en espa�ol \ n \ t 6. Buscar libros de ciencia ficci�n \ n \ t 7. Eliminar libros de misterio "
            " \ n \ t 8) Salir \ n \ t Opci�n elegida: " ;
        cin >> opcion;
        interruptor (opci�n) {
            caso  1 : cout << " Agregando ... " << endl;
                agregarLibro ();
            romper ;
            caso  2 : cout << " Listando ... " << endl;
                mostrarLista ();
            romper ;
            caso  3 : cout << " Eliminando ... " << endl;
                eliminarLibro ();
            romper ;
            caso  4 : cout << " Buscando ... " << endl;
                if ( buscarLibro ())
                    cout << " El libro SI se encuentra " << endl;
                m�s
                    cout << " El libro NO se encuentra " << endl;
                // cout << "El libro" << (buscarLibro ()? "SI": "NO") << "se encuentra" << endl;
            romper ;
            caso  5 : cout << " Buscando ... " << endl;
                buscarespanol ();
            romper ;
            caso  6 : cout << " Buscando ... " << endl;
                buscarcf ();
                romper ;
            caso  7 : cout << " Eliminando los libros ... " << endl;
                eliminarmisterio ();
                romper ;
            caso  8 : continuar = falso ;
            romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
            romper ;
        }
    } while (continuar);

    devuelve  0 ;
}
