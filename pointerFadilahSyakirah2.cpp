#include <iostream>
using namespace std;
//Fadilah Syakirah
//G1A021022
//Soal 2

int main ()
{
    int a, b, c;
    int *p1, *p2, *p3;

    a = 10 ; 
    cout<< a <<endl;
    b = 15 ;
    cout<< b <<endl;
    c = 27 ;
    cout<< c <<endl;

    p1 = &a ;
    cout<<" alamat p1 = "<<&a<<endl;
    p2 = &b ;
    cout<<" alamat p2 = "<<&b<<endl;
    *p1 = c ;
    cout<<" nilai p1 = "<<c<<endl;
    a = *p2 ;
    cout<<"a = "<<*p2<<endl;
    cout<<" nilai *p2 = "<< a <<endl;
    b = 6 ;
    cout<<"b = 6"<<endl;
    p3 = &b ;
    cout<<" alamat p3 = "<<&b<<endl;
    p3 = &c ;
    cout<<" alamat p3 = "<<&c<<endl;
    *p1 = *p3 ;
    cout<<" nilai *p1 = "<<*p3<<endl;
    cout<<" nilai *p3 = "<<*p1<<endl;

}