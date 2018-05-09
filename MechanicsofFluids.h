#pragma once
#ifdef MechanicsofFluids_H_
#define MechanicsofFluids_H_
#endif  // MechanicsofFluids_H_


class MechanicsofFluids
{
public:

		MechanicsofFluids();
		~MechanicsofFluids();

		void MechanicsofFluids::setDensity(double m, double v);
		double MechanicsofFluids::getDensity();
		double density;


		void MechanicsofFluids::setPressure(double f, double sa);
		double MechanicsofFluids::getPressure();
		double pressure;

		void MechanicsofFluids::setbelowFluidPressure(double po, double g, double h);
		double MechanicsofFluids::getbelowFluidPressure();
		double bFP;

private:
	double d;
	double p;
	
};
