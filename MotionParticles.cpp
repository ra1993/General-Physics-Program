/// One Dimensional Motion of Particles/Find position at all times
// build the functions for header file

#include<iostream>
#include <math.h>
#include "MotionParticles.h"
#include <stdlib.h>

using namespace std;

MotionParticles::MotionParticles()     //set choices here for calculations
{
	chooseFunction();


};



MotionParticles::~MotionParticles()
{};

// -------------------------------------------------------------------------------------------------functions
// ----------------------------------------------------------------------------------------------Switch Function


double MotionParticles::chooseFunction() {
	int choice;
	double a, b, c, d;

	cout << "What would you like to look for? (If you'd like to get answer press a different key than ones provided or to exit program)\n"
		"1. Average Velocity \n"
		"2. Average Acceleration \n" 
		"3. Average Speed \n" << endl;

	cin >> choice;

	switch (choice) {

	case 1:
	{
		cout << "Average Velocity" << endl;

		cout << "What is the value of x1? (x1 = to the position at time t1)" << endl;
		cin >> a;

		cout << "What is the value of x2? (x2 = position at time t2" << endl;
		cin >> b;

		cout << "Time at t1? (in seconds)" << endl;
		cin >> c;

		cout << "Time at t2? (in seconds)" << endl;
		cin >> d;

		MotionParticles aVel;
		aVel.setavgVelocity(a, b, c, d);

		cout << "The average velocity of the object in question is: " << aVel.getavgVelocity() <<"m/s"<<endl;

	}

	break;

	case 2:
	{
		cout << "Average Acceleration" << endl;

		cout << "What is the value of v1? " << endl;
		cin >> a;

		cout << "What is the value of v2? " << endl;
		cin >> b;

		cout << "What is the value of t1?" << endl;
		cin >> c;

		cout << "What is the value of t2?" << endl;
		cin >> d;

		MotionParticles aAcc;
		aAcc.setavgAcceleration(a, b, c, d);
		cout << "The average acceleration of the object in question is: " << aAcc.getavgAcceleration() <<"m/s²" <<endl;
	}

	break;


	case 3:
	{
		cout << "Average Speed (the length of path traveled/time to travel path" << endl;


		cout << "What is the length of the distance the object has traveled?" << endl;
		cin >> a;

		cout << "How long did it take for the object to travel that distance?" << endl;
		cin >> b;

		MotionParticles aSpeed;
		aSpeed.setavgSpeed(a, b);

		cout << "The average speed of the object is: " << aSpeed.getavgSpeed() <<"m/s" <<endl;

	}

	default: cout << "This choice is not valid." << endl;
		return 1;

	};

	return 0.0;
}



// -----------------------------------------------------------------------------------------------Velocity
void MotionParticles::setavgVelocity(double x1, double x2, double t1, double t2)
{
	double v;
	v = (x2 - x1) / (t2 - t1);

	avgV = v;
}

double MotionParticles::getavgVelocity() {
	return avgV;
}


// ----------------------------------------------------------------------------------------------Acceleration

void MotionParticles::setavgAcceleration(double v1, double v2, double t1, double t2) {

	double acc;
	acc = (v2 - v1) / (t2 - t1);
	avgAcc = acc;
}

double MotionParticles::getavgAcceleration() {

	return avgAcc;
}


// ------------------------------------------------------------------------------------------------Speed

void MotionParticles::setavgSpeed(double d, double t) {

	double speed;
	speed = d / t;

	avgSpeed = speed;
}

double MotionParticles::getavgSpeed() {

	return avgSpeed;

};