# include  < iostream >

usando el  espacio de nombres  estándar ;

int  Buscar ( int [], int , int , int );

int  main ()
{
int tamanio = 8 ;
int numero, indice;	
int bajo = 0 ;
int high = tamanio- 1 ;
 
int Arreglo [tamanio] = { 1 , 3 , 4 , 5 , 17 , 18 , 31 , 33 };

cout <<   " Ingrese un numero entero positivo: " << endl;
cin >> numero;

indice = ( Buscar (Arreglo, numero, bajo, alto));

si (índice == - 1 )
cout << " El numero NO fue encontrado " << endl;
más {
cout << " El numero SI esta en el arreglo. En la posicion: [ " << indice << " ] " << endl;
cout << " Las posiciones se toman del 1 al 8 " << endl;
}

devuelve  0 ;	
}

int  Buscar ( int Arreglo [], int numero, int bajo, int alto) {

	int mid, indice = - 1 ;
	
	si (alto <bajo)
	{
		volver - 1 ;
	}
	más {
		medio = (bajo + alto) / 2 ;
	if (numero <Arreglo [mediados])
	{
		return ( Buscar (Arreglo, numero, bajo, medio- 1 ));
	}
	más
	{
		if   (numero> Arreglo [mediados])
		{
			return ( Buscar (Arreglo, numero, medio + 1 , alto));
		}
		más
		{
		 regresar mid + 1 ;
		}
	}
	}
}
