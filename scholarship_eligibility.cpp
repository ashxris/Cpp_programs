#include<iostream>
using namespace std;

int main(){
    int per;
    int att;
    int income;

    cout<<"Enter your marks percentage: ";
    cin>>per;

    cout<<"Enter your attendance: ";
    cin>>att;

    cout<<"Enter your income in rupees: ";
    cin>>income;

    if(per>=85 && att>=75 && income <=200000){
        cout<<"You are eligible";
        cout<<"\n";
    }else{
        cout<<"You are not eligible";
    }

    return 0;
}