#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a,b,c;
	cout << "Nhap lan luot 3 canh: ";
	cin >> a >> b >> c;
	string tg;
	tg = a+b>c && b+c>a && a+c>b ? (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a ? "tam giac vuong" : (a==b&&a!=c || a==c&&a!=b || b==c&&b!=a)? "tam giac can" : (a==b&&b==c&&a==c)? "tam giac deu" : "tam giac thuong" ) : "Ko la tam giac";
	cout << tg;

	return 0;
}
