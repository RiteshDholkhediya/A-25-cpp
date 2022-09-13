#include<iostream>
using namespace std;

class ReverseNumber{

public:
    int reverse(int n){
        int r=0;
        while(n){
            r = r*10 + n%10;
            n=n/10; 
        }
        
        return r;
    }

};

int main(){
    ReverseNumber r1;
    int n;
    cout<<"Enter a number ";
    cin>>n;

    cout<<"Reverse of "<<n<<" = "<<r1.reverse(n);
    return 0; 
}