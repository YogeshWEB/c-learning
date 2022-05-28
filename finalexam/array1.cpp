#include<iostream>
using namespace std;
 



 int main(){
     int n;
     cin>>n;
     int array[n];
     cout<<"enter the values in array: "<<endl;
     for (int i = 0; i < n; i++)
     {
         cin>>array[i];
     }
     cout<<" array is-> \n";
     for (int i = 0; i < n; i++)
     {
         cout<<array[i]<<endl;
     }
     return 0;
 }
 