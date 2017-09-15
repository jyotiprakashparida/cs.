#include <iostream>
using namespace std;

int main() {
		char a;
	cout<<"enter the character";
	cin>>a;
	if(((a>64)&&(a<91))||((a>96)&&(a<123)))
	cout<<"the character is an alphabet";
	else
	cout<<"the character is not an alphabet";
	return 0;
}
