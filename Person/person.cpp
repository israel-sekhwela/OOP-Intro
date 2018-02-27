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

Person :: Person(string mName, int mAge, float mHeght, float mWeight)
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
	name = UserName;
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
		cout "Invalid age.\n";
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
	return (name)
}

float	Person :: getAge()
{
	// return variable age
	return (age);
}

float	Person :: getHeight()
{
	// return varible height
	return (height);
}

float	Person :: getWight()
{
	// return variable weight
	return (weight);
}

void	ft_calculate_BMI(int userWeight, float userHeight)
{
	float result;

	result = userWeight / userHeight;
	cout << "Your BMI is: " << (result / userHeight) << endl;
}
