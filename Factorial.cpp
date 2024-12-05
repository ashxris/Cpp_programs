#include <iostream>
using namespace std;
int nsum(int n){
    int sfact = 1;
    int i;
    if(n==0)
    {
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        sfact *= i;
    }
    return sfact;
}
int main() {
  int i;
  int n;
  cout<<"enter number : "<<endl;
  cin>>n;
  int sum= nsum(n);
  cout<<"Factorial = "<<sum;
    return 0;
}