#include <iostream>
using namespace std;
int main() {
    int n,sum=0,i;
    cout<<"Enter the number\n ";
    cin>>n;
    for(i=0;i<n;i++){
        sum=sum+i;
    }
    cout<<"sum is "<<sum<<"\n";
    
    for(i=0;i<n;i++){
        if(i%2==0){
            cout<<i<< " is even number\n";
        }
        else {
            cout<<i <<" is odd number\n";
        }
    }
}
