#include<iostream>
using namespace std;

int main(){
    int arr[]={7,6,9,4,2};
    int i,s,e;

    s=0;
    e=4;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;

    }
    for(i=0;i<5;i++){
        cout<<arr[i];
    }
    
return 0;

}
