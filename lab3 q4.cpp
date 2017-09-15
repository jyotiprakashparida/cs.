#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"enter the number";
	cin>>a;
	if((a%5==0)&&(a%11==0))
	cout<<"the number is divisible by 5 and 11";
	else
	cout<<"the number is not divisible by 5 and 11";
	
	return 0;
}
