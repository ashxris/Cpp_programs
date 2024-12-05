#include <iostream>
using namespace std;

int nSum(int n){
    if (n==0){
        return 0;
    }
    int res = n+nSum(n-1);
    return res;

}
int main(){
    int n=5;
    int sum=nSum(n);
    return 0;
}