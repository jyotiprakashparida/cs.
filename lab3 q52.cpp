#include <iostream>
using namespace std;
int ch(int n)
{
  int num, rem, sum = 0,digit;
  num = n;
  while(num != 0)
  {
      digit = num % 10;
      sum += digit * digit * digit;
      num /= 10;
  }
  if(sum == n)
    cout << n << " is an Armstrong number.\n";
  return 1;
}

main()
{
	int n;
	cout<<"\nEnter n value\t";
	cin>>n;
	for(int i=1;i<=n;i++)
		ch(i);
	return 0;
}
