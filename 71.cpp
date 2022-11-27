#include <iostream>
using namespace std;

int main() {
	int n,k;
	cout << "please enter a natural number: ";
	cin >> n;
	
	k=0;
	for(int i=1 ;i<=n ;i++)
	if(n%i==0)
	k+=i;
	
	cout <<k;
	return 0;
}
