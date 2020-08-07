#include <iostream>


using namespace std;
//declare function
int hash_function(int element);

int main(){

	// dynamically allocate list to 2 memeory spaces
	int *list = new int(2);
	//allocate values
	list[0] = 5;
	list[1] = 4;	

	// dynamically allocate 10 spaces and initial values
	int *hash_table = new int[10]{0,0,0,0,0,0,0,0,0,0};

	// declare and allocate value
	int index = 0;
	// make hash table
	for(int i = 0 ; i < 2; i++){
	
		index = hash_function(list[i]);
		hash_table[index] = index;

	}
	//print out hash table
	for(int i = 0; i < 10; i++)
		cout << hash_table[i] << " ";
	// end line
	cout << endl;
	// return address to OS
	delete[] hash_table;
	// return adress to OS
	delete[] list;
	// allocate hash-_table to nullptr
	hash_table = nullptr;
	list = nullptr;
	
	//check pointer memory dealloctation
	if(hash_table)
		cout << " hash_table memory leak" <<endl;
	else if(list != nullptr)
		cout << " list memory leak" << endl;
	else
		cout << "memory freed"<<endl;
	return 0;
}
// emplement hash function
int hash_function(int element){

	return element % 10;
	
}
