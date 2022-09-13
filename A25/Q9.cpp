#include<iostream>
using namespace std;

class Circle{

public : 
    float area(int r){
        return 3.14*r*r ;
    }
};

int main(){
    Circle c1;
    int r;

    cout<<"Enter radius of the circle ";
    cin>>r;
    cout<<"Area of the circle is "<<c1.area(r); 
    return 0;
}

