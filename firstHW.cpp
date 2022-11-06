#include <iostream>

using namespace std;

int main() {
	
	float x,y,a,b,c;
	
    cout << "please enter first number: ";
	cin >> x;
	
	cout << "please enter second number: ";
	cin >> y;
	
	a = x + y;
	b = x - y;
	c = x * y;
	x = x % y;
	
	cout << a << "\n" << b << "\n" << c << "\n" << x;
	return 0;
}
