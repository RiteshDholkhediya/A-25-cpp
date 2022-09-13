#include<iostream>
using namespace std;

class Greatest{

public: 
    int LargeNum(int a, int b, int c){
        return a>b?(a>c?a:c):(b>c?b:c);
    }
};

int main(){
    int a,b,c;
    Greatest g1;
    cout<<"Enter three numbers ";
    cin>>a>>b>>c;

    cout<<"Largest amoung three numbers is "<<g1.LargeNum(a,b,c);
    return 0;
}