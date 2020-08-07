#include <iostream>
#include <new>

using namespace std;

int main(){

	//declare variables and pointer variable
	int i,n;
	int * p;

	//take input from console
	cin >> i;

	// dynamic allocate memeory p to number of i times
	p = new int[i];

	//check if p is null pointer
	if(p == nullptr)
		cout << " error" <<endl;

	else{
	// allocate value to the variable
		for (n = 0 ; n < i; n++)
		{	
			cout << "enter number:" ;
		
			cin >> p[n];
		}

	}
	// print out p array values
	for (n =0 ; n < i ; n++)
		cout << p[n]<< endl;
	delete[] p;

	return 0;
}
