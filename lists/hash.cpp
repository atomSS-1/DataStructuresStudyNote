#include <iostream>


using namespace std;

int hash_function(int element);

int main(){


	int *list = new int(2);

	list[0] = 5;
	list[1] = 4;	


	int *hash_table = new int[10]{0,0,0,0,0,0,0,0,0,0};

	int index = 0;
	for(int i = 0 ; i < 2; i++){
	
		index = hash_function(list[i]);
		hash_table[index] = index;

	}

	for(int i = 0; i < 10; i++)
		cout << hash_table[i] << " ";

	cout << endl;

	delete[] hash_table;
	
	delete[] list;

	hash_table = nullptr;
	list = nullptr;
	
	if(hash_table)
		cout << " hash_table memory leak" <<endl;
	else if(list != nullptr)
		cout << " list memory leak" << endl;
	else
		cout << "memory freed"<<endl;
	return 0;
}

int hash_function(int element){

	return element % 10;
	
}
