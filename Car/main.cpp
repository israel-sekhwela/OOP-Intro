#include <iostream>
#include <string>
#include "car.h"

using namespace std;
int	main(void){
	int	speed;
	char	choice;
	Car	c;

	speed = 0;
	
	cout << "The initial speed of Tesla is set to: " << speed << " km/s" << endl;

	c.displayMenu();
	cout <<  "Choice : ";
	cin >> choice;

	while (!(c.toUpper(choice) == 'C')){
		if (c.toUpper(choice) == 'A'){
			cout << "\nYou are accelating the car. ";
			cout << "The speed is " << c.accelerate() << " km/s" << endl;
		}
		else
		if (c.toUpper(choice) == 'B'){
			if (c.getSpeed() == 0){
				cout << "\nThe car is not moving, breaks are already applied." << endl;
			}
			else{
				cout << "\nYou are slowing down the car. ";
				cout << "The speed is " << c.brake() << " km/s" << endl;
			}
		}
		else {
			cout << "\nPlease select either option A, B or C." << endl;
		}
		c.displayMenu();
		cout << "Choice: ";
		cin  >> choice;
	}
	cout << "\nThank you for your time, good bye!" << endl;
	return (0);
}
