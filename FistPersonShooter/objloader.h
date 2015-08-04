//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//objloader.h

#ifndef OBJLOADER_H
#define OBJLOADER_H
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <GL/glut.h>
#include "vector3d.h"
#include "face.h"
#include "material.h"
#include "texture.h"
#include "CollisionPlane.h"
#include <sstream>

class objloader{
public:
	objloader();
	~objloader();
	void load(std::string fileName, std::vector<collisionplane>* collplane);
	int getLoadNumber();

private:
	std::ifstream objFile;
	std::ifstream matFile;
	std::string line;
	std::string line2;
	int mostRecentMaterial;
	int faceNumber, loadNumber;
	bool loaded, subdirectory;
	std::string test, materialPath;
	std::vector<std::string> v;
	std::vector<vector3d*> vertex;
	std::vector<vector3d*> normals;
	std::vector<face*> faces;
	std::vector<std::string> loadedTextures;
	std::vector<GLuint> loadedTexturesNum;
	std::vector<textureCoord*> textureCoordinate;
	std::vector<material*> materials;
	void getFace(std::vector<std::string> v, int material, std::vector<collisionplane>* collplane);
	void printString(std::vector<std::string> v);
	unsigned int split(const std::string &txt, std::vector<std::string> &strs, std::string delimiter);
	bool isMaterial, isNormals, isTextured, isCollision;
	void drawModel();
	void clean();
	std::vector<std::string> splitSpace(const std::string &s);
	void setMaterialIndex(std::string materialName);
	void loadMaterials(std::string fileName);
	bool contains(std::string string, std::string delimiter);
};


#endif