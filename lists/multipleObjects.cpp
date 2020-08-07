#include <iostream>
#include <string>


// declare class
class People{

	public:
		int num;
		std::string city;

};

int main(){

	// get instace of class and allocate value to it's members
	People people;
	People reside;
	reside.city = "London";
	people.num = 5000;
	people.city = "seoul";
	// print out value
	std::cout << people.city << std::endl;
	std::cout << reside.city << std::endl;
	return 0;
}
