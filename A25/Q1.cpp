#include<iostream>
using namespace std;

class Complex{

private:
    int r,m;
public:

    void setData(int real, int img){
        r=real;
        m = img;
    }

    void showData(){
        cout<<endl;
        cout<<r<<" + "<<m<<"i";

    }

};

int main(){
    Complex c1;
    int real, img;
    cout<<"Enter complex numbers ";
    cin>>real>>img;

    c1.setData(real,img);
    c1.showData();

    return 0;
}