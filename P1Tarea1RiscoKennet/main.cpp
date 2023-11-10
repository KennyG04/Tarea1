#include <iostream>
#include <cmath>
using namespace std;
void caratula();
void menu();
int main(){
    caratula();
    menu();
    return 0;
}
void caratula(){
    string nom,uni,fecha,prof,tema;
    nom="Kennet Risco";
    uni="Universidad de las fuerzas armadas ESPE";
    fecha="7 de junio de 2023";
    prof="Ing. Veronica Martinez";
    tema="Tarea 1";
    cout<<"============================================"<<endl;
    cout<<uni<<endl;
    cout<<"============================================"<<endl;
    cout<<tema<<endl;
    cout<<"============================================"<<endl;
    cout<<"Nombre: "<<nom<<endl;
    cout<<"Docente: "<<prof<<endl;
    cout<<""<<endl;
}
void Funcion1();
void Funcion2();
void Funcion3();
void menu(){
    int menuop;
    do{
    cout<<"Ingrese el tipo de contaminante a medir"<<endl;;
    cout<<"1. Monoxido de carbono(CO)"<<endl;
    cout<<"2. Ozono (O3)"<<endl;
    cout<<"3. Dioxido de azufre (SO2)"<<endl;
    cout<<"4. Salir"<<endl;
    cin>>menuop;
    while (menuop<1||menuop>4){
        cout<<"Ingrese una opcion valida entre 1 y 4"<<endl;
        cin>>menuop;
    }
    switch (menuop){
        case 1:
            Funcion1();
            break;
        case 2:
            Funcion2();
            break;
        case 3:
            Funcion3();
            break;
        case 4:
            cout<<"Finalizando sesion..."<<endl;
        default:
            cout<<""<<endl;
    }
    }while (menuop!=4);
}
void Funcion1() {
	int repetirr1;
	float pbl1,limite1,resultado1,cont1, mmhg1,aux1,sumatoria1,temp1;
	do {
    aux1=0;
    cout<<"==========Corregir la concentracion observada de una serie de datos para CO=========="<<endl;
    cout<<""<<endl;
    cout<<"============================================"<<endl;
    cout<<"Concentracion observada de CO"<<endl;
    cout<<"============================================"<<endl;
    cout<<"Ingrese la cantidad de datos hasta 24 horas para la concentracion observada"<<endl;
    cin>>limite1;
    while (limite1<=1||limite1>24){
        cout<<"Ingrese una cantidad de datos valida"<<endl;
        cin>>limite1;
    }
    for(cont1=1;cont1<=limite1;cont1++){
        cout<<"Ingrese el valor para la concentracion observada "<<cont1<<endl;
        cin>>mmhg1;
        aux1=aux1+mmhg1;
    }
    sumatoria1=aux1/limite1;
        cout<<"============================================"<<endl;
        cout<<"Ingrese la presion atmosferica local en mmHg"<<endl;
        cin>>pbl1;
        cout<<"============================================"<<endl;
        cout<<"Ingrese  la temperatura promedio en grados centigrados"<<endl;
        cin>>temp1;
        cout<<"============================================"<<endl;
        while (temp1>=150){
            cout<<"La temperatura es demasiado alta, vuelve a ingresarla"<<endl;
            cin>>temp1;
        }
        resultado1=sumatoria1*(760/pbl1)*((273+temp1)/298);
        cout<<"============================================"<<endl;
        cout<<"La concetracion corregida de CO es de: "<<resultado1<<" ug/m^3"<<endl;
        if (resultado1<=15000){
            cout<<"El nivel es de alerta"<<endl;
        }else{
            if(resultado1>=15001&&resultado1<=30000){
                cout<<"El nivel es de alarma"<<endl;
            }else{
                if(resultado1>=30001&&resultado1<=40000){
                    cout<<"El nivel es de emergencia"<<endl;
                }
            }
        }
        cout<<"============================================"<<endl;
    cout<<"Para realizar otro calculo escriba (1),para volver escriba (0)"<<endl;
    cin>>repetirr1;
		while (repetirr1<0 || repetirr1>1) {
			cout << "ingresa un valor correcto" << endl;
			cin >> repetirr1;
		}
	} while (repetirr1!=0);
}

