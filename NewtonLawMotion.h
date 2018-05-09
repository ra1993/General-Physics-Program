#pragma once
class NewtonLawMotion
{
public:
	NewtonLawMotion();
	~NewtonLawMotion();

	void NewtonLawMotion::setFnet(double m, double a);
	double NewtonLawMotion::getFnet();

	void NewtonLawMotion::setacReacF(double f1);
	double NewtonLawMotion::getacReacF();

	void NewtonLawMotion::setweight(double a);
	double NewtonLawMotion::getweight();

	void NewtonLawMotion::setLUG(double m1, double m2, double r);
	double NewtonLawMotion::getLUG();

private:

	double forceNet;
	double force2;
	double weight;
	double LUG;

};

