#include <iostream>
using namespace std;

int main() {
	char a;
	cout<<"enter the character";
	cin>>a;
	if((a>64)&&(a<91))
	cout<<"it is uppercase";
	else if((a>96)&&(a<123))
	cout<<"it is lowercase";
	return 0;
}
