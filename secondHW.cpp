#include <iostream>

using namespace std;

int main() {
	
	float x,y,z,a,s;
	 
	cout << "please enter first number: ";
	cin >> x;
	
	cout << "please enter second number: ";
	cin >> y;
	
	cout << "please enter third number: ";
	cin >> z;
	
	a = x - y;
	s = x + z;
	a *= s;
	
	x += y + z;
	x *= x;
	x += 1;
	a /= x; 
	
	cout << a;
	return 0;
}
