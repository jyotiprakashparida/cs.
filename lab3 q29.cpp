#include <iostream>
using namespace std;
int main()
{
int n,s;
cin>>n;
int i=1;
while(i<=n)
{
if(i%2==0)
{
s=s+i;
}
i++;
}
cout<<s;
return 0;
}
