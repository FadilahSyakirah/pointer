#include <iostream>
using namespace std;
int main ()
{
	int a = 0, b = 0, c = 0; 
    int *p1 = 0, *p2 = 0, *p3 = 0;

	
	a = 10;
	cout<<" nilai a = 10"<<endl;
	cout <<"a = " <<a<< endl;
	b = 15;
	cout<<" nilai b = 15"<<endl;
	cout <<"b = " <<b<< endl;
	c = 27;
	cout<<" nilai c = 27"<<endl;
	cout <<" c = " <<c<< endl;
	p1 = &a;
	cout<<" alamat p1 = &a"<<endl;
	cout<<"&a = "<<&a<< endl;
	cout<<" p1 = "<<p1<< endl;
	p2 = &b;
	cout<<" alamat p2 = &b"<<endl;
	cout<<"&b = "<<&b<< endl;
	cout<<"p2 = "<<p2<< endl;
	*p1 = c;
	cout<<" alamat p1 = c"<<endl;
	cout <<"c = " <<c<< endl;
	cout <<" delay *p1 = " <<*p1<< endl;
	a = *p2;
	cout<<" nilai p1 = *p2"<< endl;
	cout<<" nilai p2 = "<<*p1<< endl;
	cout<<"a = "<<a<< endl;
	b = 6;
	cout<<" nilai b = 6"<< endl;
	cout<<"b = "<<b<< endl;
	p3 = &b;
	cout<<" alamat p3 = &b"<<endl;
	cout <<"&b = " <<&b<< endl;
	cout <<" nilai p3 = " <<*p3<< endl;
	p3 = &c;
	cout<<" alamat p3 = &c"<<endl;
	cout <<"&c = " <<&c<< endl;
	cout <<"p3 = " <<*p3<< endl;
	*p1 = *p3;
	cout<<" nilai p1 = *p3"<<endl;
	cout <<" nilai p3 = " <<*p3<< endl;
	cout <<" nilai p1 = " <<*p1<< endl;
    
return 0;
}   