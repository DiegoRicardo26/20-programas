#include <iostream>
#include <fstream>
#include <windows.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <cmath>
using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
 
 
//Diego Ricardo De Leon Godoy
int menu () {
	system("color 20");
	int x;
	system ("cls");
	cout<<"\t\t\t\t\t     |--20 PROGRAMAS--| "<<endl<<endl;
	cout<<"\t\t\t\t\t|---Elija EL PROGRAMA---| "<<endl<<endl;
	cout<<"\t\t\tX---------------------------------------------------------------X"<<endl;
	cout<<"\t\t\t|1.  suma, resta, multiplicacion y division de dos numeros.....1|"<<endl;
	cout<<"\t\t\t|2.  Determinar si un valor es par o impar.....................2|"<<endl;
	cout<<"\t\t\t|3.  km a millas, mts a pulg, lb a kilos.......................3|"<<endl;
	cout<<"\t\t\t|4.  Determinar una palabra o numero es palindromo.............4|"<<endl;
	cout<<"\t\t\t|5.  conversion de arabigos a romanos..........................5|"<<endl;
	cout<<"\t\t\t|6.  conversion de numeros enteros a letras....................6|"<<endl;
	cout<<"\t\t\t|7.  conversion de numeros enteros con decimales a letras......7|"<<endl;
	cout<<"\t\t\t|8.  Tabla de multiplicar......................................8|"<<endl;
	cout<<"\t\t\t|9.  Todas las tablas de multiplicar del 1 al 10...............9|"<<endl;
	cout<<"\t\t\t|10. Crear de forma grafica al multiplicacion manual..........10|"<<endl;
	cout<<"\t\t\t|11. Conversion de numeros decimales a binario................11|"<<endl;
	cout<<"\t\t\t|12. conversionde numeros decimales a hexadecimales...........12|"<<endl;
	cout<<"\t\t\t|13. Crear figutas Geometricas basicas........................13|"<<endl;
	cout<<"\t\t\t|14. Mover un punto por toda la pantalla......................14|"<<endl;
	cout<<"\t\t\t|15. Simulacion de un Cajero(Automata)........................15|"<<endl;
	cout<<"\t\t\t|16  Calcular la hipotenusa...................................16|"<<endl;
	cout<<"\t\t\t|17. Calcula cuantos dias has vivido..........................17|"<<endl;
	cout<<"\t\t\t|18. Signo Zodiacal!..........................................18|"<<endl;
	cout<<"\t\t\t|19. Calcular area de trangulo................................19|"<<endl;
	cout<<"\t\t\t|20. Distancias de planetas desde el Sol .....................20|"<<endl;
	cout<<"\t\t\t|21. Salir del programa.......................................21|"<<endl;
	cout<<"\t\t\tX---------------------------------------------------------------X"<<endl;
	cout<<"  "<<endl;
	cout<<"\t\t\t\t\tSeleccione una opcion: ";
	cin>>x;
	return x;
  	
  }
