//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//texture.cpp
#include "texture.h"

textureCoord::textureCoord(float a, float b){
	u = a;
	v = b;
}
textureCoord::~textureCoord(){

}
float textureCoord::getU(){
	return u;
}
float textureCoord::getV(){
	return v;
}