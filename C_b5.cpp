#include <iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout << "Nhap n:";
	cin >> n;
	for (i = 1;i <= n;i++)
	{
		for (j = i;j <= n;j++) cout << j << " ";
		for (j = 1;j < i;j++) cout << j << " ";
		cout << endl;
	}
	return 0;
}
