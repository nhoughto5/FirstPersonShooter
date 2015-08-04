//Nick Houghton - V00151783
//Elec586 Project - ZombieHunt
//face.cpp

#include "face.h"
/*
A class which stores a face object used in the objloader class to aid in the loading and storage of .obj files.
*/
face::face(int faceNum, int f1, int f2, int f3, int f4, int tCord1, int tCord2, int tCord3, int tCord4, int mat){
	faceNumber = faceNum;
	vertexNumbers[0] = f1;
	vertexNumbers[1] = f2;
	vertexNumbers[2] = f3;
	vertexNumbers[3] = f4;
	textCord1 = tCord1;
	textCord2 = tCord2;
	textCord3 = tCord3;
	textCord4 = tCord4;
	material = mat;
	quad = true;
}
face::face(int faceNum, int f1, int f2, int f3, int tCord1, int tCord2, int tCord3, int mat){
	faceNumber = faceNum;
	vertexNumbers[0] = f1;
	vertexNumbers[1] = f2;
	vertexNumbers[2] = f3;
	textCord1 = tCord1;
	textCord2 = tCord2;
	textCord3 = tCord3;
	material = mat;
	quad = false;
}
int face::getMaterial(){
	return material;
}
const bool face::isQuad(){
	return quad;
}
const int* face::getVertexNumbers(){
	return vertexNumbers;
}
int face::gettextCord1(){
	return textCord1;
}
int face::gettextCord2(){
	return textCord2;
}
int face::gettextCord3(){
	return textCord3;
}
int face::gettextCord4(){
	return textCord4;
}
int face::getFaceNumber(){
	return faceNumber;
}