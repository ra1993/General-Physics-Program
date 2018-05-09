#include "MechanicsofFluids.h"
#include<iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;


MechanicsofFluids::MechanicsofFluids() {

	int choice; 

	cout << "What would you like to calculate? \n"
		"1. Density \n"
		"2. Pressure \n"
		"3. Below Fluid Pressure \n"
		<< endl;

	cin >> choice;

	switch (choice) {

	case 1: {

		double m, v;

		cout << "What is the mass of the object?" << endl;
		cin >> m;

		cout << "What is the volume of the object?" << endl;
		cin >> v;

		MechanicsofFluids density;

		density.setDensity(m, v);

		cout << "The denisty of the object is: " << getDensity() <<"kg/m^3"<<endl;

	};

	case 2: {

		double f, sa;

		cout << "What is the normal force on the object? " << endl;
		cin >> f;

		cout << "What is the surface area the object is pushing against?" << endl;
		cin >> sa;

		MechanicsofFluids pressure;

		pressure.setPressure(f, sa);

		cout << "The pressure of the object on the surface area is: " << getPressure() <<"Pa"<<endl;
	}

	case 3: {


		double po, g, h;

		cout << "What is the atmospheric pressure? (standard is 1.1013 * 10^5pa or 101,300pa)" << endl; 
		cin >> po;

		cout << "What is the gravity being applied on the object? (Earth's gravity is 9.81m/s)" << endl;
		cin >> g;

		cout << "What is the height of the object?" << endl;
		cin >> h;

		MechanicsofFluids pr;

		pr.setbelowFluidPressure(po, g, h);

		cout << "Pressure at a point below the surface of the fluid on the object is: " << getbelowFluidPressure() << endl;


	}



	}




}


MechanicsofFluids::~MechanicsofFluids()
{
}


//------------------------------------------------------Functions


void MechanicsofFluids::setDensity(double m, double v) {
	// m = mass, v = volume
	

	d = m / v;

	density = d;
}

double MechanicsofFluids::getDensity() {

	return density;

}

void MechanicsofFluids::setPressure(double f, double sa) {
	// f = magnitude of the normal force, a = surface area

	p = f / sa;

	pressure = p;
}

double MechanicsofFluids::getPressure() {

	return pressure;
}

void MechanicsofFluids::setbelowFluidPressure(double po, double g, double h) {   
	 //pa
	
	double pr;

	pr = po + (p * g * h);
	bFP = pr;

}

double MechanicsofFluids::getbelowFluidPressure() {


	return bFP;
}