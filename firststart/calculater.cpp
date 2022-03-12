#include<iostream>
using namespace std;
int main(){
    int x, y,ope,result;
    cout<<"enter the first no => \n";
    cin>>x;
    cout<<"enter the second no => \n";
    cin>>y;
    cout<<"chose the operation\n 1.+\n2.-\n3./\n4.*\n";
    cin>>ope;
    if (ope==1)
    {
        result=x+y;
        cout<<"sum is "<<result;
    }else if (ope==2)
    {
        result=x-y;
        cout<<"subtraction is "<<result;
    }else if (ope==3)
    {
         result=x/y;
        cout<<"divsion is "<<result;
    }else if (ope==4)
    {
         result=x*y;
        cout<<"multiplication is "<<result;
    }
    else{
        cout<<"chose the write operation by thier respactive no.";
    }
    return 0;
    
    
    
}