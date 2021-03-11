#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1;i <= n;i++) a[i] = 0;
	a[1] = 1;
	for (int i = 2;i <= n;i++)
	 for (int j = 2;j <= sqrt(i);j++)
	  if (i%j == 0)
	   {
	   		a[i] = 1;
	   		break;
	   }
	for (int i = 1;i <= n;i++)   
	 if (a[i] == 0) 
	 cout << i << " ";
	return 0;
}
