#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

void mostrarMenuPrincipal();
void menuPrincipal();
void imprimirP();


void main(){
	menuPrincipal();

}

void mostrarMenuPrincipal(){
	cout << "\n\n\n\t\t ----------M E N U  D E  O P C I O N E S--------";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t 1 > Resolver polinomio\t\t\t|";
	cout << "\n\t\t|\t 2 > Calculo de volumenes\t\t|";
	cout << "\n\t\t|\t 3 > Multiplicar matrices\t\t|";
	cout << "\n\t\t|\t 4 > Salir\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t  ----------------------------------------------";
}

void  menuPrincipal(){
	int opMenu1 = -1;
	do{
		fflush(stdin);
		do{
			imprimirP();
			mostrarMenuPrincipal();
			cout << "\n\n\t\t Ingrese una Opcion: ";
		} while (opMenu1<1 && opMenu1>4);
		fflush(stdin);	cin >> opMenu1;	fflush(stdin);

		switch (opMenu1){
		case (1) :
			cout << "1" ;
			_getch();
			opMenu1 = -1;
			break;
		case(2) :
			cout << "2";
			_getch();
			opMenu1 = -1;
			break;
		case(3) :
			cout << "3";
			_getch();
			opMenu1 = -1;
			break;
		case(4) :

			system("cls");			cout << "\n\t\tHa salido con exito.";	 _getch();		break;
		default:
			system("cls");			cout << "\nOpcion no valida. Intente de nuevo\n";	opMenu1 = -1;			break;
		} // Cierre switch
	} while (opMenu1 != 4);

	_getch();

}

void imprimirP(){
	system("cls");
	cout << "\n\t\t\t\t     ¶ ¶ ¶ ¶";
	cout << "\n\t\t\t\t   ¶         ¶";
	cout << "\n\t\t\t\t ¶      ¶   ¶";
	cout << "\n\t\t\t\t¶         ¶";
	cout << "\n\t\t\t\t¶       ¶";
	cout << "\n\t\t\t\t ¶       ¶";
	cout << "\n\t\t\t\t  ¶        ¶";
	cout << "\n\t\t\t\t   ¶        ¶";
	cout << "\n\t\t\t\t     ¶ ¶ ¶ ¶";
}