#include <iostream>


//Caracteristicas de C++

//Es una extension de C, implementa la programacion orientada a objetos
//Podemos usar programacion estructura o orientacion a objetos
//Es un lenguaje fuertemente tipado, esto significa que debemos especificar el tipo de dato de la variable
//Ejemplo: int numero = 5
//Es un lenguaje compilado, esto significa basicamente, que nuestro codigo sera traducido de una vez al codigo maquina de la computadora donde estamos


using namespace std;

int main()
{
	//como definimos una variable en c++?
	//Para definir una varible, debemos especiar primero el tipo dato que estamos haciendo referencia, un nombre a nuestra variable y opcionalmente inicializarla

	//Inicializar significa darle un valor a una variable, cuando esta no contiene ninguno
	//Variable de tipo entero, acepta valores numericos enteros, positivos y negativos
	int numero = 3;

	//Variable de tipo flotante, acepta valores decimales, positivos y negativos

	float decimalFlotante = 3.5;

	//Variable de tipo double, acepta valores decimales, positivos y negativos

	double decimalDouble = 4.5;

	//Variable booleana
	// Acepta valores entre true y false

	bool exit = true;

	//Char (heredado de c)
	//Nos permite almacenar un caracter
	//Usando comillas simples

	char letra = 'a';

	//Existen otros tipos de variables, pero las veremos un poco mas adelante


	cout << "Hello World!\\n";
	cout << numero << std::endl;
	cout << decimalFlotante << std::endl;
	cout << decimalDouble << std::endl;
	cout << letra << std::endl;



	//Entrada y salida de datos
	//Para poder hacer un ingreso de informacion a nuestros programas o incluso, hacer que salga o se muestre, vamos a necesitar una serie de metodos u objetos
	//Para eso podemos usar la standart library, que contiene una serie de funcionalidades, objetos, clases y demas
	//Que nos facilitan la vida

	//Para hacer entrada de datos necesitamos incluir la cabezera de  <iostream> y ademas usar el namaspace llamado std

	std::cout << "Salida de datos" << std::endl;

	//std::endl hace un salto de linea

	// ## Para realizar una entrada de datos ##
	// Utilizamos el mismo namespace y el metodo cin, de esta forma:

	int numeroEntrada;

	std::cout << "Ingrsa un numero: ";
	cin >> numeroEntrada;
	std::cout << "El numero que entro es: " << numeroEntrada;


	// Estructas de control
	// Existen diferentes estructuras de control basicas

	//if else
	//switch
	//for
	//do while
	//while

	// Ejemplo de if
	int numeroEntrada2;

	std::cout << "ingresa un numero para saber si es mayor que 10: " << std::endl;
	std::cin >> numeroEntrada2;
	if (numeroEntrada2 > 10)
	{
		std::cout << "El numero es mayor que 10" << std::endl;
	}
	else {
		std::cout << "El numero no es mayor que 10" << std::endl;
	}

	//Ejemplo de switch

	std::cout << "### Menu ###" << std::endl;
	std::cout << "1- opcion" << std::endl;
	std::cout << "2- opcion" << std::endl;
	std::cout << "3- opcion" << std::endl;

	int opcion;
	std::cout << "Ingresa una opcion: ";
	std::cin >> opcion;


	switch (opcion)
	{
	case 1:
		std::cout << "Esta es la opcion uno" << std::endl;
		break;
	case 2:
		std::cout << "Esta es la opcion dos" << std::endl;
		break;
	case 3:
		std::cout << "Esta es la opcion tres" << std::endl;
		break;


	default:
		std::cout << "no es ninguna de las opciones" << std::endl;
		break;
	}

	//for
	//Es una estructa de control que permite iterar en base a una variable contador que se va incrementadon o decrementando

	for (int e = 0; e < 10; e++)
	{
		std::cout << "La variable e vale: " << e << std::endl;
	}

	//Do while
	//El do while se ejecuta minimamente una vez, despues dependera de que se cumpla la condicion
	bool salirDelDoWhile = false;
	char respuesta;
	do
	{
		std::cout << "Deseas salir del do while?";
		std::cin >> respuesta;

		if (respuesta == 's')
		{
			salirDelDoWhile = true;
			std::cout << "Salimos" << std::endl;
		}

	} while (salirDelDoWhile == false);

	//while
	//es similar al do while, pero se va a ejecutar siempre que se cumpla la condicion

	int contador = 10;
	while (contador < 5)
	{
		std::cout << "El numero es: " << contador << std::endl;
		contador++;
	}




}
