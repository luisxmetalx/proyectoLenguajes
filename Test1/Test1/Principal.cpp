#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

#define M_PI 3.14159265358979323846 /* pi */

void mostrarMenuPrincipal();
void menuPrincipal();
void imprimirP();
void menuVolumenes(int opMenu1);
void menuPolinomios(int opMenu1);
void multiplicarMatrices();

void main() {
	menuPrincipal();
}

void mostrarMenuPrincipal() {
	system("cls");
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

void  menuPrincipal() {
	int opMenu1 = -1;
	do {
		fflush(stdin);
		do {
			// imprimirP();
			mostrarMenuPrincipal();
			cout << "\n\n\t\t Ingrese una Opcion: ";
		} while (opMenu1<1 && opMenu1>4);
		fflush(stdin);	cin >> opMenu1;	fflush(stdin);

		switch (opMenu1) {
		case (1) :
			menuPolinomios(opMenu1);
			opMenu1 = -1;
			break;
		case(2) :
			menuVolumenes(opMenu1);
			opMenu1 = -1;
			break;
		case(3) :
			multiplicarMatrices();
			opMenu1 = -1;
			break;
		case(4) :
			system("cls");			cout << "\n\t\tHa salido con exito.";	 _getch();		break;
		default:
			system("cls");			cout << "\nOpcion no valida. Intente de nuevo\n";	opMenu1 = -1;			break;
		} // Cierre switch
	} while (opMenu1 != 4);
}

void imprimirP() {
	system("cls");
	cout << "\n\t\t\t\t     � � � �";
	cout << "\n\t\t\t\t   �         �";
	cout << "\n\t\t\t\t �      �   �";
	cout << "\n\t\t\t\t�         �";
	cout << "\n\t\t\t\t�       �";
	cout << "\n\t\t\t\t �       �";
	cout << "\n\t\t\t\t  �        �";
	cout << "\n\t\t\t\t   �        �";
	cout << "\n\t\t\t\t     � � � �";
}

void menuVolumenes(int opMenu1) {
	int opMenuVol = -1;
	float radio = -1.0;
	float altura = -1.0;
	system("cls");
	cout << "\n\n\n\t\t ----------M E N U  D E  O P C I O N E S--------";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t 1 > Volumen de una esfera\t\t|";
	cout << "\n\t\t|\t 2 > Volumen de un cilindro\t\t|";
	cout << "\n\t\t|\t 3 > Otro volunen\t\t|";
	cout << "\n\t\t|\t 4 <-  Atras\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t  ----------------------------------------------";

	do {
		cout << "\n\n\t\t Ingrese una Opcion: ";
		fflush(stdin);	cin >> opMenuVol;	fflush(stdin);
	} while (opMenuVol<1 && opMenuVol>4);


	switch (opMenuVol) {
	case(1) :
		do {
			cout << "\n\n\t\t Ingrese el radio: ";
			fflush(stdin);	cin >> radio;	fflush(stdin);
		} while (radio<0);
		cout << "\n\t\tEl volumen de la esfera de radio [r = " << radio << "] es: " << (4.0 / 3.0)*M_PI*pow(radio, 3) << " [u^3]";
		cout << "\n\n\t\t[Presione una tecla para continuar]";
		_getch();
		opMenuVol = -1;
		break;
	case(2) :
		do {
			cout << "\n\n\t\t Ingrese el radio: ";
			fflush(stdin);	cin >> radio;	fflush(stdin);
		} while (radio<0);

		do {
			cout << "\n\n\t\t Ingrese la altura: ";
			fflush(stdin);	cin >> altura;	fflush(stdin);
		} while (altura<0);

		cout << "\n\t\tEl volumen del cilindro de radio [r = " << radio << "] \n\t\t y altura [h=" << altura << "] es: " << altura*M_PI*pow(radio, 2) << " [u^3]";
		cout << "\n\n\t\t[Presione una tecla para continuar]";
		_getch();
		opMenuVol = -1;
		break;
	case(3) :

		opMenuVol = -1;
		break;
	case(4) :
		opMenu1 = -1;

		break;
	default:
		system("cls");			cout << "\nOpcion no valida. Intente de nuevo\n";	opMenuVol = -1;			break;
	}
}

void menuPolinomios(int opMenu1) {
	int opMenuPol = -1;
	system("cls");
	cout << "\n\n\n\t\t ----------M E N U  D E  O P C I O N E S--------";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t 1 > Polinomio grado 2\t\t\t|";
	cout << "\n\t\t|\t 2 > Polinomio grado 3\t\t\t|";
	cout << "\n\t\t|\t 3 > Polinomio grado 4\t\t\t|";
	cout << "\n\t\t|\t 4 <-  Atras\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t  ----------------------------------------------";

	do {
		cout << "\n\n\t\t Ingrese una Opcion: ";
	} while (opMenuPol<1 && opMenuPol>4);

	fflush(stdin);	cin >> opMenuPol;	fflush(stdin);
	switch (opMenuPol) {
	case(1) :

		opMenuPol = -1;
		break;
	case(2) :

		opMenuPol = -1;
		break;
	case(3) :

		opMenuPol = -1;
		break;
	case(4) :
		opMenu1 = -1;
		//		opMenuPol = -1;
		break;
	default:
		system("cls");			cout << "\nOpcion no valida. Intente de nuevo\n";	opMenuPol = -1;			break;
	}

}

void multiplicarMatrices() {
	int m, n, f, c, i, j, k;
	float A[100][100], B[100][100], C[100][100];
	system("cls");
	cout << "\n---------------------------------------------------" << endl;
	cout << "\nINGRESE NUMERO DE FILAS Y COLUMNAS DE LA PRIMERA MATRIZ" << endl;
	cout << "Filas: ";
	cin >> m;
	cout << "Columnas: ";
	cin >> n;
	cout << "\n---------------------------------------------------" << endl;
	cout << "\nINGRESE NUMERO DE FILAS Y COLUMNAS DE LA SEGUNDA MATRIZ" << endl;
	cout << "Filas: ";
	cin >> f;
	cout << "Columnas: ";
	cin >> c;
	cout << endl;
	if (n == f)
	{
		cout << "\n---------------------------------------------------" << endl;
		cout << "INGRESE EL VALOR DE LA PRIMERA MATRIZ" << endl;
		cout << endl;
		//INGRESE LAS MATRICES
		for (i = 1; i <= m; i++)
			for (j = 1; j <= n; j++)
			{
				cout << "A(" << i << "," << j << ")= ";
				cin >> A[i][j];
			}

		cout << endl;
		cout << "\n---------------------------------------------------" << endl;
		cout << "\nINGRESE EL VALOR DE LA SEGUNDA MATRIZ" << endl;
		cout << endl;
		for (i = 1; i <= f; i++)
			for (j = 1; j <= c; j++)
			{
				cout << "B(" << i << "," << j << ")= ";
				cin >> B[i][j];
			}
		//OPERACION DE MULTIPLICACION
		for (i = 1; i <= m; i++)
		{
			for (j = 1; j <= c; j++)
			{
				C[i][j] = 0;
				for (k = 1; k <= n; k++)
				{
					C[i][j] = C[i][j] + A[i][k] * B[k][j];
				}
			}
		}
		cout << "\n---------------------------------------------------" << endl;
		cout << "\nLA MULTIPLICACION DE LAS MATRICES ES: " << endl;
		cout << endl;

		//IMPRESION
		for (i = 1; i <= m; i++) {
			for (j = 1; j <= c; j++) {
				cout << "C(" << i << "," << j << ")=" << C[i][j] << "   ";
			}
			cout << "\n";
		}

	}
	else
	{
		cout << "\n_________________________________________" << endl;
		cout << "Estas matrices no se pueden multiplicar " << endl;
		cout << "debido a que el numero de columnas de la" << endl;
		cout << "matriz A es diferente al numero de filas" << endl;
		cout << "de la matriz B, !Vuelva a intentarlo!   " << endl;
	}
	_getch();
}


