#pragma once
#ifdef MotionParticles_H_
#define MotionParticles_H_
#endif  // MotionParticles_H_


// One Dimensional Motion of Particles/Find position at all times
//header file for all classes function prototypes and variable declarations


class MotionParticles
{
public:
	MotionParticles();
	~MotionParticles();

	double chooseFunction();

	void setavgVelocity(double x1, double x2, double t1, double t2);
	double getavgVelocity();

	void setavgAcceleration(double v1, double v2, double t1, double t2);
	double getavgAcceleration();

	void MotionParticles::setavgSpeed(double d, double t);
	double MotionParticles::getavgSpeed();

private:

	double avgV;
	double avgAcc;
	double avgSpeed;
};