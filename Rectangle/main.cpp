#include <iostream>
#include "rectangle.h"

using namespace std;
int	main(){
	Rectangle	r;
	int		choice;
	float		width;
	float		height;
	
	r.displayMenu();
	cout << "Choice: ";
	cin >> choice;	
	
	while(choice != 5){
		if (choice == 1){
			cout << "Width: ";
			cin >> width;
			r.setWidth(width);
		}
		else
		if (choice == 2){
			cout << "Height: ";
			cin >> height;
			r.setHeight(height);
		}
		else
		if (choice == 3){
			if (r.getWidth() == 0){
				cout << "Your results: \n";
				cout << "-------------\n\n";
				cout << "Height: " << r.getHeight() << endl;
				cout << "Width: You have not entered width yet.\n";
			}
			else
			if (r.getHeight() == 0){
				cout << "Your results: \n";
				cout << "-------------\n\n";
				cout << "Width: " << r.getWidth() << endl;
				cout << "Height: You have not entered height yet.\n";
			}
			else
			if ((r.getHeight() == 0) && (r.getWidth() == 0)){
				cout << "Your results: \n";
				cout << "-------------\n\n";
				cout << "Width: You have not entered height yet.\n;";
				cout << "Height: You have not entered height yet.\n";
			}
			else{
				cout << "The results: \n";
				cout << "-------------\n\n";
				cout << "Width: " << r.getWidth() << endl;
				cout << "Height: " << r.getHeight() << endl;
			}
		}
		else
		if (choice == 4){
			r.area();
		}
		else{
			cout << "Please select the right option, from 1 to 5." << endl;
		}
	r.displayMenu();
	cout << "Choice: ";
	cin >> choice;	
	}
	cout << "Thank You, good bye!" << endl;
	return (0);
}
