//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//face.h

#ifndef FACE_H
#define FACE_H
#include <vector>
class face{
public:
	face(int faceNum, int f1, int f2, int f3, int f4, int tCord1, int tCord2, int tCord3, int tCord4, int mat);
	face(int faceNum, int f1, int f2, int f3, int tCord1, int tCord2, int tCord3, int mat);
	const bool isQuad();
	const int* getVertexNumbers();
	int getMaterial();
	int gettextCord1();
	int gettextCord2();
	int gettextCord3();
	int gettextCord4();
	int getFaceNumber();
private:
	int faceNumber;
	int vertexNumbers[4];
	int textCord1, textCord2, textCord3, textCord4;
	int material;
	bool quad;
};

#endif