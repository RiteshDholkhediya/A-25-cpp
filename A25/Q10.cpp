#include<iostream>
using namespace std;

class Area{

public :
    int square(int n){
        return n*n;
    }

    int rectangle(int l, int b){
        return l*b;
    }

    float circle(int r){
        return 3.14*r*r;
    }
};


int main(){
    int n,r,l,b;
    Area a1;
    cout<<"\nSquare is "<<a1.square(4);
    cout<<"\nArea of rectangle is "<<a1.rectangle(2,3);
    cout<<"\nArea of circle is "<<a1.circle(3);


    return 0;
}