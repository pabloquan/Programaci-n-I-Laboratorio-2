#include <iostream>
using namespace std;
void esPar();
void esBisiesto();
void sonIguales();
void esMayorEdad();
void calificacion();
void repeticion();

char respuesta;
bool repetir;

int main(){
	do{
		system("cls");
		int opcion;
		cout << "\tMenu:\n\n";
		cout << "1. Comprobar si el numero es par\n";
		cout << "2. Comprobar si el anio es bisiesto\n";
		cout << "3. Comprobar si los numeros son iguales\n";
		cout << "4. Comprobar si es mayor de edad\n";
		cout << "5. Comprobar si se gano el semestre\n";
		cout << "6. Salir del menu\n\n";
		cout << "Opcion a elegir: ";
		cin >> opcion;
		
		switch(opcion){
			 case 1:
			 	esPar();
			 	repeticion();
			 	break;
			case 2:
				esBisiesto();
				repeticion();
				break;
			case 3:
				sonIguales();
				repeticion();
				break;
			case 4:
				esMayorEdad();
				repeticion();
				break;
			case 5:
				calificacion();
				repeticion();
				break;
			case 6:
				repetir = false;
				break;
			default:
				repetir = true;	
		}	
		
	} while(repetir == true);
	
	
	return 0;
}

void esPar(){
	system("cls");
	int numUsuario;
	cout << "\tVerificacion si el numero es par o impar";
	cout << "\n\nIngrese un numero entero: "; 
	scanf("%d", &numUsuario);
	
	if ((numUsuario % 2) == 0){
		cout << "\nEl numero " << numUsuario << " es par\n\n";
	}
	else{
		cout << "\nEl numero " << numUsuario << " es impar\n\n";
	}
	system("pause");
}

void esBisiesto(){
	system("cls");
	int anio;
	cout << "\tVerficacion para comprobar si el año ingresado es bisiesto\n\n";
	cout << "Ingrese el anio que desea comprobar: ";
	cin >> anio;
	if ((anio % 4) == 0){
		cout << "\nEl anio " << anio << " es bisiesto\n\n";
	}
	else{
		cout << "\nEl anio " << anio << " no es bisiesto\n\n";
	}
	system("pause");
}

void sonIguales(){
	system("cls");
	int numUno, numDos;
	cout << "\tVerficacion para comprobar si los dos numeros ingresados son iguales\n\n";
	cout << "Ingrese el primer numero: ";
	cin >> numUno;
	cout << "Ingrese el segundo numero: ";
	cin >> numDos;
	
	if (numUno == numDos){
		cout << "\nAmbos numeros ingresados son iguales\n\n";
	}
	else{
		cout << "\nLos numeros ingresados no son iguales\n\n";
	}
	system("pause");
}

void esMayorEdad(){
	system("cls");
	int edad;
	cout << "\tComprobacion si el usuario es mayor de edad\n\n";
	cout  << "Ingrese la edad: ";
	cin >> edad;
	
	if (edad >= 18){
		cout << "\nEL usuario es mayor de edad\n\n";
	}
	else{
		cout << "\nEl usuario es menor de edad\n\n";
	}
	system("pause");
}

void calificacion(){
	system("cls");
	int nota;
	cout << "\tComprobacion si el usuario gano el semestre\n\n";
	cout << "Ingrese la nota final del semestre: ";
	cin >> nota;
	if (nota >= 60){
		cout << "\nEl usuario ha ganado el semestre\n\n";
	}
	else{
		cout << "\nEl usuario no ha ganado el semestre\n\n";
	}
	system("pause");
}

void repeticion(){
	do{
		system("cls");
		cout << "Desea realizar otra accion? S/N: ";
		cin >> respuesta;
	} while(respuesta !='n' and respuesta !='N' and respuesta !='S' and respuesta !='s');
		
	if (respuesta == 's' or respuesta == 'S'){
		repetir = true;
	}
	else if (respuesta == 'n' or respuesta == 'N'){
		repetir = false;
	} 
}
