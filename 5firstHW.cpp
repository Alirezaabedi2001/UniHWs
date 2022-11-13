#include <iostream>

using namespace std;

int main() {
    
	float a,s;
    cout << "how much did you get this month?\n";
    cin >> a;

    if ( a < 6)
        cout << a
    else if (6 <= a < 8)
        cout <<a - (a / 100 * 5)
    else if (8 <= a < 10)
	    cout <<a - (a / 100 * 10)
    else if (10 <= a < 14)
	    cout <<a - (a / 100 * 15)
    else if (14 <= a < 18)
	    cout <<a - (a / 100 * 20)
    else if (18 <= a < 25)
	    cout <<a - (a / 100 * 25);
        else (25 <= a);
        	cout <<a - (a / 100 * 35);
    return 0;
}
 
