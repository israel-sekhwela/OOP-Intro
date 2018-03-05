#include <iostream>
#include "person.h"

using namespace std;

int	main(void)
{
	//Declearing variables including object
	Person	p;
	string	name;
	float	weight;
	float	height;
	int	age;

	cout << "Class Simulation for a Person" <<endl;
	cout << "=============================\n\n";

	cout << "Please enter your name: ";
	cin >> name;
	cout << "Please enter your age: ";   
	cin >> age;

	cout << "Please enter weight: ";
	cin >> weight;
	cout << "Please enter height: ";
	cin >> height;
	
	p.setName(name);
	p.setAge(age);
	p.setWeight(weight);
	p.setHeight(height);

	p.printDetails();
	p.ft_calculate_BMI();
	return (0);
}
