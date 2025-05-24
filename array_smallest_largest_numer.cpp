#include<iostream>
using namespace std;

int main(){
    int arr[]={12,13,3,12,5,9};
    int n= 6;

    int smallest = arr[0];
    int largest = arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]<smallest){
            smallest = arr[i];
        }

        if (arr[i]>largest){
            largest = arr[i];
        }
    }

    cout<<"Smallest is "<<smallest<<endl;
    cout<<"largest is "<<largest<<endl;
    return 0;
    
}