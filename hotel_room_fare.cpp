#include<iostream>
using namespace std;

int main(){
    int days;
    int discount=0;
    int USUAL_COST;
    int DISCOUNTED_COST;

    cout<<"For how many days are you staying? ";
    cin>>days;

    if(days>5 && days<10){
        cout<<"congratulations! you are eligible to have a discount of 20%\n";
        discount = 20;
        cout<<"So you total fare is: ";
        USUAL_COST = 2000*days;
        DISCOUNTED_COST = USUAL_COST - 0.2*USUAL_COST;
        cout<<DISCOUNTED_COST;

    }
    else if(days>=10){
        cout<<"congratulations! you are eligible to have a discount of 50%\n";
        discount = 50;
        cout<<"So you total fare is: ";
        USUAL_COST = 2000*days;
        DISCOUNTED_COST = USUAL_COST - 0.5*USUAL_COST;
        cout<<DISCOUNTED_COST;
    }
    else{
        cout<<"SORRY! You are not eligible to have a discount.";
    }

    return 0;
}