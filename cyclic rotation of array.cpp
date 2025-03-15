#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,6,8,1};
    int temp,i=0, j=4;

    for(i=1;i<5;i++){
        temp=arr[i];
        arr[i]=arr[j];

        cout<<"%d"<<arr[i]<<endl;
        
        
    }
}