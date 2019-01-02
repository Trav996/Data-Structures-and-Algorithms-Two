#include "Sphere.h" //include the geader file

using namespace std;

Sphere::Sphere() //default constructor
{
	currentRadius = 1.0;
}

Sphere::Sphere(double originalRadius)
{
	setRadius(originalRadius);
}

void Sphere::setRadius(double latestRadius) //set the radius of the sphere
{
	if (latestRadius > 0)
		currentRadius = latestRadius;
	else
		currentRadius = 1.0;
}

double Sphere::getRadius() const //get the radius of the sphere
{
	return currentRadius;
}


double Sphere::getDiameter() const //get the diameter of the sphere
{
	return 2.0 * currentRadius;
}


double Sphere::getCircumference() const //get the circumference of the sphere

{
	return PI * getDiameter();
}


double Sphere::getArea() const //get the area of the sphere

{
	return 4.0 * PI * currentRadius * currentRadius;
} 


double Sphere::getVolume() const //get the volume of the sphere
{
	double increasedRadius = currentRadius * currentRadius * currentRadius;
	return (4.0 * PI * increasedRadius) / 3.0;
}