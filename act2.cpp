#include<iostream>
using namespace std;

int *ptr1, *ptr2;
int * suma(int *, int *);

int n1=0, n2=0;

int * suma(int *n1, int *n2){
    int *r=(int *) malloc(sizeof(int));

    *r=(*n1) + (*n2);

    return r;
}

int * resta(int *n1, int *n2){
    int *r=(int *) malloc(sizeof(int));

    *r=(*n1) - (*n2);

    return r;
}

int * multiplicacion(int *n1, int *n2){
    int *r=(int *) malloc(sizeof(int));

    *r=(*n1) * (*n2);

    return r;
}

int * division(int *n1, int *n2){
    int *r=(int *) malloc(sizeof(int));

    *r=(*n1) / (*n2);

    return r;
}

int main(){
    system("cls");
    int opc;

    cout<<"Ingrese la operacion que desee realizar \n1) suma \n2)resta \n3)multiplicacion \n4)division\n";
    cin>>opc;
    cout<<"Ingrese primer numero"<<endl;
    cin>>n1;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>n2;

    ptr1=&n1;
    ptr2=&n2;
    switch(opc){
        case 1: cout<<"La suma es: "<<*suma(ptr1,ptr2);
        break;
        case 2: cout<<"La resta es: "<<*resta(ptr1,ptr2);
        break;
        case 3: cout<<"La multiplicacion es: "<<*multiplicacion(ptr1,ptr2);
        break;
        case 4: cout<<"La division es: "<<*division(ptr1,ptr2);
        break;
        default: cout<<"opcion invalida"<<endl;
    }

    return 0;
}


