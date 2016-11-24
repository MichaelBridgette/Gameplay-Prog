#include <iostream>
#include<SFML\Window.hpp>
#include<SFML\OpenGL.hpp>

#include <gl/GL.h>
#include <gl/GLU.h> 

using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void draw();
	void unload();


	bool trianglesDrawing = false;
	bool pointsDrawing = false;
	bool linesDrawing = false;
	bool lineStripDrawing = false;
	bool lineLoopDrawing = false;
	bool triangleStripDrawing = false;
	bool triangleFanDrawing = false;
	bool quadsDrawing = false;
	bool quadStripDrawing = false;
	bool polygonDrawing = false;



};