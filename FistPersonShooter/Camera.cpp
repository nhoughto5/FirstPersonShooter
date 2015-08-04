//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//Camera.cpp

#include "Camera.h"

/*
The camera class is the basic view of the player. When movement input arrives from the user the position of the camera changes
*/

//Constructor
Camera::Camera(){
	m_yaw = 0.0;
	m_pitch = 0.0;
}

//Destructor
Camera::~Camera(){

}
//The camera update function is called by the main program's display function to update the position of the camera
void Camera::update(){

	//Use the angle at which the user is looking to determine the the angle of camera translation
	direction.x = cos(m_yaw) * cos(m_pitch);
	direction.y = sin(m_pitch);
	direction.z = sin(m_yaw) * cos(m_pitch);

	m_strafe_lx = cos(m_yaw - M_PI_2); 
	m_strafe_lz = sin(m_yaw - M_PI_2);
	glLoadIdentity();
	gluLookAt(position.x, position.y, position.z, position.x + direction.x, position.y + direction.y, position.z + direction.z, 0.0, 1.0, 0.0);
}
void Camera::setSpeed(float transSpeed, float rotSpeed){
	translationSpeed = 0.05 * transSpeed;
	rotationSpeed = (M_PI / 180 * 0.2) * rotSpeed;
}
float Camera::getTransSpeed(){
	return translationSpeed;
}
float Camera::getRotSpeed(){
	return rotationSpeed;
}

void Camera::setLocation(vector3d pos){
	position.x = pos.x;
	position.y = pos.y;
	position.z = pos.z;
	update();
}

vector3d Camera::getLocation(){
	return position;
}

vector3d Camera::GetDirectionVector(){
	return direction;
}

void Camera::Move(float incr){
	float lx = cos(m_yaw)*cos(m_pitch);
	float ly = sin(m_pitch);
	float lz = sin(m_yaw)*cos(m_pitch);

	position.x = position.x + incr*lx;
	position.z = position.z + incr*lz;

	update();
}

void Camera::Strafe(float incr){
	position.x = position.x + incr*m_strafe_lx;
	position.z = position.z + incr*m_strafe_lz;
	update();
}

void Camera::RotateYaw(float angle){
	m_yaw += angle;
	update();
}

void Camera::RotatePitch(float angle){
	const float limit = 89.0 * M_PI / 180.0;

	m_pitch -= angle;

	if (m_pitch < -limit)
		m_pitch = -limit;

	if (m_pitch > limit)
		m_pitch = limit;

	update();
}

void Camera::SetYaw(float angle){
	m_yaw = angle;
	update();
}

void Camera::SetPitch(float angle){
	m_pitch = angle;
	update();
}
