#include<iostream>
using namespace std;

class Factorial{

private : 
    int a;

public : 
    
    void setValue(int n){
        if(a<0)
            a=-a;
        a=n;
    }

    int fact(){
       int fact=1;

       while(a){
        fact = fact*a--;
       } 
       return fact;
    }

};

int main(){
    Factorial f1;
    int n;
    cout<<"Enter a number";
    cin>>n;

    f1.setValue(n);
    cout<<"Factorial of "<<n<<" = "<<f1.fact();

    return 0; 
}