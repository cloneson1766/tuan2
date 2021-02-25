#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int n,i;

	do{
		cout << "Nhap so can kiem tra: ";
		cin >> n ;
		if(n==1){
			cout << "no\n";
		}
	}while(n==1);
	int dem=0;
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0){
			dem++;
		}
	}
	if(dem==1){
		cout << "yes";
	}else{
	cout << "no";
	}
}
