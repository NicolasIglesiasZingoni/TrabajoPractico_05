#include <iostream>
#include <stdlib.h>


using namespace std;

double GetNumeroPositivo(){
    double numero;
	while(true){
        cin>>numero;
        if(numero>0){
            return numero;
        }else{
            system("cls");
            cout<<"El numero no es valido, ingrese un numero positivo mayor que 0: "<<endl;
        }
	}
}

double GetPerimetro(double h,double b){
	return h*b;
}

int main(){

    double h = 0;
    double b = 0;

    cout<<"Ingrese la altura del rectangulo"<<endl;
    h = GetNumeroPositivo();
    system("cls");
    cout<<"Ingrese la base del rectangulo"<<endl;
    b = GetNumeroPositivo();

    cout<<"El perimetro del rectangulo es: "<<GetPerimetro(h,b)<<endl;
    system("pause");
    return 0;
}

