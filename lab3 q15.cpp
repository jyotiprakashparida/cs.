#include <iostream>
using namespace std;

int main() {
	int a,b,c,m;
	cout<<"enter the three sides";
	cin>>a>>b>>c;
	if( a>b && a>c)
	{m=a;
	a=0;}
	
	if( b>a && b>c)
	{m=b;
	b=0;}
	
	if( c>a && c>b)
	{m=c;
	c=0;}
	
	if(m<(a+b+c))
	cout<<"it forms a triangle";
	else
	cout<<"it does not form a triangle";
	return 0;
}
