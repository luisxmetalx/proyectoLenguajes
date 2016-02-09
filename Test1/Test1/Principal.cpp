#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <complex>
#include "poly34.h"
using namespace std;
#define M_PI 3.14159265358979323846 /* pi */
#define	TwoPi  6.28318530717958648
const double eps = 1e-14;

void mostrarMenuPrincipal();
void menuPrincipal();
void imprimirP();
void menuVolumenes(int opMenu1);
void menuPolinomios(int opMenu1);
void multiplicarMatrices();
int validar_Numero(char numero[]);//valida si es digito ingrsando una cadena
int SolveP3(double *x, double a, double b, double c);
int SolveP4(double *x, double a, double b, double c, double d);
int SolveP4Bi(double *x, double b, double d);
int SolveP4De(double *x, double b, double c, double d);
void CSqrt(double x, double y, double &a, double &b);
double N4Step(double x, double a, double b, double c, double d);
void PolinomioGrado2();
void PolinomioGrado3();
void PolinomioGrado4();
void PolinomioGrado4Respaldo();


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
		cout << "\n\n\t\t Polinomio de segundo grado ax2+bx+c";
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

int SolveP3(double *x, double a, double b, double c) {	// solve cubic equation x^3 + a*x^2 + b*x + c
	double a2 = a*a;
	double q = (a2 - 3 * b) / 9;
	double r = (a*(2 * a2 - 9 * b) + 27 * c) / 54;
	double r2 = r*r;
	double q3 = q*q*q;
	double A, B;
	if (r2<q3) {
		double t = r / sqrt(q3);
		if (t<-1) t = -1;
		if (t> 1) t = 1;
		t = acos(t);
		a /= 3; q = -2 * sqrt(q);
		x[0] = q*cos(t / 3) - a;
		x[1] = q*cos((t + TwoPi) / 3) - a;
		x[2] = q*cos((t - TwoPi) / 3) - a;
		return(3);
	}
	else {
		A = -pow(fabs(r) + sqrt(r2 - q3), 1. / 3);
		if (r<0) A = -A;
		B = A == 0 ? 0 : B = q / A;

		a /= 3;
		x[0] = (A + B) - a;
		x[1] = -0.5*(A + B) - a;
		x[2] = 0.5*sqrt(3.)*(A - B);
		if (fabs(x[2])<eps) { x[2] = x[1]; return(2); }
		return(1);
	}
}

void PolinomioGrado2(){
	int a = 0, b = 0, c = 0;
	float deter = -1.0;
	float x1 = -1.0, x2 = -1.0;
	float preal = 0.0, pim = 0.0;
	while (a<1.0){
		cout << "\n\n\t\t Ingrese el valor de a: "; fflush(stdin);
		cin >> (a); fflush(stdin);
	}
	cout << "\n\n\t\t Ingrese el valor de b: ";
	cin >> (b);
	cout << "\n\n\t\t Ingrese el valor de c: ";
	cin >> (c);

	deter = (b*b) - 4 * a*c;

	if (deter >= 0)
	{
		x1 = (-b + sqrt(deter)) / (2 * a);
		x2 = (-b - sqrt(deter)) / (2 * a);
		cout << "\n\n\t\t -> La primera solucion es:  x1 = " << x1 << endl;
		cout << "\n\n\t\t -> La segunda solucion es:  x2 = " << x2 << endl;
	}
	else if (deter == 0)
	{
		x1 = (-b + sqrt(deter)) / (2 * a);
		cout << "\n\n\t\t La ecuacion tiene soluciones repetidas " << endl;
		cout << "\n\n\t\t -> La solucion repetida es:  x1 = x2 = " << x1 << endl;
	}
	else{
		deter = deter*(-1);
		preal = (-b / (2 * a));
		pim = (sqrt(deter) / (2 * a));

		cout << "\n\n\t\t La ecuacion tiene raices complejas \n" << endl;
		cout << "\n\n\t\t -> La primera solucion es:  x1 = " << preal << " + " << pim << " i " << endl;
		cout << "\n\n\t\t -> La segunda solucion es:  x2 = " << preal << " - " << pim << " i " << endl;
	}
}

