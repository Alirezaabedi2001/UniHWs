#include <iostream>
 using namespace std;

int main() {
	
   int m,n,k;
   
   cout << "pleas enter first number: ";
   cin >> m;
   cout << "pleas enter second number: ";
   cin >> n;
   
   k = 1;
   for (int i = 1;i <= n; i++)
   k*=m;

   cout << k;
	return 0;
}
