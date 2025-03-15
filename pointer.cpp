#include<iostream>
using namespace std;

int main(){
    int var = 30;
    int *ip;

    ip = &var;

    cout << "Value of var variable: ";
    cout << var << endl;

    cout << "address stored in ip address: ";
    cout << ip <<endl;

    return 0;
}