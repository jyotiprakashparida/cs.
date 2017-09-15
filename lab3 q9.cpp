#include <iostream>
using namespace std;

int main() {
	char a;
	cout<<"enter the character";
	cin>>a;
	if(((a>64)&&(a<91))||((a>96)&&(a<123)))
	cout<<"the character is an alphabet";
	else if((a>47)&&(a<58))
	cout<<"the character is a digit";
	else
	cout<<"the character is a spl character";
	return 0;
}
