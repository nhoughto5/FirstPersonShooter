//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//CollisionSphere.h

#ifndef COLLISIONSPHERE_H
#define COLLISIONSPHERE_H
#include "vector3d.h"
class collisionsphere{
public:
	float r;
	vector3d center;
	collisionsphere(vector3d c, float rad);
	collisionsphere();
};

#endif
