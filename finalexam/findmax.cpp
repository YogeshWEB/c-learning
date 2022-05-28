#include<iostream>
using namespace std;
void inst(int a,int b){
    
    arr[b-1]=a;
}

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<" array is :\n";
    inst(4,3);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max>arr[i])
        {
           max=max;
        }else{
            max=arr[i];
        }
        
    }
    cout<<"max num is :\n"<<max;
    return 0;
}