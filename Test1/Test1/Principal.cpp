#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

void mostrarMenuPrincipal();
void menuPrincipal();
void imprimirP();
void menuVolumenes(int opMenu1);
void menuPolinomios(int opMenu1);
void multiplicarMatrices();


void main(){
	menuPrincipal();

}

void mostrarMenuPrincipal(){
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

void  menuPrincipal(){
	int opMenu1 = -1;
	do{
		fflush(stdin);
		do{
			// imprimirP();
			mostrarMenuPrincipal();
			cout << "\n\n\t\t Ingrese una Opcion: ";
		} while (opMenu1<1 && opMenu1>4);
		fflush(stdin);	cin >> opMenu1;	fflush(stdin);

		switch (opMenu1){
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

void menuVolumenes(int opMenu1){
	int opMenuVol = -1;
	system("cls");
	cout << "\n\n\n\t\t ----------M E N U  D E  O P C I O N E S--------";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t 1 > Volumen de una esfera\t\t\t|";
	cout << "\n\t\t|\t 2 > Volumen de un cilindro\t\t|";
	cout << "\n\t\t|\t 3 > Otro volunen\t\t|";
	cout << "\n\t\t|\t 4 <-  Atras\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t  ----------------------------------------------";
	
	do{
		cout << "\n\n\t\t Ingrese una Opcion: ";
	} while (opMenuVol<1 && opMenuVol>4);
	fflush(stdin);	cin >> opMenuVol;	fflush(stdin);
	
	switch (opMenuVol){
	case(1) :

		opMenuVol = -1;
		break;
	case(2) :

		opMenuVol = -1;
		break;
	case(3) :

		opMenuVol = -1;
		break;
	case(4) :
		opMenu1 = -1;
//		opMenuVol = -1;
		break;
	default:
		system("cls");			cout << "\nOpcion no valida. Intente de nuevo\n";	opMenuVol = -1;			break;
	}
}

void menuPolinomios(int opMenu1){
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
	
	do{
		cout << "\n\n\t\t Ingrese una Opcion: ";
	} while (opMenuPol<1 && opMenuPol>4);

	fflush(stdin);	cin >> opMenuPol;	fflush(stdin);
	switch (opMenuPol){
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

void multiplicarMatrices(){
	//cout << ":v \n"<<endl;
	//_getch();
	int m, n, f, c, i, j, k;
	float A[100][100], B[100][100], C[100][100];
	cout<<"\n---------------------------------------------------"<<endl;
	cout<<"\nINGRESE LA FILA Y COLUMNA DE LA PRIMERA MATRIZ"<<endl;
	cout << "Fila: ";
	cin>>m;
	cout << "Columna: ";
	cin>>n;
	cout<<"\n---------------------------------------------------"<<endl;
	cout<<"\nINGRESE LA FILA Y COLUMNA DE LA SEGUNDA MATRIZ"<<endl;
	cout << "Fila: ";
	cin>>f;
	cout << "Columna: ";
	cin>>c;
	cout<<endl;
	if (n == f)
	{
		cout<<"\n---------------------------------------------------"<<endl;
		cout<<"INGRESE EL VALOR DE LA PRIMERA MATRIZ"<<endl;
		cout<<endl;
		//INGRESE LAS MATRICES
		for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			cout<<"A("<<i<<","<<j<<")= ";
			cin>>A[i][j];
		}

		cout<<endl;
		cout<<"\n---------------------------------------------------"<<endl;
		cout<<"\nINGRESE EL VALOR DE LA SEGUNDA MATRIZ"<<endl;
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
		cout<<"\n---------------------------------------------------"<<endl;
		cout<<"\nLA MULTIPLICACION DE LAS MATRICES ES: "<<endl;
		cout << endl;
		//IMPRESION
		for (i = 1; i <= m; i++)
		for (j = 1; j <= c; j++)
		{
			cout<<"C("<<i<<","<<j<<")="<<C[i][j]<<"\t";
		}
	}
	else
	{
		cout<<"\n_________________________________________"<<endl;
		cout<<"Estas matrices no se pueden multiplicar "<<endl;
		cout<<"debido a que el numero de columnas de la"<<endl;
		cout<<"matriz A es diferente al numero de filas"<<endl;
		cout<<"de la matriz B, !Vuelva a intentarlo!   "<<endl;
	}
	_getch();
}
