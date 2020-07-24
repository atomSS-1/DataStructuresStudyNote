#include <iostream>

using namespace std;



int main(){

	//declar 10 char variable
	char* ten_char[10];
	
	//allocate 10 memory space
	for(int i = 0; i < 10; i++){
		ten_char[i] = new char;
			
	}
	*ten_char[0] = 'a';
	*ten_char[1] = 'b';

	cout << *ten_char[0] << endl;

	return 0;
}


