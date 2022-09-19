#include <iostream>

int main() {

	//initialize 
	int dog_age;
	std::cout << "Enter your dogs age: \n";
	std::cin >> dog_age;

	//the first two years count as 21 years in dog's age
	int early_years = 21;
	int later_years = (dog_age - 2) * 4;
	int human_years = early_years + later_years;

	//output rsult including dog's name
	std::cout << "My name is Bobby! Ruff ruff, I am " << human_years << " years old in human years.\n";

}