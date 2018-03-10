#include <iostream>
#include "rectangle.h"

Rectangle :: Rectangle(){
	width = 0;
	height = 0;
}

Rectangle :: Rectangle(float mWidth, float mHeight){
	width = mWidth;
	height = mHeight;
}

void	Rectangle :: setHeight(float height){
	this->height = height;
}

void	Rectangle :: setWidth(float width){
	this->width = width;
}

float	Rectangle :: getHeight(){
	return (height);
}

float	Rectangle :: getWidth(){
	return (height);
}

void	Rectangle :: displayMenu(){
	cout << "Triangle Area Calculator\n";
	cout << "========================\n\n";
	
	cout << "Please select your option below.\n";
	cout << "1. Enter Width\n";
	cout << "2. Enter Height\n";
	cout << "3. Check Status\n";
	cout << "4. Display Area\n";
	cout << "5. Exit\n";
}

void	Rectangle :: area(){
	cout << "The area is: " << (width * height) << endl; 
}
