//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//level.h

#ifndef LEVEL_H
#define LEVEL_H
#include <vector>
#include <GL/glut.h>
#include <iostream>
#include <string>
#include "CollisionPlane.h"
#include "vector3d.h"

class level{
public:
	level(const char* c, int map, std::vector<collisionplane> colPlane, std::vector<vector3d>& spawnPoints);
	~level();
	void update();
	void show();
	std::vector<collisionplane>& getCollisionPlanes();
	std::string& getName();
	void change(const char* c, int map, std::vector<collisionplane> colPlane, std::vector<vector3d>& spawnPoints);
	std::vector<vector3d>& getSpawnPoint();

private:
	int mesh;
	std::vector<collisionplane> colPlane_;
	std::vector<vector3d> spawnPoints_;
	std::string name;

};

#endif