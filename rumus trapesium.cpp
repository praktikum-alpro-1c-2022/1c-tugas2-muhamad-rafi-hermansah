#include <iostream>
using namespace std;

int main () {
	double a, b, t, luas;
	
	cout << "masukkan a : ";
	cin >> a;
	
	cout << "masukkan b : ";
	cin >> b;
	
	cout << "masukkan t : ";
	cin >> t;
	
	luas = 0.5 * (a + b) * t;
	
	cout << "luas nya adalah : " << luas << endl;
	
	return 0;
}
