#include<iostream>
using namespace std;
int *ptr, *ptrA, *ptrB;

int *fibonacci(int *a, int *b){
    int *c=(int*)malloc(sizeof(int));
    *c=(*a)+(*b);
    *ptrA=*b;
    *ptrB=*c;
    return c;
}

int main(){
    int extension=0;
    int a=0;
    int b=1;
    char rpt;

    do{
        system("cls");
        ptrA=&a;
        ptrB=&b;

        cout<<"Ingresa la extension: ";
        cin>>extension;
        for(int i=0;i<extension;i++){
            if(i==0){
                cout<<"0, ";
            } else if(i==1){
                cout<<"1, ";
            } else {
                cout<<*fibonacci(ptrA, ptrB)<<", ";
            }
        }
        cout<<"\nDesea realizar otra serie (S/N): ";
        cin>>rpt;
    }while((rpt=='s')||(rpt=='S'));
}
