#include <iostream>
#include <new>

using namespace std;

int main(){


	int i,n;
	int * p;

	cin >> i;

	p = new int[i];

	if(p == nullptr)
		cout << " error" <<endl;

	else{
	
		for (n = 0 ; n < i; n++)
		{	
			cout << "enter number:" ;
		
			cin >> p[n];
		}

	}
	for (n =0 ; n < i ; n++)
		cout << p[n]<< endl;
	delete[] p;

	return 0;
}