void PolinomioGrado3(){
	double a = 0, b, c, d, X, Y, Z;
	double x[3] = { 0, 0, 0 };
	double deter;
	while (a<1.0){ cout << "\n\n\t\t Ingrese el valor de a: ";		fflush(stdin);	cin >> (a);		fflush(stdin); }
	cout << "\n\n\t\t Ingrese el valor de b: ";		fflush(stdin);	cin >> (b);		fflush(stdin);
	cout << "\n\n\t\t Ingrese el valor de c: ";		fflush(stdin);	cin >> (c);		fflush(stdin);
	cout << "\n\n\t\t Ingrese el valor de d: ";		fflush(stdin);	cin >> (d);		fflush(stdin);
	X = b / a;	Y = c / a;	Z = d / a;
	deter = 18.0*a*b*c*d - 4 * b*b*b*d + b*b*c*c - 4.0*a*c*c*c - 27.0*a*a*d*d;

	SolveP3(x, X, Y, Z);
	if (deter >= 0.0){
		cout << "\n\n\t\t -> La primera solucion es:  x1 = " << x[0] << endl;
		cout << "\n\n\t\t -> La segunda solucion es:  x2 = " << x[1] << endl;
		cout << "\n\n\t\t -> La tercera solucion es:  x3 = " << x[2] << endl;
	}
	else{
		cout << "\n\n\t\t -> La primera solucion es:  x1 = " << x[0] << endl;
		cout << "\n\n\t\t -> La segunda solucion es:  x2 = " << x[1] << " + (" << x[2] << ") i " << endl;
		cout << "\n\n\t\t -> La tercera solucion es:  x3 = " << x[1] << " - (" << x[2] << ") i " << endl;
	}
}


void PolinomioGrado4Respaldo(){
	double a = 0, b, c, d, e, X, Y, Z, W;
	double t[4] = { 0, 0, 0, 0 };
	double cb, cc, cd;
	double deter=0;
	while (a<1.0){ cout << "\n\n\t\t Ingrese el valor de a: ";		fflush(stdin);	cin >> (a);		fflush(stdin); }
	cout << "\n\n\t\t Ingrese el valor de b: ";		fflush(stdin);	cin >> (b);		fflush(stdin);
	cout << "\n\n\t\t Ingrese el valor de c: ";		fflush(stdin);	cin >> (c);		fflush(stdin);
	cout << "\n\n\t\t Ingrese el valor de d: ";		fflush(stdin);	cin >> (d);		fflush(stdin);
	cout << "\n\n\t\t Ingrese el valor de e: ";		fflush(stdin);	cin >> (e);		fflush(stdin);
	X = b / a;	Y = c / a;	Z = d / a; W = e / a;

	cb = -c;
	cc = -4.0*e + d*b;
	cd = -(b*b*e + d*d) + 4.0*c*e;
	//	q = (3.0*cc - (cb*cb)) / 9.0;
	//	r = -(27.0*cd) + cb*(9.0*cc - 2.0*(cb*cb));
	//	r /= 54.0;
	//deter = q*q*q + r*r;
	//deter = 18.0*a*b*c*d - 4 * b*b*b*d + b*b*c*c - 4.0*a*c*c*c - 27.0*a*a*d*d;

	SolveP4(t, X, Y, Z, W);
	if (deter > 0.0){
		cout << "\n\n\t\t -> La primera solucion es:  x1 = " << t[0] << endl;
		cout << "\n\n\t\t -> La segunda solucion es:  x2 = " << t[1] << endl;
		cout << "\n\n\t\t -> La tercera solucion es:  x3 = " << t[2] << endl;
		cout << "\n\n\t\t -> La tercera solucion es:  x4 = " << t[3] << endl;
			}
		//else{
		//	cout << "\n\n\t\t -> La primera solucion es:  x1 = " << x[0] << endl;
		//	cout << "\n\n\t\t -> La segunda solucion es:  x2 = " << x[1] << " + (" << x[2] << ") i " << endl;
		//	cout << "\n\n\t\t -> La tercera solucion es:  x3 = " << x[1] << " - (" << x[2] << ") i " << endl;
		//}
	}

