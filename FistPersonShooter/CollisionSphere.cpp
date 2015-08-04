//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//CollisionSphere.cpp

#include "CollisionSphere.h"
/*
A class which defines a non rendered sphere used in collision detection.
Any zombie or player is given a collisionsphere.
*/
collisionsphere::collisionsphere()
{
	center.x = center.y = center.z = 0;
	r = 0;
}

collisionsphere::collisionsphere(vector3d c, float r2)
{
	center = c;
	r = r2;
}
