#include<iostream>
using namespace std;

class Rectangle{

public : 
    int area(int l, int b){
        return l*b;
    }
};

int main(){
    Rectangle r1;
    int l,b;

    cout<<"Enter length and breadth of rectangle ";
    cin>>l>>b;
    cout<<"Area of the rectangle is "<<r1.area(l,b); 
    return 0;
}

