#include "Game.h"

Game::Game() : window(VideoMode(800, 600), "OpenGL")
{
}

Game::~Game(){}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning){

		

		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
		glMatrixMode(GL_MODELVIEW);

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}

}

void Game::initialize()
{
	isRunning = true;
}

void Game::update()
{
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
	{
		trianglesDrawing = true;
		pointsDrawing = false;
		linesDrawing = false;
		lineStripDrawing = false;
		lineLoopDrawing = false;
		triangleStripDrawing = false;
		triangleFanDrawing = false;
		quadsDrawing = false;
		quadStripDrawing = false;
		polygonDrawing = false;

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
	{
		trianglesDrawing = false;
		pointsDrawing = true;
		linesDrawing = false;
		lineStripDrawing = false;
		lineLoopDrawing = false;
		triangleStripDrawing = false;
		triangleFanDrawing = false;
		quadsDrawing = false;
		quadStripDrawing = false;
		polygonDrawing = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
	{
		trianglesDrawing = false;
		pointsDrawing = false;
		linesDrawing = true;
		lineStripDrawing = false;
		lineLoopDrawing = false;
		triangleStripDrawing = false;
		triangleFanDrawing = false;
		quadsDrawing = false;
		quadStripDrawing = false;
		polygonDrawing = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
	{
		trianglesDrawing = false;
		pointsDrawing = false;
		linesDrawing = false;
		lineStripDrawing = true;
		lineLoopDrawing = false;
		triangleStripDrawing = false;
		triangleFanDrawing = false;
		quadsDrawing = false;
		quadStripDrawing = false;
		polygonDrawing = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
	{
		trianglesDrawing = false;
		pointsDrawing = false;
		linesDrawing = false;
		lineStripDrawing = false;
		lineLoopDrawing = true;
		triangleStripDrawing = false;
		triangleFanDrawing = false;
		quadsDrawing = false;
		quadStripDrawing = false;
		polygonDrawing = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
	{
		trianglesDrawing = false;
		pointsDrawing = false;
		linesDrawing = false;
		lineStripDrawing = false;
		lineLoopDrawing = false;
		triangleStripDrawing = true;
		triangleFanDrawing = false;
		quadsDrawing = false;
		quadStripDrawing = false;
		polygonDrawing = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
	{
		trianglesDrawing = false;
		pointsDrawing = false;
		linesDrawing = false;
		lineStripDrawing = false;
		lineLoopDrawing = false;
		triangleStripDrawing = false;
		triangleFanDrawing = true;
		quadsDrawing = false;
		quadStripDrawing = false;
		polygonDrawing = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
	{
		trianglesDrawing = false;
		pointsDrawing = false;
		linesDrawing = false;
		lineStripDrawing = false;
		lineLoopDrawing = false;
		triangleStripDrawing = false;
		triangleFanDrawing = false;
		quadsDrawing = true;
		quadStripDrawing = false;
		polygonDrawing = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num8))
	{
		trianglesDrawing = false;
		pointsDrawing = false;
		linesDrawing = false;
		lineStripDrawing = false;
		lineLoopDrawing = false;
		triangleStripDrawing = false;
		triangleFanDrawing = false;
		quadsDrawing = false;
		quadStripDrawing = true;
		polygonDrawing = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
	{
		 trianglesDrawing = false;
		 pointsDrawing = false;
		 linesDrawing = false;
		 lineStripDrawing = false;
		 lineLoopDrawing = false;
		 triangleStripDrawing = false;
		 triangleFanDrawing = false;
		 quadsDrawing = false;
		 quadStripDrawing = false;
		 polygonDrawing = true;
	}
}

void Game::draw()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//0
	if (trianglesDrawing == true)
	{
		glBegin(GL_TRIANGLES);
		{
			glVertex3f(0.0, 2.0, -30.0);
			glVertex3f(-2.0, -2.0, -30.0); 
			glVertex3f(2.0, -2.0, -30.0);

		}
		glEnd();
	}

	//1
	if (pointsDrawing == true)
	{
		glBegin(GL_POINTS);
		{
			glVertex3d(1.0f, 1.0f, 1.0f);
		}
		glEnd();
	}

	//2
	if (linesDrawing == true)
	{
		glBegin(GL_LINES);
		{
			glVertex3d(-0.5, -1.0, -30.0);
			glVertex3d(0.5, -1.0, -30.0);
		}
		glEnd();
	}

	//3
	if (lineStripDrawing == true)
	{
		glBegin(GL_LINE_STRIP);
		{
			glVertex3d(-0.5, -2.0, -30.0);
			glVertex3d(0.5, -2.0, -30.0);
			glVertex3d(0.2, -3.0, -30.0);
		}
		glEnd();
	}

	//4
	if (lineLoopDrawing == true)
	{
		glBegin(GL_LINE_LOOP);
		{
			glVertex3d(-0.5, -5.0, -30.0);
			glVertex3d(1.0, -8.0, -30.0);
			glVertex3d(1.0, -5.0, -30.0);
			glVertex3d(0.5, -8.0, -30.0);

		}
		glEnd();
	}

	//5
	if (triangleStripDrawing == true)
	{
		glBegin(GL_TRIANGLE_STRIP);
		{
			glVertex3d(-5, -5, -30);
			glVertex3d(0, 5, -30);
			glVertex3d(5, -5, -30);

			glVertex3d(10, 5, -30);
			glVertex3d(15, -5, -30);
			glVertex3d(20, 5, -30);
			
		}
		glEnd();
	}

	//6
	if (triangleFanDrawing == true)
	{
		glBegin(GL_TRIANGLE_FAN);
		{
			glVertex3d(0, 0, -30);
			glVertex3d(5, 5, -30);
			glVertex3d(3, 7, -30);
			glVertex3d(0, 10, -30);
			glVertex3d(-3, 7, -30);
			glVertex3d(-5, 5, -30);


		}
		glEnd();
	}

	//7
	if (quadsDrawing == true)
	{
		glBegin(GL_QUADS);
		{
			glVertex3d(0,0,-30);
			glVertex3d(0, 5, -30);
			glVertex3d(5, 5, -30);
			glVertex3d(5, 0, -30);

		}
		glEnd();
	}

	//8
	if (quadStripDrawing == true)
	{
		glBegin(GL_QUAD_STRIP);
		{
			glVertex3d(0, 0, -30);
			glVertex3d(0, 5, -30);
			glVertex3d(5, 0, -30);
			glVertex3d(5, 5, -30);

			glVertex3d(10, 0, -30);
			glVertex3d(10, 10, -30);
			
		}
		glEnd();
	}

	//9
	if (polygonDrawing == true)
	{


		glBegin(GL_POLYGON);
		{
			glVertex3d(0, 0, -30);
			glVertex3d(5, -0.8, -30);
			glVertex3d(5.5, 3, -30);
			glVertex3d(6, -0.3, -30);
			glVertex3d(11, 6, -30);
			glVertex3d(5, 7, -30);
			glVertex3d(9, 3.65, -30);
			glVertex3d(2, 8, -30);

		}
		glEnd();
	}

	window.display();
}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}

