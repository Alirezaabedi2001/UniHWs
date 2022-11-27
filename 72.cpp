#include <iostream>
using namespace std;

int main() {
	int n,m,k;
	
	cout << "please inter first number: ";
	cin >> n;
	cout << "please inter second number: ";
	cin >> m;
	
	for(int i =1; i<=n && i<=m; i++)
       if(n%i==0 && m%i==0)
	   k=i;
	    else(n%m==0)
	   	cout << k;
	return 0;
}
