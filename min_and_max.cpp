#include <iostream>
using namespace std;
int max(int a,int b)
    {
        if(a>b)
        cout<<"A is maximum & B is minimum"<<endl;
        else
        cout<<"B is maximum & A is minimum";
        return 0;
    }
int main() {
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    
    int m = max(a,b);
    return 0;
}
