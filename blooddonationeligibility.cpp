#include<iostream>
using namespace std;

int main(){
    int age;
    int weight;
    int fever;
    int bp_issue;

    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Enter your weight in kgs: ";
    cin>>weight;

    cout<<"Fever status: 1 = yes, 0 = no. ";
    cin>>fever;

    cout<<"BP issue? 1 = yes, 0 = no. ";
    cin>>bp_issue;

    if(age>=18 && weight>=50 && fever==0 && bp_issue==0){
        cout<<"You are eligible";
        cout<<"\n";
    }else{
        cout<<"You are not eligible";
        cout<<"\n";
    }

    return 0;
}