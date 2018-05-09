#include "MomentumandCollision.h"
#include<iostream>
#include <math.h>
#include <stdlib.h>


using namespace std;


MomentumandCollision::MomentumandCollision()
{

	int choice;

	cout << "Conservation of Momentum: Sum of the momentum before collision = sum of the momentum after collision." << endl; 

	cout << "What would you like to calculate? \n"
		"1.  Collisions where external forces are neglected.\n"
		"2.  Linear Momentum \n"
		"3.  Larger Momentum between two objects \n"
		"4.  Elastic Collision \n"

		<< endl;

	cin >> choice;

	switch (choice) {

	case 1: {

		double m1, v1i, m2, v2i, v1f, v2f;

		cout << "What is the mass of object 1?" << endl;
		cin >> m1;

		cout << "What is the initial velocity of object 1?" << endl;
		cin >> v1i;

		cout << "What is the mass of object 2?" << endl;
		cin >> m2;

		cout << "What is the initial velocity of object 2?" << endl;
		cin >> v2i;

		cout << "What is the final velocity of object 1?" << endl;
		cin >> v1f;

		cout << "What is the final velocity of object 2?" << endl;
		cin >> v2f;

		MomentumandCollision noexf;

		noexf.setCollisionNoexf(m1, v1i, m2, v2i, v1f, v2f);

		cout << "The collision rate is: "<< getCollisionNoexf() << endl;
	}

	case 2: {

		double mass, velocity;

		cout << "What is the mass of the object?" << endl;
		cin >> mass;

		cout << "What is the velocity of the object?" << endl;
		cin >> velocity;

		MomentumandCollision LM;

		LM.setLM(mass, velocity);

		cout << "The linear momentum of the object is: " << getLM() <<" kgm/s or N/s "<<endl;

	}

	case 3: {
		double m, v;

		cout << "What is the mass of the object?" << endl;
		cin >> m;

		cout << "What is the speed of the velocity of the object?" << endl;
		cin >> v; 

		MomentumandCollision mome2;

		mome2.setLargerMomentum(m, v);

		cout << "The object's momentum is: " << getLargerMomentum() <<"kgm/s"<<endl;
	}

	case 4: {
		cout << "Was the collision elastic?" << endl;

		double m1i, v1i, m2i, v2i; 

		cout << "What is the mass of object 1? " << endl;
		cin >> m1i;

		cout << "What is the velocity of object 2?" << endl;
		cin >> v1i;


		cout << "What is the mass of object 2?" << endl;
		cin >> m2i;

		cout << "What is the velocity of object 2?" << endl;
		cin >> v2i;


		MomentumandCollision com;
		MomentumandCollision kBefore2;
		MomentumandCollision kAfter2;

		com.setConservationMomentum(m1i, v1i, m2i, v2i);
		kBefore2.setKBefore(m1i, v1i, m2i, v2i);
		kAfter2.setKAfter(m1i, v1i, m2i, v2i);

		cout << "The conservation of momentum is: " << getConservationMomentum()<<"m/s" << endl;
		cout << "The kbefore: " << getKBefore() << "joules" << endl;
		cout << "The kAfter: " << getKAfter() << "joules" << endl;

		

		//Trying to figure out how to execute this. When running with this if statement I recieve error,
		//error: non-standard syntax; use & to create a pointer to member
		/*
		if (getKBefore == getKAfter) {

			cout << "The collision is elastic!" << endl;

		}
		else {

			cout << "The collision isn't elastic!" << endl;
		} 
		*/
	}



	}

}


MomentumandCollision::~MomentumandCollision()
{
}






// -------------------------------------------------------------------------------functions

//collision with no external forces
void MomentumandCollision::setCollisionNoexf(double m1, double v1i, double m2, double v2i, double v1f, double v2f) {

	double momentum1, momentum2;

	momentum1 = (m1 * v1i) + (m2 * v2i);
	momentum2 = (m1 * v1f) + (m2 * v2f);

	if (momentum1 == momentum2) {

		answer == momentum1 || momentum2;
	}
	else {

	answer = printf("Error! The collision rates on both sides aren't equal!");
		
	};

}

double MomentumandCollision::getCollisionNoexf() {

	return answer;
}


void MomentumandCollision::setLM(double m, double v) { // LM = Linear Momentum

	double mt;

	mt = m * v;
	momentum = mt;
}

double  MomentumandCollision::getLM() {

	return momentum;


}

void MomentumandCollision::setLargerMomentum(double m, double v) { //larger/smaller momentum 

	double p;

	p = m * v;

	momentum2 = p;

}


double MomentumandCollision::getLargerMomentum() {

	return momentum2;
}


void MomentumandCollision::setConservationMomentum(double m1i, double v1i, double m2i, double v2i) {

	double mome1, mome2, u; 

	mome1 = (m1i * v1i) + (m2i * v2i);
	mome2 = m1i + m2i;
	u = (mome1 / mome2);

	com = u;
}

double  MomentumandCollision::getConservationMomentum() {

	return com; //conservation of momentum

}


void MomentumandCollision::setKBefore(double m1i, double v1i, double m2i, double v2i) {

	//double u = getConservationMomentum();
	double kBefore;

	kBefore = (1 / 2)*m1i * pow(v1i, 2) + (1/2)*m2i * pow(v2i,2);
	kBefore2 = kBefore;
}


double MomentumandCollision::getKBefore() {

	return kBefore2;


}

void MomentumandCollision::setKAfter(double m1i, double v1i, double m2i, double v2i) {

	double u = getConservationMomentum();
	double kAfter;

	kAfter = (1 / 2)*m1i * pow(u, 2) + (1 / 2)*m2i * pow(u, 2);
	kAfter2 = kAfter;
}


double MomentumandCollision::getKAfter() {

	return kAfter2;


}

