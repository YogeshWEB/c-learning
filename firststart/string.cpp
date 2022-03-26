#include<iostream>
#include <string>
using namespace std;
int main(){
    cout<<"FORM\n";
    string first_name ,second_name;
    cout<<"Enter the first name:\n";
    cin>>first_name;
    cout<<"Enter the last name:\n";
    cin>>second_name;
    string full_name;
    // full_name=first_name.append(second_name);
    full_name=first_name+" "+second_name;
    cout<<"Your full name is "<<full_name<<endl;
    cout<<"Your full name have "<<full_name.length()-1<<" "<<"letters";
    return 0;
}