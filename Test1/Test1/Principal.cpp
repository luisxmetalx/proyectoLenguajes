#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include "poly34.h"
using namespace std;
#define M_PI 3.14159265358979323846 /* pi */

void mostrarMenuPrincipal();
void menuPrincipal();
void imprimirP();
void menuVolumenes(int opMenu1);
void menuPolinomios(int opMenu1);
void multiplicarMatrices();
int validar_Numero(char numero[]);//valida si es digito ingrsando una cadena
void PolinomioGrado2();
void PolinomioGrado3();
void PolinomioGrado4();

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

void menuVolumenes(int opMenu1) {
	int opMenuVol = -1;
	float radio = -1.0, altura = -1.0;
	float x = -1.0, y=-1.0, z=-1.0;
	system("cls");
	cout << "\n\n\n\t\t ----------M E N U  D E  O P C I O N E S--------";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t|";
	cout << "\n\t\t|\t 1 > Volumen de una esfera\t\t|";
	cout << "\n\t\t|\t 2 > Volumen de un cilindro\t\t|";
	cout << "\n\t\t|\t 3 > Volumen de un paralelepipedo\t|";
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
		do {
			cout << "\n\n\t\t Ingrese el Ancho: ";
			fflush(stdin);	cin >> x;	fflush(stdin);
		} while (x<0);

		do {
			cout << "\n\n\t\t Ingrese el Altura: ";
			fflush(stdin);	cin >> y;	fflush(stdin);
		} while (y<0);

		do {
			cout << "\n\n\t\t Ingrese el Profundidad: ";
			fflush(stdin);	cin >> z;	fflush(stdin);
		} while (z<0);

		cout << "\n\t\t El volumen del Paralelepipedo con medidas [ " << x << " x " << y << " x " << z << " ] es: " << x*y*z << " [u^3]";
		cout << "\n\n\t\t [Presione una tecla para continuar]";

		_getch();
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
		PolinomioGrado2();
		_getch();
		opMenuPol = -1;
		break;
	case(2) :
		PolinomioGrado3();
		_getch();
		opMenuPol = -1;
		break;
	case(3) :
		PolinomioGrado4();
		_getch();
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
	int m, n, f, c, i=0, j=0, k=0, op;
	char dato[5];
	float A[100][100], B[100][100], C[100][100];
	op = 0;
	cout<<"\n---------------------------------------------------"<<endl;
	cout<<"\nINGRESE NUMERO DE FILAS Y COLUMNAS DE LA PRIMERA MATRIZ"<<endl;
	while (op != 1){
		cout << " Numero de Filas: ";
		cin >> dato;
		if (validar_Numero(dato) == 0){
			op = 1;
		}
		else{
			cout << " Ingrese un dato numerico Por Favor. >:v " << endl;
		}
	}
	m = atoi(dato);
	//cout << "el numero de filas es : " << m << endl;
	op = 0;
	while (op != 1){
		cout << " Numero de Columnas: ";
		cin >> dato;
		if (validar_Numero(dato) == 0){
			op = 1;
		}
		else{
			cout << " Ingrese un dato numerico Por Favor. >:v " << endl;
		}
	}
	n = atoi(dato);
	op = 0;
	
	cout<<"\n---------------------------------------------------"<<endl;
	cout<<"\nINGRESE NUMERO DE FILAS Y COLUMNAS DE LA SEGUNDA MATRIZ"<<endl;
	while (op != 1){
		cout << " Numero de Filas: ";
		cin >> dato;
		if (validar_Numero(dato) == 0){
			op = 1;
		}
		else{
			cout << " Ingrese un dato numerico Por Favor. >:v " << endl;
		}
	}
	f = atoi(dato);
	//cout << "el numero de filas es : " << m << endl;
	op = 0;
	while (op != 1){
		cout << " Numero de Columnas: ";
		cin >> dato;
		if (validar_Numero(dato) == 0){
			op = 1;
		}
		else{
			cout << " Ingrese un dato numerico Por Favor. >:v " << endl;
		}
	}
	c = atoi(dato);
	op = 0;
	cout<<endl;

	if (n == f)
	{
		cout << "\n---------------------------------------------------" << endl;
		cout << "INGRESE EL VALOR DE LA PRIMERA MATRIZ" << endl;
		cout << endl;
		//INGRESE LAS MATRICES
		for (i = 1; i <= m; i++){
			for (j = 1; j <= n; j++){
				while (op != 1){
					cout << "A(" << i << "," << j << ")= ";
					cin >> dato;
					if (validar_Numero(dato) == 0){
						op = 1;
					}
					else{
						cout << "Ingrase un dato numerico Por Favor. >:v " << endl;
					}
				}
				A[i][j] = atoi(dato);
				op = 0;
			}
		}

		cout << endl;
		cout << "\n---------------------------------------------------" << endl;
		cout << "\nINGRESE EL VALOR DE LA SEGUNDA MATRIZ" << endl;
		cout << endl;
		for (i = 1; i <= f; i++){
			for (j = 1; j <= c; j++){
				while (op != 1){
					cout << "B(" << i << "," << j << ")= ";
					cin >> dato;
					if (validar_Numero(dato) == 0){
						op = 1;
					}
					else{
						cout << "Ingrase un dato numerico Por Favor. >:v " << endl;
					}
			}
			B[i][j] = atoi(dato);
			op = 0;
			}
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
		cout << "\n\t\t ______________________________________________" << endl;
		cout << "\t\t|   Estas matrices no se pueden multiplicar   |" << endl;
		cout << "\t\t|  debido a que el numero de columnas de la   |" << endl;
		cout << "\t\t| matriz A no coincide con el numero de filas |" << endl;
		cout << "\t\t|    de la matriz B. !Vuelva a intentarlo!    |" << endl;
		cout << "\t\t ---------------------------------------------- "<< endl;
	}
	_getch();

}

int validar_Numero(char numero[]){
	int i, sw,j;
	i = 0;
	sw = 0;
	j = strlen(numero);
	while (i < j && sw == 0){
		if (isdigit(numero[i]) != 0){
			i++;
		}
		else{
			sw = 1;
		}
	}
	return sw;
}

void PolinomioGrado2(){
	int a=0,b=0,c=0;
	float deter=-1.0;
	float x1=-1.0, x2=-1.0;
	float preal = 0.0, pim = 0.0;
	while(a<1.0){
		cout << " Ingrese el valor de a: "; fflush(stdin);
		cin >> (a); fflush(stdin);
	}
	cout << " Ingrese el valor de b: "; 
	cin >> (b); 
	cout << " Ingrese el valor de c: "; 
	cin >> (c);
	
	deter = (b*b)-4*a*c ;

	if( deter >= 0 )
	{
		x1 = ( -b + sqrt(deter) )/(2*a);
		x2 = ( -b - sqrt(deter) )/(2*a);
		cout << " -> La primera solucion es:  x1 = " << x1 << endl; 
		cout << " -> La segunda solucion es:  x2 = " << x2 << endl; 
	}
	else if( deter == 0 )
	{
		x1 = ( -b + sqrt(deter) )/(2*a);
		cout << " La ecuacion tiene soluciones repetidas "<< endl ;
		cout << " -> La solucion repetida es:  x1 = x2 = " << x1 << endl ; 
	}
	else{
		deter = deter*(-1);
		preal = (-b/(2*a));
		pim = ( sqrt(deter) / (2*a) );
		
		cout << " La ecuacion tiene raices complejas \n" << endl; 
		cout << " -> La primera solucion es:  x1 = " << preal << " + " << pim << " i " << endl; 
		cout << " -> La segunda solucion es:  x2 = " << preal << " - " << pim << " i " << endl; 
	}
}

void PolinomioGrado3(){
	double a=0,b,c,d,X,Y,Z;
	double x[3]={0,0,0};
	double deter;
	while(a<1.0){	cout << " Ingrese el valor de a: ";		fflush(stdin);	cin >> (a);		fflush(stdin);	}
	cout << " Ingrese el valor de b: ";		fflush(stdin);	cin >> (b);		fflush(stdin);	
	cout << " Ingrese el valor de c: ";		fflush(stdin);	cin >> (c);		fflush(stdin);	
	cout << " Ingrese el valor de d: ";		fflush(stdin);	cin >> (d);		fflush(stdin);	
	X = b/a;	Y = c/a;	Z=d/a;
	deter = 18.0*a*b*c*d - 4*b*b*b*d + b*b*c*c - 4.0*a*c*c*c - 27.0*a*a*d*d;

	SolveP3(x,X,Y,Z);
	if(deter>=0.0){
		cout << " -> La primera solucion es:  x1 = " << x[0] << endl; 
		cout << " -> La segunda solucion es:  x2 = " << x[1] << endl; 
		cout << " -> La tercera solucion es:  x3 = " << x[2] << endl; 
	}else{
		cout << " -> La primera solucion es:  x1 = " << x[0] << endl;
		cout << " -> La segunda solucion es:  x2 = " << x[1] << " + (" << x[2] << ") i " << endl;
		cout << " -> La tercera solucion es:  x3 = " << x[1] << " - (" << x[2] << ") i " << endl;
	}
}

void PolinomioGrado4(){
	double a, b, c, d;
	double x[4];
	int res;

	cout << "Polinomio de cuarto grado de la forma: x^4 + a*x^3 + b*x^2 + c*x + d" << endl;
	cout << "ingrese el valor de a: ";
	fflush(stdin);
	cin >> a;
	fflush(stdin);
	cout << "ingrese el valor de b: ";
	fflush(stdin);
	cin >> b;
	fflush(stdin);
	cout << "ingrese el valor de c: ";
	fflush(stdin);
	cin >> c;
	fflush(stdin);
	cout << "ingrese el valor de d: ";
	fflush(stdin);
	cin >> d;
	fflush(stdin);
	res = SolveP4(x, a, b, c, d);
	cout << endl;
	cout << "-->La primera solucion es: " << x[0] << "\n-->La Segunda solucion es: " << x[1] << "\n-->La Tercera solucion es: " << x[2] << "\n-->La Cuarta solucion es : " << x[3] << endl;
}