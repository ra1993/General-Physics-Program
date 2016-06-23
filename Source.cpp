#include<iostream>
#include <math.h>
#include <stdlib.h>
#include "MotionParticles.h"
#include "NewtonLawMotion.h"

using namespace std;





int main() {

	int a, b, c, d;
	int choice;


	cout << "Welcome to the General Physics Program" << endl;
	cout << "What would you like to look into? " << endl;
	cout << "1. Motion Particles: Finding position at all times. \n"
		"2. Newton's Law of Motion" << endl;

	cin >> choice;


	switch (choice) {

	case 1:
	{
		MotionParticles();
	}

	break;

	case 2: {

		NewtonLawMotion();

	}

		

	};



	system("pause");
	return 0;
}
