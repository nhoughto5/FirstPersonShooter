//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//Player.h

#ifndef PLAYER_H
#define PLAYER_H
#include <GL/glut.h>
#include <string>
#include <vector>
#include "Collision.h"
#include "CollisionPlane.h"
#include "CollisionSphere.h"
#include "Camera.h"
#include "vector3d.h"
#include "weapon.h"
class Player{
public:
	Camera cam;
	Player(const char* name, collisionsphere colSphere, float sprintSpeed, float normalSpeed, float lookSpeed, weapon* wep, int health);
	~Player();
	void update(std::vector<collisionplane>& colPlane);
	void show();
	void setPosition(vector3d pos);
	int getHealth();
	void setHealth(int h);
	void addHealth(int h);
	void setSprint(bool b);
	bool isSprinting();
	void addPoints(int num);
	int getPoints();
	int getNumWeapons();
	void jump();
	collisionsphere getCollisionSphere();
	std::string getName();
	Camera* getCamera();
	vector3d getLocation();
	void addWeapon(weapon* wep);
	void changeWeapon(int num);
	int getCurrentWeaponIndex();
	weapon* getCurrentWeapon();
	std::vector<weapon*> getWeapons();
	void haveWeapon(bool b);
	void updateWeapon();
	void reset();
private:
	std::string name;
	collisionsphere colSphere;
	int health;
	vector3d force; //Gravity
	vector3d direction;
	bool isGround, isCollision, isSprint;
	float sprintSpeed, normalSpeed;
	float lookSpeed, energy;
	int points, maxHealth;
	std::vector<weapon*> weapons;
	int currentWeapon;
	bool isArmed;
};

#endif