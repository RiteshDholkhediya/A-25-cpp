#include<iostream>
using namespace std ;

class Square{

private: 
   static int count;
public: 
    int square(int n){
        count++;
        return n*n;
    }
    int getCount(){
        return count;
    }
};

int Square::count;

int main(){
    Square s1;
    int n;
    cout<<endl;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Square of "<<n<<" = "<<s1.square(n);
    cout<<endl<<s1.getCount();

   

    return 0;
}