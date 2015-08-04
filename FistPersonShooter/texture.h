//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//texture.h

#ifndef TEXTURE_H
#define TEXTURE_H

class textureCoord{
public:
	textureCoord(float a, float b);
	~textureCoord();
	float getU();
	float getV();
private:
	float u, v;
};


#endif