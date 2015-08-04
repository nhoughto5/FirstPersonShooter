//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//material.h

#ifndef MATERIAL_H
#define MATERIAL_H
#include <string>

class material{
public:
	material(std::string name_, float d_, float ns_, float ni_, float* Kd_, float* Ka_, float* Ks_, int illum_, int texture_);
	~material();
	std::string getName();
	float* getKd();
	float* getKa();
	float* getKs();
	float getNs();
	int getTexture();
private:
	std::string name;
	float d, ns, ni, Kd[3], Ka[3], Ks[3];
	int illum, texture;
};

#endif