#include <iostream>
using namespace std;

int main() {
	int a,i=0,j=0;
    cout<<"enter the amount";
    cin>>a;
    i=a/2000;
    i+=(a%2000)/500;
    i+=((a%2000)%500)/100;
    i+=(((a%2000)%500)%100)/50;
     i+=((((a%2000)%500)%100)%50)/20;
     i+=(((((a%2000)%500)%100)%50)%20)/10;
     j=((((((a%2000)%500)%100)%50)%20)%10)/5;
     j+=(((((((a%2000)%500)%100)%50)%20)%10)%5)/2;
     j+=(((((((a%2000)%500)%100)%50)%20)%10)%5)%2;
    cout<<"the number of notes and coins are "<<i<<"\t"<<j;
	return 0;
}
© 2017 GitHub, Inc.
