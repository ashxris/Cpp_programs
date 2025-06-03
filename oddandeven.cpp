#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"enter a number: ";
    cin>>num;
    
    if(num%2==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }

    cout<<"\n";

    if(num>0){
        cout<<"positive";
    }
    else if(num<0){
        cout<<"negative";
    }else{
        cout<<"ZERO";
    }

    return 0;
}