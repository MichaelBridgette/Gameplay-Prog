#include <iostream>
#include<SFML\Window.hpp>
#include<SFML\OpenGL.hpp>

#include <gl/GL.h>
#include <gl/GLU.h> 

#include"Vector3.h"
#include"Matrix3.h"

using namespace std;
//using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	sf::Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void draw();
	void unload();

	Vector3 v1 = Vector3(0.0f, 1.0f, -5.0f);
	Vector3 v2 = Vector3(-1.0f, -1.0f, -5.0f);
	Vector3 v3 = Vector3(1.0f, 0.0f, -5.0f);

	Matrix3 m1 = Matrix3().RotationZ(0.1);
	



};