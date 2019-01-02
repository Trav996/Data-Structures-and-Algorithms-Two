#include <iostream>
#include "Sphere.h" //include the header file

int main() //main to test program
{
	Sphere unitSphere;
	Sphere mySphere(5.1);
	mySphere.setRadius(4.2);
	std::cout << "The radius of mySphere is :"
		<< mySphere.getRadius() << std::endl;
	std:: cout << "The diameter of mySphere is :" 
		<< mySphere.getDiameter() << std:: endl;
	std::cout << "The circumference of mySphere is :"
		<< mySphere.getCircumference() << std::endl;
	std::cout << "The area of mySphere is :"
		<< mySphere.getArea() << std::endl;
	std::cout << "The volume of mySphere is :"
		<< mySphere.getVolume() << std::endl;
	return 0;
}