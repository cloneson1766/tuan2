#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x,y,BCNN;
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: ";cin >> y;
	for(int i=1;i<=10000;i++){
		if(i%x==0 && i%y==0){
			BCNN=i;
			break;
		}
	}
	cout << "BCNN la: " << BCNN;
}
