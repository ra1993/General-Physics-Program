#include "EnergyandPower.h"
#include<iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;


EnergyandPower::EnergyandPower()
{

	int choice;

	cout << "What would you like to calculate? \n"
		"1. Kinetic Energy \n"
		"2. Network \n"
		"3. Work Force \n"
		"4. Frictional Force \n"
		"5. Net Force \n"
		 << endl;

	cin >> choice;

	switch (choice) {

	case 1: {

		double m, v;

		cout << "What is the mass of the object? (in kg)" << endl;
		cin >> m;

		cout << "What is the speed of the object?" << endl;
		cin >> v;

		EnergyandPower ke;

		ke.setkineticEnergy(m, v);

		cout << "The kinetic energy of the object is: " << ke.getkineticEnergy()<< " joules" << endl;

	};

	case 2: {

		double m, v, vf, vi;

		cout << "What is the mass of the object? (in kg)" << endl;
		cin >> m;

		cout << "What is the speed of the object?" << endl;
		cin >> v;

		cout << "What is vf?" << endl;
		cin >> vf;

		cout << "What is vi? (initial velocity)" << endl; 
		cin >> vi;

		EnergyandPower wNet;

		wNet.setWorkEnergy(m, v, vf, vi);

		cout << "The network of the pushed object is: " << wNet.getWorkEnergy() << "joules" <<endl;
	}




	case 3: {
		double theta, nf, d;

		cout << "What is the degree of displacement of the object?" << endl;
		cin >> theta;

		cout << "What is the net force of the object (mass x acceleration)?" << endl;
		cin >> nf;

		cout << "What is the distance of the displacement of the object?" << endl;
		cin >> d;


		EnergyandPower wf;
		wf.setworkForce(theta, nf, d);

		cout << "The work force of the object is:" << wf.getworkForce() << " joules" << endl;

	}


	case 4: {

		double m1, v1, m2, v2;

		cout << "What is the mass on object 1?" << endl;
		cin >> m1;

		cout << "What is the speed of object 1?" << endl;
		cin >> v1;

		cout << "What is the mass of object 2?" << endl;
		cin >> m2;

		cout << "What is the speed of object 2?" << endl;
		cin >> v2;

		EnergyandPower Fforce;

		Fforce.setFriction(m1, v1, m2, v2);

		cout << "The work done by the frictional forces are: "<<Fforce.getFriction() << " joules" << endl;



	};
	
	case 5: {

		double m, a;

		cout << "What is the mass of the object?" << endl;
		cin >> m;

		cout << "What is the velocity of the acceleration?" << endl;
		cin >> a;

		EnergyandPower fNet;

		fNet.setNetForce(m, a);

		cout << "The Net Force of the object is: " << fNet.getNetForce() <<"Newtons"<< endl;

	}


	};


}


EnergyandPower::~EnergyandPower()
{
}





// ------------------------------------------------------------------------------Functions

void EnergyandPower::setkineticEnergy(double m, double v) {    //fix outputs

	double ke;                        //m = mass and v = speed of mass

	ke = ((1 / 2)*m) * pow(v, 2);

	kinenergy = ke;

}

double EnergyandPower::getkineticEnergy() {

	return kEn; 

}

void EnergyandPower::setWorkEnergy(double m, double v, double vf, double vi) {
										//formula for when an object is pushed
										//m = mass, v = speed of velocity, cke = change in kinetic energy

	double wNet;

	wNet = ((1/2) * m) * pow(vf, 2);

	workNet = wNet;
}


double EnergyandPower::getWorkEnergy() {


	return workEnergy;


}


void EnergyandPower::setworkForce(double theta, double NF, double d) {

	//theta = degrees, NF = net force, d = distance

	double wf;

	wf = (cos(theta)) * NF * d;
	workforce = wf;


}


double EnergyandPower::getworkForce() {

	return wforce;
}


void EnergyandPower::setFriction(double m1, double v1, double m2, double v2) {
							  // m1 = mass1, v1 = speed1, m2 = mass2, v2 = speed2
	double meI, meF, fForce;  //meI = initial force, meF = final force
	double g = 9.81;		 //add friction data to case switch statement, figure out the y variable

	meI = (.5*m1) * pow(v1, 2) + m1*g;
	meF = (.5 * m2)* pow(v2, 2) + m2 *g;

	fForce = meF - meI;
	fricForce = fForce;
}



double EnergyandPower::getFriction() {

	return frictionForce;
}

void EnergyandPower::setNetForce(double m, double a) {
	double fNet;		// m = mass, a = acceleration

	fNet = m * a;

	netForce = fNet;
}

double EnergyandPower::getNetForce() {

	return nForce;



}