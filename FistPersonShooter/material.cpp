//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//material.cpp

#include "material.h"
/*
A class to store the properties of a material used in the objloader class
*/
material::material(std::string name_, float d_, float ns_, float ni_, float* Kd_, float* Ka_, float* Ks_, int illum_, int texture_){
	name = name_;
	d = d_;
	ns = ns_;
	ni = ni_;
	Kd[0] = Kd_[0];
	Kd[1] = Kd_[1];
	Kd[2] = Kd_[2];

	Ka[0] = Ka_[0];
	Ka[1] = Ka_[1];
	Ka[2] = Ka_[2];

	Ks[0] = Ks_[0];
	Ks[1] = Ks_[1];
	Ks[2] = Ks_[2];
	illum = illum_;
	texture = texture_;
}
material::~material(){

}
std::string material::getName(){
	return name;
}
float* material::getKd(){
	return Kd;
}
float* material::getKa(){
	return Ka;
}
float* material::getKs(){
	return Ks;
}
float material::getNs(){
	return ns;
}
int material::getTexture(){
	return texture;
}