void PolinomioGrado4(){
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float d = 0.0;
	float e = 0.0;
	while (a<1.0){ cout << "\n\n\t\t Ingrese el valor de a: ";		fflush(stdin);	cin >> (a);		fflush(stdin); }
	cout << "\n\n\t\t Ingrese el valor de b: ";		fflush(stdin);	cin >> (b);		fflush(stdin);
	cout << "\n\n\t\t Ingrese el valor de c: ";		fflush(stdin);	cin >> (c);		fflush(stdin);
	cout << "\n\n\t\t Ingrese el valor de d: ";		fflush(stdin);	cin >> (d);		fflush(stdin);
	cout << "\n\n\t\t Ingrese el valor de e: ";		fflush(stdin);	cin >> (e);		fflush(stdin);

	if (a == 0)
	{
		cout << "\n\n\t\t El coeficiente de la potencia de cuatro de x es 0. Polinomio de grado 3" << endl;
		return;
	}
	if (e == 0)
	{
		cout << "\n\n\t\t Una raíz es 0, Se divide todo para x y se resolvera la ecuación resultante para los otros tres raíces." << endl;
		return;
	}
	if (a != 1)
	{
		b /= a;
		c /= a;
		d /= a;
		e /= a;
	}
	float cb, cc, cd;
	float discrim, q, r, RRe, RIm, DRe, DIm, dum1, ERe, EIm, s, t, term1, r13, sqR, y1, z1Re, z1Im, z2Re;
	cb = -c;
	cc = -4.0*e + d*b;
	cd = -(b*b*e + d*d) + 4.0*c*e;
	if (cd == 0)
	{
		cout << "cd = 0." << endl;
	}
	q = (3.0*cc - (cb*cb)) / 9.0;
	r = -(27.0*cd) + cb*(9.0*cc - 2.0*(cb*cb));
	r /= 54.0;
	discrim = q*q*q + r*r;
	term1 = (cb / 3.0);
	if (discrim > 0)
	{
		s = r + sqrt(discrim);
		s = ((s < 0) ? -pow(-s, (1.0 / 3.0)) : pow(s, (1.0 / 3.0)));
		t = r - sqrt(discrim);
		t = ((t < 0) ? -pow(-t, (1.0 / 3.0)) : pow(t, (1.0 / 3.0)));
		y1 = -term1 + s + t;
	}
	else
	{
		if (discrim == 0)
		{
			r13 = ((r < 0) ? -pow(-r, (1.0 / 3.0)) : pow(r, (1.0 / 3.0)));
			y1 = -term1 + 2.0*r13;
		}
		else
		{
			q = -q;
			dum1 = q*q*q;
			dum1 = acos(r / sqrt(dum1));
			r13 = 2.0*sqrt(q);
			y1 = -term1 + r13*cos(dum1 / 3.0);
		}
	}
	term1 = b / 4.0;
	sqR = -c + term1*b + y1;
	RRe = RIm = DRe = DIm = ERe = EIm = z1Re = z1Im = z2Re = 0;
	if (sqR >= 0)
	{
		if (sqR == 0)
		{
			dum1 = -(4.0*e) + y1*y1;
			if (dum1 < 0) 
				z1Im = 2.0*sqrt(-dum1);
			else
			{                     
				z1Re = 2.0*sqrt(dum1);
				z2Re = -z1Re;
			}
		}
		else
		{
			RRe = sqrt(sqR);
			z1Re = -(8.0*d + b*b*b) / 4.0 + b*c;
			z1Re /= RRe;
			z2Re = -z1Re;
		}
	}
	else
	{
		RIm = sqrt(-sqR);
		z1Im = -(8.0*d + b*b*b) / 4.0 + b*c;
		z1Im /= RIm;
		z1Im = -z1Im;
	}
	z1Re += -(2.0*c + sqR) + 3.0*b*term1;
	z2Re += -(2.0*c + sqR) + 3.0*b*term1;
	if (z1Im == 0)
	{      
		if (z1Re >= 0)
		{
			DRe = sqrt(z1Re);
		}
		else
		{
			DIm = sqrt(-z1Re);
		}
		if (z2Re >= 0)
		{
			ERe = sqrt(z2Re);
		}
		else
		{
			EIm = sqrt(-z2Re);
		}
	}
	else
	{
		r = sqrt(z1Re*z1Re + z1Im*z1Im);
		r = sqrt(r);
		dum1 = atan2(z1Im, z1Re);
		dum1 /= 2;
		ERe = DRe = r*cos(dum1);
		DIm = r*sin(dum1);
		EIm = -DIm;
	}
	cout << "\n\n\t\t -> La primera solucion es:  x1 = " << (-term1 + (RRe + DRe) / 2.0) << " + (" << (RIm + DIm) / 2.0 << ") i " << endl;
	cout << "\n\n\t\t -> La segunda solucion es:  x2 = " << (-(term1 + DRe / 2.0) + RRe / 2.0) << " + (" << ((-DIm + RIm) / 2.0) << ") i " << endl;
	cout << "\n\n\t\t -> La tercera solucion es:  x3 = " << (-(term1 + RRe / 2) + ERe / 2.0) << " + (" << ((-RIm + EIm) / 2.0) << ") i " << endl;
	cout << "\n\n\t\t -> La cuarta solucion es:   x4 = " << (-(term1 + (RRe + ERe) / 2.0)) << " + (" << (-(RIm + EIm) / 2) << ") i " << endl;
}