void Primera(){
	system("color 17");
	system("cls");
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"\t\t\t----PROGRAMA DE SUMA, RESTA, MULTIPLICACION Y DIVISION DE DOS NUMEROS----"<<endl;
	cout<<""<<endl;
	int n1, n2;
	float suma=0, resta=0, multi=0, divi=0;
	cout<<"Ingrese su primer valor:  ";
	cin>>n1;
	cout<<"Ingrese su segundo valor: ";
	cin>>n2;
	cout<<""<<endl;
	
	suma= n1 + n2;
	resta= n1 - n2;
	multi= n1 * n2;
	divi= n1 / n2;
	
	cout<<"La suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multi<<endl;
	cout<<"La division es: "<<divi<<endl;
	
	system("pause");
			
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Segunda(){
	system("color 70");
	system("cls");
	cout<<""<<endl;
	cout<<"\t\t\t\t\t----PROGRAMA, DETERMINAR SI UN NUMERO ES PAR O IMPAR---- "<<endl;
	int numero;
	cout<<""<<endl;
	cout<<"Digite su numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"el numero es cero";
	}
	else if (numero%2==0){
		cout<<"El numero es par"<<endl;
	}
	else{
		cout<<"El numero es impar"<<endl;
	}
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Tercera(){
	system("color 70");
	system("cls");
	system("cls");
	int op, km, mill;
	cout<<" "<<endl;
	cout<<"\t\t\t\t----km a millas, mts a pulg, lb a kilos----"<<endl;
	cout<<"1. de km a millas"<<endl;
	cout<<"2. de metros a pulgadas"<<endl;
	cout<<"3. de libras a kilos"<<endl;
	cout<<"Ingrese la opcion que desee: ";
	cin>>op;
	
	switch (op){
	case 1:
		cout<<"ingrese su cantidad de kilometros: ";
		cin>>km;
		mill = km * 0.6214;
		cout<<"La cantidad son: "<<mill<<" millas. "<<endl;
		break;
	case 2:
		cout<<"ingrese su cantidad de metros: ";
		cin>>km;
		mill = km * 39.3701;
		cout<<"La cantidad son: "<<mill<<" pulgadas. "<<endl;
		break;
	case 3:
		cout<<"ingrese su cantidad de libras: ";
		cin>>km;
		mill = km * 0.453592;
		cout<<"La cantidad son: "<<mill<<"Kilos. "<<endl;
		break;
	}
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Cuarta(){
	system("color 70");
	system("cls");
	cout<<" "<<endl;
	cout<<"\t\t\t\t----Determinar una palabra o numero es palindromo----"<<endl;
    string palabra;
 
	cout<<"Ingrese palabra:"<<endl;
	cin >> palabra;
 
	size_t longitud = palabra.length()-1;
	size_t i=0;
	bool esPalindromo = true;
 
	for(i=0 ; i<palabra.length()/2 && esPalindromo ;i++) {
 
		if(palabra[i]!=palabra[longitud-i]){
			esPalindromo = false;
		}
 
	}
 
    cout<<((true == esPalindromo) ? "es palindromo" : "no es palindromo")<<endl;
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Quinta(){
	system("color 70");
	system("cls");
	cout<<" "<<endl;
	cout<<"\t\t\t\t----conversion de arabigos a romanos----"<<endl;
	 int numero, unidades, decenas, centenas, millares;
 
 cout<< "Ingrese un numero: ";
 cin>> numero;
 cout<<"Su numero en romano es: ";
 unidades = numero % 10; numero /= 10;
 decenas = numero % 10; numero /= 10;
 centenas = numero % 10; numero /= 10;
 millares = numero % 10; numero /= 10;

 switch (millares)
 {
  case 1: cout<<" M "<<endl; break;
  case 2: cout<<" MM "<<endl; break;
  case 3: cout<<" MMM "<<endl; break;
 }
 
 switch (centenas)
 {
  case 1: cout<<" C "<<endl; break;
  case 2: cout<<" CC "<<endl; break;
  case 3: cout<<" CCC "<<endl; break;
  case 4: cout<<" CD "<<endl; break;
  case 5: cout<<" D "<<endl; break;
  case 6: cout<<" DC "<<endl; break;
  case 7: cout<<" DCC "<<endl; break;
  case 8: cout<<" DCCC "<<endl; break;
  case 9: cout<<" CM "<<endl; break; 
 }
 
 switch (decenas)
 {
  case 1: cout<<" X "<<endl; break;
  case 2: cout<<" XX "<<endl; break;
  case 3: cout<<" XXX "<<endl; break;
  case 4: cout<<" XL "<<endl; break;
  case 5: cout<<" L "<<endl; break;
  case 6: cout<<" LX "<<endl; break;
  case 7: cout<<" LXX "<<endl; break;
  case 8: cout<<" LXXX "<<endl; break;
  case 9: cout<<" XC "<<endl; break; 
 }
 
 switch (unidades)
 {
  case 1: cout<<" I "<<endl; break;
  case 2: cout<<" II "<<endl; break;
  case 3: cout<<" III "<<endl; break;
  case 4: cout<<" IV "<<endl; break;
  case 5: cout<<" V "<<endl; break;
  case 6: cout<<" VI "<<endl; break;
  case 7: cout<<" VII "<<endl; break;
  case 8: cout<<" VIII "<<endl; break;
  case 9: cout<<" IX "<<endl; break;
 }
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Sexta(){
	system("color 70");
	system("cls");
	cout<<" "<<endl;
	cout<<"\t\t\t\t----conversion de numeros enteros a letras----"<<endl;
	int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
    cout<<endl;
cin.ignore();
	system("pause");	
}		

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Septima(){
	system("color 70");
	system("cls");
	cout<<"\t\t\t\t\t----Convertir de numeros condecimales a letras---- "<<endl;
		int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO decimal del 1 al 100\n";
else
 
    {
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
    cout<<endl;
cin.ignore();
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Octava(){
	system("color 70");
	system("cls");
	cout<<" "<<endl;
	cout<<"\t\t\t\t\t----una tabla de multiplicar---- "<<endl;
	   char seguir;
    int i, numero;

        printf( "\n   Introduzca un n%cmero entero: ", 163 );
        scanf( "%d", &numero );

        printf( "\n   La tabla de multiplicar del %d es:\n", numero );

        /* Inicio del anidamiento */

        for ( i = 1 ; i <= 10 ; i++ )
            printf( "\n   %d * %d = %d", i, numero, i * numero );

        /* Fin del anidamiento */

	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Novena(){
	system("color 70");
	system("cls");
	cout<<" "<<endl;
	cout<<"\t\t\t\t\t----Todas las tablas de multiplicacion---- "<<endl;
		int i, j, n, r;
	printf("Ingrese hasta que tabla quiere calcular: \n");
	scanf ("%d",&n);
	printf("Ingrese hasta que numero quiere calcular: \n");
	scanf ("%d",&r);
	
	for (i=1; i<=n; i++)
	{
		printf("------------------------\n\t\tTabla del %d\n",i);
		for (j=1;j<=r;j++)
		printf("%d * %d = %d \n",i,j,i*j);
	}
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Decima(){
	system("color 70");
	system("cls");
	void control();
	control();
}
void control(){
	system("cls");
int z,x,a,b,c,d,e,f,p,g,cent1,cent2;
int uni,dec,uni1,dec1,uni2,dec2,uni3,dec3;
gotoxy(20,2);cout<<("----Crear de forma grafica al multiplicacion manual----");

gotoxy(20,6);cout<<("Ingrese la primera Cantidad: ");
cin>>a;
gotoxy(20,7);cout<<("Ingrese la segunda Cantidad: ");
cin>>b;
int r=a*b;
gotoxy(20,10);cout<<a;
gotoxy(18,12);cout<<("X");gotoxy(20,12);cout<<b;
gotoxy(15,13);cout<<("___________");

uni = a%10; a /= 10;
dec = a%10; a /= 10;
uni1 = b%10; b /= 10;
dec1 = b%10; b /= 10;

c=uni1*uni;
uni2 = c%10; c /= 10;
dec2 = c%10; c /= 10;
cent1= c%10; c /= 10;
	
d=uni1*dec+dec2;
gotoxy(20,15);cout<<d<<uni2;

e=dec1*uni;
uni3 = e%10; e /= 10;
dec3 = e%10; e /= 10;
	
cent2 = e%10; e /= 10;
	
f=dec1*dec+dec3;
gotoxy(19,16);cout<<f<<uni3;
gotoxy(15,17);cout<<("____________");

gotoxy(19,18);cout<<r;

	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Once(){
	system("color 70");
	system("cls");
	cout<<" "<<endl;
	cout<<"\t\t\t\t\t----Conversion de numeros decimales a binarios---- "<<endl;
	int binario[100], i=0, j=0, x;
      printf("ingrese su numero entero positivo: ");
      fflush(stdin);
      scanf("%d",&x);
      for(i=100;i>0;i--)
      {
           binario[i]=x%2;
           x=x/2;
      }
      for(i=1;i<=100;i++)
      {
           if(binario[i]==1)
           {
                for(j=i;j<=100;j++)
                {
                     printf("%d",binario[j]);
                }
                break;
           }
      }
system("pause");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Doce(){
	system("color 70");
	system("cls");
	cout<<"\t\t\t\t\t----Tranformar numero decimal a hexadecimal---- "<<endl;
	int mynum;
	cout << "\n    Entra un numero: ";
	cin >> mynum;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << "\n    En hexadecimal: " << mynum;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout << "\n\n";
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Trece(){
	system("color 70");
	system("cls");
	cout<<"\t\t\t\t\t----Crear figutas Geometricas basicas----- "<<endl;
	int x;
	cout<<"1. circulo. "<<endl;
	cout<<"2. triangulo. "<<endl;
	cout<<"3. cuadrado. "<<endl;
	cin>>x;
	
	switch (x){
	
	case 1:
		cout<<"                 . . . "<<endl;
		cout<<"             . . .   . . ."<<endl;
		cout<<"           . . .       . . ."<<endl;
		cout<<"         . . .          . . ."<<endl;
		cout<<"       . . .              . . ."<<endl;
		cout<<"       . . .              . . . "<<endl;
		cout<<"       . . .              . . . "<<endl;
		cout<<"         . . .          . . ."<<endl;;
	    cout<<"           . . .       . . ."<<endl;
		cout<<"             . . .   . . ."<<endl;
		cout<<"                 . . . "<<endl;
   break;
	case 2:
		cout<<"         ________________________ "<<endl;
		cout<<"       | ........................ |"<<endl;
		cout<<"       | ........................ |  "<<endl;
		cout<<"       | ..                    .. | "<<endl;
		cout<<"       | ..                    .. | "<<endl;
		cout<<"       | ..                    .. | "<<endl;
		cout<<"       | ..                    .. | "<<endl;
		cout<<"       | ..                    .. | "<<endl;
		cout<<"       | ..                    .. | "<<endl;
	    cout<<"       | ..                    .. | "<<endl;
		cout<<"       | ........................ |"<<endl;
		cout<<"       | ........................ |  "<<endl;
		cout<<"       | ________________________ |"<<endl;
	break;
	case 3:
		cout<<"             ..          "<<endl;
		cout<<"            /  .            "<<endl;
		cout<<"           /    .            " <<endl;
		cout<<"          /      .           "<<endl;
		cout<<"         /        .             "<<endl;
		cout<<"        /          .             "<<endl;
		cout<<"       /            .           "<<endl;
		cout<<"      /              .              "<<endl;
		cout<<"     /                .               "<<endl;
	    cout<<"    /                  .              "<<endl;
		cout<<"   /                    .              "<<endl;
		cout<<"  /                      .            "<<endl;
		cout<<" * _______________________*        "<<endl;
		break;
	}
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Catorce(){
	system("color 70");
	system("cls");
	cout<<"\t\t\t\t\t----Mover un punto por toda la pantalla---- "<<endl;
	cout<<"\t\t\t\t\t--------Mover con flechas-------- "<<endl;
	
    int x = 10 , y = 10;
    gotoxy(x,y);
    printf("*");
    while(1)
    {
        Sleep(100);

        if (GetAsyncKeyState(0x25)){
            gotoxy(x,y); printf(" ");

            x--;
            
            gotoxy(x,y); printf("*");

        }

        if (GetAsyncKeyState(0x27)){

            gotoxy(x,y); printf(" ");       
            x++;         
            gotoxy(x,y); printf("*");

        }   
        if (GetAsyncKeyState(0x28)){
       
            gotoxy(x,y); printf(" ");
        
            y++;
           
            gotoxy(x,y); printf("*");

        }
 
        if (GetAsyncKeyState(0x26)){
           
            gotoxy(x,y); printf(" ");
            y--;
            gotoxy(x,y); printf("*");

        }
    }    
}
	
	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Quince(){
	system("color 70");
	system("cls");
	cout<<"\t\t\t\t\t----CAJERO AUTOMATICO---- "<<endl;
	cout<<"\t\t\t\t\t---saldo inicial de 1000Q--- "<<endl;
		int saldo_inicial = 1000,opc;
	float extra,saldo = 0,retiro; 
	cout<<" "<<endl;
	cout<<"\t\t\t\tBienvenido a su cajero automatico"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; 
	cin>>opc;
	
	switch(opc){
		case 1: cout<<"\nCuanto dinero desea ingresar en cuenta: "; 
				cin>>extra;
				
				saldo = saldo_inicial + extra;
				cout<<"\nDinero en cuenta: "<<saldo; break;
		case 2: cout<<"\nCuanto dinero desea retirar: "; 
				cin>>retiro;
				
				if(retiro > saldo_inicial){
					cout<<"No cuenta con esa cantidad";
				}
				else{
					saldo = saldo_inicial - retiro;
					cout<<"\nDinero en cuenta: "<<saldo; break;
				}
		case 3: break;
		dafault: cout<<"Se equivoco de opcion de menu";break;
	}
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Dieciseis(){
	system("color 70");
	system("cls");
	cout<<"\t\t\t\t\t----Calcular la hipotenusa---- "<<endl;
	float c1,c2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
	
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Diecisiete(){
	system("color 70");
	system("cls");
	cout<<"\t\t\t\t\t----calcula cuantos dias has vivido---- "<<endl;
	int anio, mes, dia, anio2, mes2, dia2, cont=0, i, j;  //Declaración de Variables
          printf("\nIntroduce el año en que naciste: ");  //Lo que aparece en pantalla
          scanf("%i", &anio);  //Guarda lo que has escrito
          printf("\nIntroduce el mes en que naciste: ");
          scanf("%i", &mes);
          printf("\nIntroduce el dia en que naciste: ");
          scanf("%i", &dia);
          printf("\nIntroduce el año actual: ");
          scanf("%i", &anio2);
          printf("\nIntroduce el mes actual: ");
          scanf("%i", &mes2);
          printf("\nIntroduce el dia actual: ");
          scanf("%i", &dia2);

          //Años Vividos
          for (i=anio; i<=anio2-2; i++) {  //Bucle for
              if (i%4==0) {  //if
                 cont=cont+366;
              }
              else {
                 cont=cont+365; 
              }
          }

          //Primeros Meses Vividos
          for (i=mes+1; i<=12; i++) {
              switch(i) {
                 case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                      cont=cont+31;
                 break;
                 case 4: case 6: case 9: case 11:
                      cont=cont+30;
                 break;
                 case 2:
                      if (anio%4==0) {
                         cont=cont+29;
                      }
                      else {
                         cont=cont+28;
                         }
                 break;
                 }
          }
          //Últimos Meses Vividos
          for (j=1; j<=mes2-1; j++) {
              switch(j) {
                 case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                      cont=cont+31;
                 break;
                 case 4: case 6: case 9: case 11:
                      cont=cont+30;
                 break;
                 case 2:
                      if (anio%4==0) {
                         cont=cont+29;
                      }
                      else {
                         cont=cont+28;
                         }
                 break;
                 }
          }

          //Primeros Días Vividos
          switch (mes) {  //Opciones
              case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                   cont=cont+(31-dia);
              break;
              case 4: case 6: case 9: case 11:
                   cont=cont+(30-dia);
              break;
              case 2:
                   if (anio%4==0) {
                      cont=cont+(29-dia);
                   }
                   else {
                      cont=cont+(28-dia);
                   }
              break;
          }
          //Últimos Días Vividos
          switch (mes2) {
              default:
                   cont=cont+dia2;
              break;
          }
          printf ("\n\nHas vivido: %i dias", cont);     
          getch(); 
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Dieciocho(){
	system("color 70");
	system("cls");
	cout<<"\t\t\t\t\t----Signo Zodiacal---- "<<endl;
	int mes, dia;
      
      cout<<"(1)Enero  \t(2)Febrero  \t(3)Marzo  \t(4)Abril"<<endl;
      cout<<"(5)Mayo  \t(6)Junio     \t(7)Julio  \t(8)Agosto"<<endl;
      cout<<"(9)Septiembre  \t(10)Octubre  \t(11)Noviembre  \t(12)Diciembre"<<endl<<endl;
      cout<<"Ingrese la fecha de su cumplea"<<char(164)<<"o (dia y mes)"<<endl;
      cout<<"ejemplo (26 4)"<<endl;
      cin>>dia>>mes;
      switch(mes)
      {
 
            case 1:
                switch(dia)
                {
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"acuario"<<endl;break;
                default:cout<<"capricornio"<<endl;}break;
            case 2:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"piscis"<<endl;break;
                default:cout<<"acuario"<<endl;break;}break;
            case 3:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"aries"<<endl;break;
                default:cout<<"piscis"<<endl;break;}break;
            case 4:
                switch(dia){
                   case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"tauro"<<endl;break;
                   default:cout<<"aries"<<endl;break;}break;
            case 5:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"geminis"<<endl;break;
                default:cout<<"tauro"<<endl;break;}break;
 
            case 6:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"cancer"<<endl;break;
                default:cout<<"geminis"<<endl;break;}break;
            case 7:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"leo"<<endl;break;
                default:cout<<"cancer"<<endl;break;}break;
            case 8:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"virgo"<<endl;break;
                default:cout<<"leo"<<endl;break;}break;
            case 9:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"libra"<<endl;break;
                default:cout<<"virgo"<<endl;break;}break;
            case 10:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"escorpio"<<endl;break;
                default:cout<<"libra"<<endl;break;}break;
            case 11:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"sagitario"<<endl;break;
                default:cout<<"escorpio"<<endl;break;}break;
            case 12:
                switch(dia){
                case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:case 30:
                cout<<"capricornio"<<endl;break;
                default:cout<<"sagitario"<<endl;break;}break;
 
      }
 
cin.ignore();
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Diecinueve(){
	system("color 70");
	system("cls");
	cout<<"\t\t\t\t\t----Calcular el area de un triangulo---- "<<endl;
	float base;

float altura;

float resultado;

using namespace std;

cout << "Ingrese la base del triangulo: ";

cin >> base;
cout << "Ingrese la altura del triangulo: ";
cin >> altura;
resultado=(base*altura)/2; // Formula matematica para calcular el area del triangulo.
cout << "El area de su triangulo es: " << resultado << endl;

cin.ignore();

	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Veinte(){
	system("color 70");
	system("cls");
	cout<<"\t\t\t\t\t---- Distancia de Planetas desde el sol---- "<<endl;
	int numero;
	printf( "\n   Listado de planetas:" );  
    printf( "\n   1. Mercurio" );
 printf( "\n   2. venus" );  
 printf( "\n   3. tierra" );  
    printf( "\n   4. marte" );  
 printf( "\n   5. jupiter" );  
 printf( "\n   6. saturno" );  
 printf( "\n   7. urano" );  
 printf( "\n   8. neptuno" );  
 printf( "\n   9. pluton" );
 printf (" \n ingrese el planeta a donde quiere llegar: ");
 scanf ("%d", &numero) ;
  switch (numero)
   {
   case 1: printf ("\n  mercurio esta a 59 millones de kilometros del sol.");
   break;
   case 2: printf ("\n venus esta a 108 millones de kilometrsod del sol.");
   break;
   case 3: printf ("\n tierra esta a 150 millones de kilometrsod del sol.");
   break;
   case 4: printf ("\n marte esta a 228 millones de kilometrsod del sol.");
   break;
   case 5: printf ("\n jupiter esta a 750 millones de kilometrsod del sol.");
   break;
   case 6: printf ("\n saturno esta a 1431 millones de kilometrsod del sol.");
   break;
   case 7: printf ("\n urano esta a 2877 millones de kilometrsod del sol.");
   break;
   case 8: printf ("\n neptuno esta a 4509 millones de kilometrsod del sol.");
   break;
   case 9: printf ("\n pluton esta a 5916 millones de kilometrsod del sol.");
   break;  
   default : printf ("\n error %d no esta asociado a ningun planeta. ");
}
	system("pause");	
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main (){
	int op;
	do{
		system ("cls");
		op = menu();
		switch(op){
			 case 1: 
			Beep(1500,30);
			Beep(1500,30);
			Primera();
			break;
			 case 2:
			Beep(1500,30);
			Beep(1500,30);
			Segunda();			
	    	break;
	    	 case 3:
	    	Beep(1500,30);
			Beep(1500,30);	
		    Tercera();
		    break;
		     case 4:
		    Beep(1500,30);
			Beep(1500,30);
	     	Cuarta();
	    	break;	
		     case 5:
		    Beep(1500,30);
			Beep(1500,30);	
		    Quinta();
		    break;		
			 case 6: 
			Beep(1500,30);
			Beep(1500,30);
			Sexta();
			break;
			 case 7:
			Beep(1500,30);
			Beep(1500,30);
			Septima();			
	    	break;
	    	 case 8:
	    	Beep(1500,30);
			Beep(1500,30);	
		    Octava();
		    break;
		     case 9:
		    Beep(1500,30);
			Beep(1500,30);
	     	Novena();
	    	break;	
		     case 10:
		    Beep(1500,30);
			Beep(1500,30);	
		    Decima();
		    break;	
			 case 11: 
			Beep(1500,30);
			Beep(1500,30);
			Once();
			break;
			 case 12:
			Beep(1500,30);
			Beep(1500,30);
			Doce();			
	    	break;
	    	 case 13:
	    	Beep(1500,30);
			Beep(1500,30);	
		    Trece();
		    break;
		     case 14:
		    Beep(1500,30);
			Beep(1500,30);
	        Catorce();
	    	break;	
		     case 15:
		    Beep(1500,30);
			Beep(1500,30);	
		    Quince();
		    break;	
			 case 16:
		    Beep(1500,30);
			Beep(1500,30);	
		    Dieciseis();
		    break;	
	         case 17:
		    Beep(1500,30);
			Beep(1500,30);	
		    Diecisiete();
		    break;
		     case 18:
		    Beep(1500,30);
			Beep(1500,30);	
		    Dieciocho();
		    break;
	     	 case 19:
		    Beep(1500,30);
			Beep(1500,30);	
		    Diecinueve();
		    break;
			 case 20:
		    Beep(1500,30);
			Beep(1500,30);	
		    Veinte();
		    break;	
		}
	}while (op != 21);
	
	return 0;
} 
