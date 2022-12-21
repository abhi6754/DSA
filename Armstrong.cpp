#include <iostream>
using namespace std;

int main() {
    int a, remainder, temp, result=0;
    cout<<"Enter the number you want to check";
    cin>>a;
    temp=a;
    
    while (temp!=0){
        remainder=temp%10;
        result+=remainder*remainder*remainder;
        temp=temp/10;
    }
    
    if(result==a){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an Armstrong number";
    }
}
