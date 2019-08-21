#include<iostream>
#include<cstdlib>
using namespace std;
int * potencia(int * valor, int pot){
    int *res = (int*)malloc(sizeof(int));
    *res=*valor;
    for(int i=1;i<pot;i++){
        *res=(*res)*(*valor);
    }
    return res;
}

int numero=0;
int pot=0;
int *ptr;
int main(int argc,char** argv){
    system("cls");
    cout<<"Ingrese numero: "<<endl;
    cin>>numero;
    cout<<"Ingrese potencia: "<<endl;
    cin>>pot;
    ptr=&numero;
    cout<<"El resultado es: "<<*potencia(ptr, pot)<<endl;
    system("pause>>cls");
    return 0;
}
