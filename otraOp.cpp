#include<iostream>
using namespace std;
int * Opciones(int*, int*, int);

int main(){
    int *p1, *p2;
    int n1, n2, opc, continuar;

    do{
        system("cls");
        cout<<"Ingrese la operacion que desee realizar:";
        cout<<"\n1)Suma \n2)Resta \n3)Multiplicacion \n4)Division\n";
        cin>>opc;

        cout<<"\nIngresa el primer valor: ";
        cin>>n1;
        cout<<"Ingresa el segundo valor: ";
        cin>>n2;

        p1=&n1;
        p2=&n2;

        cout<<"El resultado es: "<<*Opciones(p1,p2,opc);
        cout<<"\n\nContinuar[1] Salir[0]: ";
        cin>>continuar;
    }while(continuar!=0);

}

int * Opciones(int *pos1, int *pos2,int opc){
    int *r =(int*) malloc(sizeof(int));

    switch(opc){
        case 1:
            *r=(*pos1) + (*pos2);
            break;
        case 2:
            *r=(*pos1) - (*pos2);
            break;
        case 3:
            *r=(*pos1) * (*pos2);
            break;
        case 4:
            *r=(*pos1) / (*pos2);
            break;
    }

    return r;
}
