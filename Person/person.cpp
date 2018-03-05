#include <iostream>
#include "person.h"

using namespace std;

Person :: Person()
{
	//Defalut initialization
	name = " ";
	age = 0;
	height = 0;
	weight = 0;
}

Person :: Person(string mName, int mAge, float mHeight, float mWeight)
{
	name = mName;
	height = mHeight;
	weight = mWeight;

	if((mAge > 0) && (mAge < 120))
 		age = mAge;
	else
		cout << "Invalid age.\n";
}

void	Person :: setName(string userName)
{
	// set the name variable to the argument passed
	name = userName;
}

void	Person :: setAge(int userAge)
{
	/* 
	1. set the age variable to the argument passed
	2. check if the age is valied 
	*/

	if ((userAge > 0) && (userAge <= 120))
		age = userAge;
	else
		cout << "Invalid age.\n";
}

void	Person :: setHeight(float userHeight)
{
	//set the height variable to the argument passed
	height = userHeight;
}

void	Person :: setWeight(float userWeight)
{
	// set the weight variable to the argument passed
	weight = userWeight;
}

string	Person :: getName()
{
	// return variable name
	return (name);
}

int	Person :: getAge()
{
	// return variable age
	return (age);
}

float	Person :: getHeight()
{
	// return varible height
	return (height);
}

float	Person :: getWeight()
{
	// return variable weight
	return (weight);
}


void	Person :: printDetails()
{
	cout << endl;
	cout << "The results are: " << endl;
	cout << "================" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Height: " << height << endl;
	cout << "Weight: " << weight << endl;
}


void	Person :: ft_calculate_BMI()
{
	float result;

	result = weight / height;
	cout << "Your BMI is: " << (result / height) << endl;
}
