#include<iostream>
using namespace std;

int main(){
    int a= 10;
    int* aptr=&a;
    cout<<aptr<<endl;//addres of a store in aptr pointer
    cout<<&a<<endl;
    cout<<*aptr<<endl;//value of a with the pointer
    *aptr=20;
    cout<<*aptr<<endl;
}