void  CSqrt(double x, double y, double &a, double &b) // returns:  a+i*s = sqrt(x+i*y)
{
	double r = sqrt(x*x + y*y);
	if (y == 0) {
		r = sqrt(r);
		if (x >= 0) { a = r; b = 0; }
		else { a = 0; b = r; }
	}
	else {		// y != 0
		a = sqrt(0.5*(x + r));
		b = 0.5*y / a;
	}
}

int SolveP4Bi(double *x, double b, double d)	// solve equation x^4 + b*x^2 + d = 0
{
	double D = b*b - 4 * d;
	if (D >= 0)
	{
		double sD = sqrt(D);
		double x1 = (-b + sD) / 2;
		double x2 = (-b - sD) / 2;	// x2 <= x1
		if (x2 >= 0)				// 0 <= x2 <= x1, 4 real roots
		{
			double sx1 = sqrt(x1);
			double sx2 = sqrt(x2);
			x[0] = -sx1;
			x[1] = sx1;
			x[2] = -sx2;
			x[3] = sx2;
			return 4;
		}
		if (x1 < 0)				// x2 <= x1 < 0, two pair of imaginary roots
		{
			double sx1 = sqrt(-x1);
			double sx2 = sqrt(-x2);
			x[0] = 0;
			x[1] = sx1;
			x[2] = 0;
			x[3] = sx2;
			return 0;
		}
		// now x2 < 0 <= x1 , two real roots and one pair of imginary root
		double sx1 = sqrt(x1);
		double sx2 = sqrt(-x2);
		x[0] = -sx1;
		x[1] = sx1;
		x[2] = 0;
		x[3] = sx2;
		return 2;
	}
	else { // if( D < 0 ), two pair of compex roots
		double sD2 = 0.5*sqrt(-D);
		CSqrt(-0.5*b, sD2, x[0], x[1]);
		CSqrt(-0.5*b, -sD2, x[2], x[3]);
		return 0;
	} // if( D>=0 ) 
} // SolveP4Bi(double *x, double b, double d)	// solve equation x^4 + b*x^2 d

#define SWAP(a,b) { t=b; b=a; a=t; }
static void  dblSort3(double &a, double &b, double &c) // make: a <= b <= c
{
	double t;
	if (a>b) SWAP(a, b);	// now a<=b
	if (c<b) {
		SWAP(b, c);			// now a<=b, b<=c
		if (a>b) SWAP(a, b);// now a<=b
	}
}