void Funcion2(){
    int repetirr2;
	float pbl2,limite2,resultado2,cont2, mmhg2,aux2,sumatoria2,temp2;
	do {
    aux2=0;
    cout<<"==========Corregir la concentracion observada de una serie de datos para O3=========="<<endl;
    cout<<""<<endl;
    cout<<"============================================"<<endl;
    cout<<"Concentracion observada de O3"<<endl;
    cout<<"============================================"<<endl;
    cout<<"Ingrese la cantidad de datos hasta 24 horas para la concentracion observada"<<endl;
    cin>>limite2;
    while (limite2<=1||limite2>24){
        cout<<"Ingrese una cantidad de datos valida"<<endl;
        cin>>limite2;
    }
    for(cont2=1;cont2<=limite2;cont2++){
        cout<<"Ingrese el valor para la concentracion observada "<<cont2<<endl;
        cin>>mmhg2;
        aux2=aux2+mmhg2;
    }
    sumatoria2=aux2/limite2;
        cout<<"============================================"<<endl;
        cout<<"Ingrese la presion atmosferica local en mmHg"<<endl;
        cin>>pbl2;
        cout<<"============================================"<<endl;
        cout<<"Ingrese  la temperatura promedio en grados centigrados"<<endl;
        cin>>temp2;
        cout<<"============================================"<<endl;
        while (temp2>=150){
            cout<<"La temperatura es demasiado alta, vuelve a ingresarla"<<endl;
            cin>>temp2;
        }
        resultado2=sumatoria2*(760/pbl2)*((273+temp2)/298);
        cout<<"============================================"<<endl;
        cout<<"La concetracion corregida de O3 es de: "<<resultado2<<" ug/m^3"<<endl;
        if (resultado2<=200){
            cout<<"El nivel es de alerta"<<endl;
        }else{
            if(resultado2>=201&&resultado2<=400){
                cout<<"El nivel es de alarma"<<endl;
            }else{
                if(resultado2>=401&&resultado2<=600){
                    cout<<"El nivel es de emergencia"<<endl;
                }
            }
        }
        cout<<"============================================"<<endl;
    cout<<"Para realizar otro calculo escriba (1),para volver escriba (0)"<<endl;
    cin>>repetirr2;
		while (repetirr2<0 || repetirr2>1) {
			cout << "ingresa un valor correcto" << endl;
			cin >> repetirr2;
		}
	} while (repetirr2!=0);
}
void Funcion3(){
    int repetirr3;
	float pbl3,limite3,resultado3,cont3, mmhg3,aux3,sumatoria3,temp3;
	do {
    aux3=0;
    cout<<"==========Corregir la concentracion observada de una serie de datos para SO2=========="<<endl;
    cout<<""<<endl;
    cout<<"============================================"<<endl;
    cout<<"Concentracion observada de SO2"<<endl;
    cout<<"============================================"<<endl;
    cout<<"Ingrese la cantidad de datos hasta 24 horas para la concentracion observada"<<endl;
    cin>>limite3;
    while (limite3<=1||limite3>24){
        cout<<"Ingrese una cantidad de datos valida"<<endl;
        cin>>limite3;
    }
    for(cont3=1;cont3<=limite3;cont3++){
        cout<<"Ingrese el valor para la concentracion observada "<<cont3<<endl;
        cin>>mmhg3;
        aux3=aux3+mmhg3;
    }
    sumatoria3=aux3/limite3;
        cout<<"============================================"<<endl;
        cout<<"Ingrese la presion atmosferica local en mmHg"<<endl;
        cin>>pbl3;
        cout<<"============================================"<<endl;
        cout<<"Ingrese  la temperatura promedio en grados centigrados"<<endl;
        cin>>temp3;
        cout<<"============================================"<<endl;
        while (temp3>=150){
            cout<<"La temperatura es demasiado alta, vuelve a ingresarla"<<endl;
            cin>>temp3;
        }
        resultado3=sumatoria3*(760/pbl3)*((273+temp3)/298);
        cout<<"============================================"<<endl;
        cout<<"La concetracion corregida de O3 es de: "<<resultado3<<" ug/m^3"<<endl;
        if (resultado3<=200){
            cout<<"El nivel es de alerta"<<endl;
        }else{
            if(resultado3>=201&&resultado3<=1000){
                cout<<"El nivel es de alarma"<<endl;
            }else{
                if(resultado3>=1001&&resultado3<=1800){
                    cout<<"El nivel es de emergencia"<<endl;
                }
            }
        }
        cout<<"============================================"<<endl;
    cout<<"Para realizar otro calculo escriba (1),para volver escriba (0)"<<endl;
    cin>>repetirr3;
		while (repetirr3<0 || repetirr3>1) {
			cout << "ingresa un valor correcto" << endl;
			cin >> repetirr3;
		}
	} while (repetirr3!=0);
}
