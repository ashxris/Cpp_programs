#include<iostream>
using namespace std;
int main(){
    int a;
    string ctzen;
    cout<<"Enter your age"<<endl;
    cin>>a;
    cout<<"Enter your citizen"<<endl;
    cin>>ctzen;
    if(a>=18 && ctzen=="ind"){
        cout<<"you are eligible to vote"<<endl;
    }
    else{
        cout<<"Not elegible"<<endl;
    }
}