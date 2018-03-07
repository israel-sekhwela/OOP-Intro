#ifndef car_h
#define	car_h

#include  <string>
using namespace std;

class Car{
	private:
		int	yearModel;
		int	speed;
		char	*make;
	public:
		Car();
		Car(int, char*, int);
		
		int	getModel();
		int	getSpeed();
		int	accelerate();
		int	brake();
			
		void	displayMenu();
		char	toUpper(char s);
};

#endif
