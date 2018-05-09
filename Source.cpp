#include<iostream>
#include <math.h>
#include <stdlib.h>
#include "MotionParticles.h"
#include "NewtonLawMotion.h"
#include "EnergyandPower.h"
#include "MomentumandCollision.h"
#include "MechanicsofFluids.h"
//#include "Temperature.h"
//#include "Electrostatics.h"

using namespace std;





int main() {


	//int a, b, c, d;
	int choice;


	cout << "Welcome to the General Physics Program" << endl;
	cout << "What would you like to look into? " << endl;
	cout << "1. Motion Particles: Finding position at all times. \n"
		    "2. Newton's Law of Motion\n" 
		    "3. Work, Energy, and Power\n"
			"4. One Dimensional Motion, Momentum and Collision \n"
			"5. Mechanics of Fluids \n" 
			"6. Temperature"<< endl;

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

    break;

	case 3: {

		EnergyandPower();

	}

	case 4: {

		MomentumandCollision();

	};

	case 5: {

		MechanicsofFluids();

	}

	case 6: {

		//Temperature();

	}

	case 7: {

		//Electrostatics();
	}

	};



	system("pause");
	return 0;
}
