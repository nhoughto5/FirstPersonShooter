//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//Camera.h

#ifndef __CAMERA_H__
#define __CAMERA_H__
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include "vector3d.h"
/*
Generic camera class by Nghia Ho
*/

class Camera
{
public:
	Camera();
	~Camera();

	void Init();
	void update();
	void setLocation(vector3d pos);
	vector3d getLocation();
	vector3d GetDirectionVector();
	void SetYaw(float angle);
	void SetPitch(float angle);

	// Navigation
	void Move(float incr);
	void Strafe(float incr);
	void RotateYaw(float angle);
	void RotatePitch(float angle);
	void setSpeed(float transSpeed, float rotSpeed);
	float getTransSpeed();
	float getRotSpeed();

private:
	vector3d position;
	vector3d direction;
	float m_yaw, m_pitch; // Various rotation angles
	float m_strafe_lx, m_strafe_lz; // Always 90 degree to direction vector
	float translationSpeed, rotationSpeed;
};

#endif
