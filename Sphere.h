#pragma once
const double PI = 3.14159;
/** Definition of a class of Spheres. */
class Sphere
{
private:
	double currentRadius; //The Sphere's radius
public:
	/** Default constructor: Creates a sphere and initializes its radius to a default value.
	Precondition: None.
	Postcondition: A sphere of radius 1 is created. */
	Sphere();

	/** Constructor: Creates a sphere and initializes its radius.
	Precondition: initialRadius is the desired radius.
	Postcondition: A sphere is created with radius set to initialRadius. */
	Sphere(double initialRadius);

	void setRadius(double newRadius);
	double getRadius()const;
	double getDiameter()const;
	double getCircumference()const;
	double getArea()const;
	double getVolume()const;
};
