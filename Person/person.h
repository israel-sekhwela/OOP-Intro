#ifndef	person_h
#define	person_h

//class defination
class	Person
{
	private:
		string	name;
		int	age;
		int	height;
		int	weight;
	public:
		//Constructors
		Person();
		Person(string mName, int mAge, float mHeight, float mWeight);

		//set functions
		void	setName(string userName);
		void	setAge(int userAge);
		void	setHeight(float serHeight);
		void	setWeight(float userWeight);
		
		//get functions
		string	getName();
		int	getAge();
		float	getWeight();
		float	getHeight();

};

//function to calculate BMI
void	ft_calcluate_BMI(float userWeight, float userHeight);

#endif
