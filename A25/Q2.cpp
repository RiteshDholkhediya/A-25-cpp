#include<iostream>
using namespace std;

class Time{

private:
    int hour,min,sec;
public:

    void setData(int h, int m, int s){
        hour = h;
        min = m;
        sec = s;
    }

    void showData(){
        
        cout<<endl;
        cout<<hour<<" hr "<<min<<" min "<<sec<<" sec";

    }

};

int main(){
    Time t1;
    int h,m,s;
    cout<<"Enter hour, min and sec ";
    cin>>h>>m>>s;

    t1.setData(h,m,s);
    t1.showData();

    return 0;
}