int SolveP4De(double *x, double b, double c, double d)	// solve equation x^4 + b*x^2 + c*x + d
{
	//if( c==0 ) return SolveP4Bi(x,b,d); // After that, c!=0
	if (fabs(c)<1e-14*(fabs(b) + fabs(d))) return SolveP4Bi(x, b, d); // After that, c!=0

	int res3 = SolveP3(x, 2 * b, b*b - 4 * d, -c*c);	// solve resolvent
	// by Viet theorem:  x1*x2*x3=-c*c not equals to 0, so x1!=0, x2!=0, x3!=0
	if (res3>1)	// 3 real roots, 
	{
		dblSort3(x[0], x[1], x[2]);	// sort roots to x[0] <= x[1] <= x[2]
		// Note: x[0]*x[1]*x[2]= c*c > 0
		if (x[0] > 0) // all roots are positive
		{
			double sz1 = sqrt(x[0]);
			double sz2 = sqrt(x[1]);
			double sz3 = sqrt(x[2]);
			// Note: sz1*sz2*sz3= -c (and not equal to 0)
			if (c>0)
			{
				x[0] = (-sz1 - sz2 - sz3) / 2;
				x[1] = (-sz1 + sz2 + sz3) / 2;
				x[2] = (+sz1 - sz2 + sz3) / 2;
				x[3] = (+sz1 + sz2 - sz3) / 2;
				return 4;
			}
			// now: c<0
			x[0] = (-sz1 - sz2 + sz3) / 2;
			x[1] = (-sz1 + sz2 - sz3) / 2;
			x[2] = (+sz1 - sz2 - sz3) / 2;
			x[3] = (+sz1 + sz2 + sz3) / 2;
			return 4;
		} // if( x[0] > 0) // all roots are positive
		// now x[0] <= x[1] < 0, x[2] > 0
		// two pair of comlex roots
		double sz1 = sqrt(-x[0]);
		double sz2 = sqrt(-x[1]);
		double sz3 = sqrt(x[2]);

		if (c>0)	// sign = -1
		{
			x[0] = -sz3 / 2;
			x[1] = (sz1 - sz2) / 2;		// x[0]±i*x[1]
			x[2] = sz3 / 2;
			x[3] = (-sz1 - sz2) / 2;		// x[2]±i*x[3]
			return 0;
		}
		// now: c<0 , sign = +1
		x[0] = sz3 / 2;
		x[1] = (-sz1 + sz2) / 2;
		x[2] = -sz3 / 2;
		x[3] = (sz1 + sz2) / 2;
		return 0;
	} // if( res3>1 )	// 3 real roots, 
	// now resoventa have 1 real and pair of compex roots
	// x[0] - real root, and x[0]>0, 
	// x[1]±i*x[2] - complex roots, 
	double sz1 = sqrt(x[0]);
	double szr, szi;
	CSqrt(x[1], x[2], szr, szi);  // (szr+i*szi)^2 = x[1]+i*x[2]
	if (c>0)	// sign = -1
	{
		x[0] = -sz1 / 2 - szr;			// 1st real root
		x[1] = -sz1 / 2 + szr;			// 2nd real root
		x[2] = sz1 / 2;
		x[3] = szi;
		return 2;
	}
	// now: c<0 , sign = +1
	x[0] = sz1 / 2 - szr;			// 1st real root
	x[1] = sz1 / 2 + szr;			// 2nd real root
	x[2] = -sz1 / 2;
	x[3] = szi;
	return 2;
} // SolveP4De(double *x, double b, double c, double d)	// solve equation x^4 + b*x^2 + c*x + d

double N4Step(double x, double a, double b, double c, double d)	// one Newton step for x^4 + a*x^3 + b*x^2 + c*x + d
{
	double fxs = ((4 * x + 3 * a)*x + 2 * b)*x + c;	// f'(x)
	if (fxs == 0) return 1e99;
	double fx = (((x + a)*x + b)*x + c)*x + d;	// f(x)
	return x - fx / fxs;
}

// x - array of size 4
// return 4: 4 real roots x[0], x[1], x[2], x[3], possible multiple roots
// return 2: 2 real roots x[0], x[1] and complex x[2]±i*x[3], 
// return 0: two pair of complex roots: x[0]±i*x[1],  x[2]±i*x[3], 
int SolveP4(double *x, double a, double b, double c, double d) {	// solve equation x^4 + a*x^3 + b*x^2 + c*x + d by Dekart-Euler method
	// move to a=0:
	double d1 = d + 0.25*a*(0.25*b*a - 3. / 64 * a*a*a - c);
	double c1 = c + 0.5*a*(0.25*a*a - b);
	double b1 = b - 0.375*a*a;
	int res = SolveP4De(x, b1, c1, d1);
	if (res == 4) { x[0] -= a / 4; x[1] -= a / 4; x[2] -= a / 4; x[3] -= a / 4; }
	else if (res == 2) { x[0] -= a / 4; x[1] -= a / 4; x[2] -= a / 4; }
	else             { x[0] -= a / 4; x[2] -= a / 4; }
	// one Newton step for each real root:
	if (res>0)
	{
		x[0] = N4Step(x[0], a, b, c, d);
		x[1] = N4Step(x[1], a, b, c, d);
	}
	if (res>2)
	{
		x[2] = N4Step(x[2], a, b, c, d);
		x[3] = N4Step(x[3], a, b, c, d);
	}
	return res;
}
