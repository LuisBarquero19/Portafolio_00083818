//en la primer actividad de la materia teniamos que mostrar la direccion de las variables//
# include  < iostream >
# include  < stdlib.h >
usando el  espacio de nombres  estándar ;
estructura  pilas
{
	int valor;
	pilas * direccionA;
};
pilas * pilao, * pilaaux;
nulo  ingreso ();
vacío  mostrar ();
anular  eliminar ();
anular  buscar ();
int  main ()
{
	int opcion;
	while ( verdadero ) {
		cout << " 1 Ingreso de datos a la pila " << endl;
		cout << " 2 Leer datos de la pila " << endl;
		cout << " 3 Eliminar datos de la pila " << endl;
		cout << " 4 Buscar datos en la pila " << endl;
		cin >> opcion;
		interruptor (opción) {
			caso  1 : {
				ingreso ();
				romper ;
			}
			caso  2 : {
				mostrar ();
				romper ;
			}
			caso  3 : {
				eliminar ();
				romper ;
			}
			caso  4 : {
				buscar ();
				romper ;
			}

			
		}
	}
}
nulo  ingreso () {
	if (pilao == NULL ) {
		pilao = nuevo (pilas);
		cout << " Mi Direccion " << pilao << endl;
		cout << " Ingrese PRIMER dato a la pila " << endl;
		cin >> pilao-> valor ;
		cout << " Dato ingresado correctamente " << endl;
		pilao-> direccionA = NULL ;
		cout << " Dirección anterior " <<pilao-> direccionA << endl;
		volver ;
	}
	pilaaux = nuevo (pilas);
	cout << " Ingrese dato a la pila " << endl;
	cout << " Mi Direccion " << pilaaux << endl;
	cin >> pilaaux-> valor ;
	cout << " Dato ingresado correctamente " << endl;
	pilaaux-> direccionA = pilao;
	cout << " Dirección Anterior " <<pilaaux-> direccionA << endl;
	pilao = pilaaux;
}
void  mostrar () {
	if (pilao == NULL ) {
		cout << " No hay datos en la pila " << endl;
	}
	pilaaux = pilao;
	cout << " Los datos de la pila son: " << endl;
	while (pilaaux! = NULL ) {
		cout <<pilaaux-> valor << endl;
		pilaaux = pilaaux-> direccionA ;
	}
	cout << " FIN " << endl;
}
void  eliminar () {
	if (pilao == NULL ) {
		cout << " No hay datos en la pila " << endl;
		volver ;
	}
	pilaaux = nuevo (pilas);
	pilaaux = pilao;
	cout << " Elemento eliminado " <<pilaaux-> valor << endl;
	pilao = pilaaux-> direccionA ;
	eliminar (pilaaux);
}
vacío  buscar () {
	if (pilao == NULL ) {
		cout << " La pila esta vacia " << endl;
		volver ;
	}
	int buscardatos;
	bool encontrado = falso ;
	pilaaux = pilao;
	cout << " Ingrese dato a buscar " << endl;
	cin >> buscardatos;
	while (pilaaux! = NULL ) {
		if (buscardatos == pilaaux-> valor ) {
			cout << " Encontrador, el valor es; " <<pilaaux-> valor << endl;
			encontrado = verdadero ;
			romper ;
		}
		pilaaux = pilaaux-> direccionA ;
	}
	if (encontrado == false ) {
		cout << " No se encontró el valor " << endl;
	}
}
