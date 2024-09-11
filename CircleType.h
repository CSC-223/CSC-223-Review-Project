#pragma once
#include "PointType.h"

template <class T>
class CircleType
{
public:
	// Define static constant for the value of Pi.
	static const double PI;

	// Default constructor
	CircleType();
	// Constructor with coordinates sent in
	CircleType(T, T, T, T);

	// Sets coordinates for the radius point
	void setCenterPoint(T, T);

	// Sets coordinates for the circumference point
	void setCircumPoint(T, T);

	// Returns the x, y coordinates of the center point
	void getCenterPoint(T& xC, T& yC);


	// Returns the values for the x and y coordinates of the circumference point
	void getCircumPoint(T& xC, T& yC);

	
	// Displays the (x, y) coordinates of the center point
	void printCenterPoint();

	// Displays the (x, y) coordinates of the circumference point
	void printCircumPoint();

	// Returns the radius of the circle
	double calcRadius();

	// Returns the area of the circle
	double calcArea();

	// Returns the circumference of the circle
	double calcCircumference();

	// Writes the radus, area, and circumference of the circle to the display
	void print();

private:
	PointType<T> centerPoint;
	PointType<T> circumPoint;
};

template <class T>
const double CircleType<T>::PI = 3.14159;

template <class T>
CircleType<T>::CircleType() : centerPoint(), circumPoint() {}

template <class T>
CircleType<T>::CircleType(T xCenter, T yCenter, T xCircum, T yCircum) : centerPoint(xCenter, yCenter),
circumPoint(xCircum, yCircum) { }

template <class T>
void CircleType<T>::setCenterPoint(T xC, T yC)
{
	centerPoint.setX(xC);
	centerPoint.setY(yC);
}

template <class T>
void CircleType<T>::setCircumPoint(T xC, T yC)
{
	circumPoint.setX(xC);
	circumPoint.setY(yC);
}


template <class T>
void CircleType<T>::getCenterPoint(T& xC, T& yC)
{
	xC = centerPoint.getX();
	yC = centerPoint.getY();
}

template <class T>
void CircleType<T>::getCircumPoint(T& xC, T& yC)
{
	xC = circumPoint.getX();
	yC = circumPoint.getY();
}

template <class T>
void CircleType<T>::printCenterPoint()
{
	centerPoint.print();
}

template <class T>
void CircleType<T>::printCircumPoint()
{
	circumPoint.print();
}

template <class T>
double CircleType<T>::calcRadius()
{
	double radius;
	radius = centerPoint - circumPoint;
	return radius;
}

template <class T>
double CircleType<T>::calcCircumference()
{
	return PI * 2 * calcRadius();
}

template <class T> 
double CircleType<T>::calcArea()
{
	return PI * calcRadius() * calcRadius();
}

template <class T> 
void CircleType<T>::print()
{
	cout << "Center point: ";
	printCenterPoint();
	cout << "Circumference point: ";
	printCircumPoint();
	cout << "Radius: " << calcRadius() << endl;
	cout << "Circumference: " << calcCircumference() << endl;
	cout << "Area: " << calcArea() << endl;
}