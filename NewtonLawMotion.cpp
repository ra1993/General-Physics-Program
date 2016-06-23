#include<iostream>
#include <math.h>
#include <stdlib.h>
#include "NewtonLawMotion.h"

using namespace std;

NewtonLawMotion::NewtonLawMotion()
{
	;
	int choice;
	
	cout << "What would you like to calculate? \n" 
		"1. Fnet(Net Force) \n"
		"2. Action-Reaction Law \n"
		"3. Weight \n" 
		"4. Universal Law of Gravitation of 2 Objects \n"<< endl;



	cin >> choice; 
	
	switch(choice) {

	case 1: {
		double a, b, c;

		cout << "What is the mass of the object?" << endl;
		cin >> a;

		cout << "What is the acceleration of the object?" << endl;
		cin >> b;

		NewtonLawMotion nlm;
		nlm.setFnet(a, b);

		cout << "The Fnet(net force) of the object is: " << nlm.getFnet() << "N"<< endl;

	}

			break;

	case 2: {
		double a, b, c;

		cout << "The Action-Reaction Law states that if Object A exterts a force on Object B, then Object B exerts \n"
			"then Object B exerts a force on Object A." << endl;



		cout << "What is the force of Object A on B?" << endl;
		cin >> a;


		cout << endl;

		NewtonLawMotion nlm2;
		nlm2.setacReacF(a);


		cout << "The force of Object B on Object A is: " << nlm2.getacReacF() << "N" << endl;
	}


		break;

		

	case 3: {
		double a, b, c;

		cout << "What is the mass of the object?" << endl;
		cin >> a;

		NewtonLawMotion weight;
		weight.setweight(a);

		double fG = weight.getweight();

		cout << "The weight of the object is: " << fG << endl;

		



	}
	
	case 4: {
		double a, b, c;

		cout << "The Law of Universal Gravitation deals with the motin of two bodies. An example would be the motion\n"
			"of the moon around the Earth." << endl;

		cout << endl;

		cout << "What is the mass of object 1?" << endl;
		cin >> a;

		cout << "What is the mass of object 2?" << endl;
		cin >> b;

		cout << "What is the distance between the two objects?" << endl;
		cin >> c;

		NewtonLawMotion LUG;
		LUG.setLUG(a, b, c);

		cout << "The magnitude of the gravitational force of object 1 on object 2 is: " << LUG.getLUG() <<"N"<<endl;

	}


	}






}


NewtonLawMotion::~NewtonLawMotion() 
{}


// ------------------------------------------------------------------------------------------Functions

void NewtonLawMotion::setFnet(double m, double a) {     //Fnet(net force of object) =  mass of object * acceleration of object 

	double fNet;

	fNet = m * a; 
	forceNet = fNet;

}

double NewtonLawMotion::getFnet() {

	return forceNet;

}

// -------------------------------------------------------------------------------Action-Reaction Force

void NewtonLawMotion::setacReacF (double f1){
	double f2;

	f2 = f1;

	force2 = f2;

}

double NewtonLawMotion::getacReacF() {

	return force2;

}

// ----------------------------------------------------------------------------Weight


void NewtonLawMotion:: setweight(double a) {

	double fG;

	fG = a * 9.81;

	weight = fG;

}

double NewtonLawMotion::getweight() {   //fix return

	return weight;

}


//------------------------------------------------------------------------Law of Universal Gravitation

void NewtonLawMotion::setLUG(double m1, double m2, double r) {

	double F;
	double G = 6.67 * pow(10, -11);  // Nm^2/kg^2 Universal Gravitation Constant 

	F = G * m1 *m2 / pow(r, 2);

	LUG = F;


}

double NewtonLawMotion::getLUG() {

	return LUG;

}