#pragma once
#ifdef MomentumandCollision
#define MomentumandCollision
#endif  // MomentumandCollision
class MomentumandCollision
{
public:
	MomentumandCollision();

	void setCollisionNoexf(double m1, double v1i, double m2, double v2i, double v1f, double v2f);
	double MomentumandCollision::getCollisionNoexf();

	void MomentumandCollision::setLM(double m, double v);
	double  MomentumandCollision::getLM();

	void MomentumandCollision::setLargerMomentum(double m, double v);
	double MomentumandCollision::getLargerMomentum();
	 
	void MomentumandCollision::setConservationMomentum(double m1i, double v1i, double m2i, double v2i);
	double  MomentumandCollision::getConservationMomentum();

	void MomentumandCollision::setKBefore(double m1i, double v1i, double m2i, double v2i);
	double MomentumandCollision::getKBefore();

	void MomentumandCollision::setKAfter(double m1i, double v1i, double m2i, double v2i);
	double MomentumandCollision::getKAfter();



	~MomentumandCollision();




private:
	double answer;
	double momentum;
	double momentum2;
	double com; //conservation of momentum
	double kBefore2;
	double kAfter2;
};

