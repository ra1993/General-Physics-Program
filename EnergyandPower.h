#pragma once
#ifdef EnergyandPower_H_
#define EnergyandPower_H_
#endif  // EnergyandPower_H_


class EnergyandPower
{
public:
	EnergyandPower();
	~EnergyandPower();


	void EnergyandPower::setkineticEnergy(double m, double v);
	double EnergyandPower::getkineticEnergy();
	double kEn = kinenergy;

	void EnergyandPower::setWorkEnergy(double m, double v, double vf, double vi);
	double EnergyandPower::getWorkEnergy();
	double workEnergy = workNet;

	void EnergyandPower::setworkForce(double theta, double NF, double d);
	double EnergyandPower::getworkForce();
	double wforce = workforce;

	
	void EnergyandPower::setFriction(double m1, double v1, double m2, double v2);
	double EnergyandPower::getFriction();
	double frictionForce = fricForce;

	void EnergyandPower::setNetForce(double m, double a);
	double EnergyandPower::getNetForce();
	double nForce = netForce;

private:

	double kinenergy;
	double workNet;
	double workforce;
	double fricForce;
	double netForce;
};

