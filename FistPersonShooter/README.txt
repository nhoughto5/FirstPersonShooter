Nick Houghton - V00151783
Elec586 Project - ZombieHunt
README

The ZombieHunt game is a basic first person shooter game. It requires openGL and GLUT installed to run. All of the source and header files
are required to be within the same directory. In the directory with the source and header files there should also be six sub directories

1. ak47
2. MapCollision
3. shotgun
4. skybox
5. weapon1
6. Zombie

These folders contain the images and animations for the weapons, terrain and AI of the game. If they are missing or in the wrong place the game
will not run. 

To build, run the make file command "make all"
To run, execute the resulting executable called 'ZombieHunt'

--Game Controls--
	-Mouse-
		CHANGE VIEW: move mouse
		FIRE: left mouse (click, do not hold)
		AIM: right mouse (click, do not hold)

	-Keyboard-
		W: move forward
		A: strafe left
		S: move backwards
		D: strafe right
		SPACE: jump
		TAB: restart game
		BASCKSPACE: Add extra zombie
		R: reload
		1: select weapon #1 (shotgun)
		2: select weapon #2 (ak47)

There are additional keyboard controls only to be used for development. These keys
are used to position a weapon in respect to the players view. At line 325 of the main
function there are a series of optional key inputs commented out. If these lines
are uncommented and the game rebuilt it will allow the repositioning of the weapon
currently selected

The process of loading the game weapons takes a considerable length of time. 
For testing purposes a basic test weapon was developed. When the program is run
A prompt will ask for whether the user is willing to wait to use the game weapons
or whether they would prefer to reduce the loading time and simply use the test weapon.
