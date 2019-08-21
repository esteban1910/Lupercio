#include<iostream>
using namespace std;

int *p1, *p2;
int n1, n2;
int * menu(int *,int *, int);

int main(){
    int continuar;
    int opc;

    do{
        system("cls");
        cout<<"Ingrese la operacion que desee realizar: \n1)Suma \n2)Resta \n3)Multiplicacion \n4)Division\n";
        cin>>opc;

        cout<<"\nIngresa el primer valor: ";
        cin>>n1;
        cout<<"Ingresa el segundo valor: ";
        cin>>n2;

        p1=&n1;
        p2=&n2;

        cout<<*menu(p1, p2, opc);
        cout<<"\n\nContinuar[1] Salir[0]: ";
        cin>>continuar;

    }while(continuar!=0);

}

int * menu(int *num1, int *num2, int op){
    int *r = (int*) malloc(sizeof(int));

    switch(op){
        case 1:
            cout<<"El resultado de la suma es: ";
            *r = (*num1) + (*num2);
            break;
        case 2:
            cout<<"El resultado de la resta es: ";
            *r = (*num1) - (*num2);
            break;
        case 3:
            cout<<"El resultado de la multiplicacion es: ";
            *r = (*num1) * (*num2);
            break;
        case 4:
            cout<<"El resultado de la division es: ";
            *r = (*num1) / (*num2);
            break;
    }
    return r;
}
