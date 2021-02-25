#include<iostream>
using namespace std;
int main ()
{
    int n;
    int i,j,k;
	cout << "Nhap N: ";
	cin >> n;
	for(i=1;i<=n;i++){
	    for(j=2;j<=i;j++){
	        cout << " ";
	    }
	    for(k=n-i+1;k>=1;k--){
	        cout<< "*";
	    }
	    cout << endl;
	}
	}
