#include <iostream>
#include "car.h"
#include <string>

using namespace std;

Car :: Car(){
	yearModel = 0;
	speed = 0;
	//make = " ";
}

Car :: Car(int mYearModel, char *mMake, int mSpeed){
	yearModel = mYearModel;
	speed = mSpeed;
	make = mMake;
}

int	Car :: getModel(){
	return (yearModel);
}

int	Car :: getSpeed(){
	return (speed);
}

int	Car :: accelerate(){
	speed += 10;
	return (speed);
}

int	Car :: brake(){
	speed -= 10;
	return (speed);
}

void	Car :: displayMenu(){
	cout << "\n	Car Menu	" << endl;
	cout << "=======================" << endl;
	cout << "A. Accelarate" << endl;
	cout << "B. Apply brakes" << endl;
	cout << "C. Exit" << endl;
}

char	Car :: toUpper(char s){
	if (s != '\0'){
		if ((s >= 'a') && (s <='z')){
			s -= ('a' - 'A');
		}
	}
	return (s);
}
