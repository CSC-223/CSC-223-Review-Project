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
	// Constructor with points sent in
	CircleType(PointType<T>, PointType<T>);

	// Sets coordinates for the radius point
	void setCenterPoint(T, T);

	// Sets coordinates for the circumference point
	void setCircumPoint(T, T);

	// Returns the values for the x and y corrdinates of the center point
	PointType<T> getCenterPoint();

	// Returns the values for the x and y coordinates of the circumference point
	PointType<T> getCircumPoint();

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
CircleType<T>::CircleType(PointType<T> center, PointType<T> circum) : centerPoint(center), circumPoint(circum) { }
