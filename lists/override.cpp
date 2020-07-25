
#include <iostream>
#include <string>

using namespace std;

int getter(int element);
bool getter(bool element);
float getter(float element);
long getter(long element);
char getter(char elememt);
string getter (string element);

int main(){


	float element = 10;
	
	cout << getter(element) << endl;

	return 0;
}
int getter(int element)
{

	return element;
}
float getter(float element)
{
	return element;
}

