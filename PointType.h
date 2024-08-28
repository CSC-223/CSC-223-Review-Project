#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

template <class T>
class PointType
{
private:
	T x;
	T y;

public:
	// Default constructor
	PointType() { x = 0, y = 0; cout << fixed << setprecision(1) << showpoint;
	}

	// Constructor with parameters
	PointType(T Ux, T Uy) : x(Ux), y(Uy) { cout << fixed << setprecision(1) << showpoint; }

	// Setters
	void setX(T Ux) { x = Ux; }
	void setY(T Uy) { y = Uy; }
	void setPoint(T Ux, T Uy) {
		x = Ux;
		y = Uy;
	}

	//Getters
	T getX() { return x; }
	T getY() { return y; }
	void getPoint(T& Ux, T& Uy) {
		Ux = x;
		Uy = y;
	}

	double operator -(PointType<T> op2) {
		double distance = sqrt(pow(x - op2.x, 2) + pow(y - op2.y, 2));
		return distance;
	}

	void print()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}




};


