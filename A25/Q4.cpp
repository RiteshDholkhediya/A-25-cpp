#include<iostream>
using namespace std;

class LargestNumber{
private : 
    int a,b,c;
public : 
    void setValues(int x, int y, int z){
        a=x;
        b=y;
        c=z;
    }

    int large(){
        return a>b?(a>c?a:c):(b>c?b:c);
    }


};

int main(){
    LargestNumber l1;
    int a,b,c;
    cout<<"Enter three numbers ";
    cin>>a>>b>>c;

    l1.setValues(a,b,c);
    cout<<"\nLarge number is "<<l1.large();

    return 0;
}