#include<iostream>
using namespace std;
int main(){
    int k;
    cout << "Nhap k: "
    cin >> k;
    if (k<3) cout << k;
    else {
        while (k>=3)k/=3;
        cout << k;
    }
}



