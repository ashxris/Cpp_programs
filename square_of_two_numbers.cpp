#include <iostream>
using namespace std;
int square(int a)
    {   int b;
        b= a*a;
        cout<<"Sqaure of A = " << b;
        return 0;
    }
int main() {
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    
    int b = square(a);
    return 0;
}