//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//level.cpp

#include "level.h"
/*
A class which stores the relevant information regarding a level
i.e the layout of the terrain, the collision planes and spawn points
*/
level::level(const char* c, int map, std::vector<collisionplane> colPlane, std::vector<vector3d>& spawnPoints){
	mesh = map;
	colPlane_ = colPlane;
	spawnPoints_ = spawnPoints;
	name = c;
}

level::~level(){

}
void level::update(){

}
void level::show(){
	glCallList(mesh);
	glFlush();
}
std::vector<collisionplane>& level::getCollisionPlanes(){
	return colPlane_;
}
std::string& level::getName(){
	return name;
}
void level::change(const char* c, int map, std::vector<collisionplane> colPlane, std::vector<vector3d>& spawnPoints){
	mesh = map;
	colPlane_ = colPlane;
	spawnPoints_ = spawnPoints;
	name = c;
}
std::vector<vector3d>& level::getSpawnPoint(){
	return spawnPoints_;
}