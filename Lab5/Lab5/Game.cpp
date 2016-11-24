#include "Game.h"

Game::Game() : window(sf::VideoMode(800, 600), "OpenGL")
{
}

Game::~Game(){}

void Game::run()
{

	initialize();

	sf::Event event;

	while (isRunning){

		

		/*glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
		glMatrixMode(GL_MODELVIEW);*/
		/*v1 = Vector3(0.0, 2.0, -5.0);
		v2 = Vector3(-2.0, -2.0, -5.0);
		v3 = Vector3(-2.0, -2.0, -5.0);*/


		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				isRunning = false;
			}
		}
		
		draw();
		update();
	}

}

void Game::initialize()
{
	isRunning = true;

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity(); 
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0); 
	glMatrixMode(GL_MODELVIEW);
	
}

void Game::update()
{
	
	/*v1 = m1*v1;
	v2 = m1*v2;
	v3 = m1*v3;*/
	
	/*v1 = m2*v1;
	v2 = m2*v2;
	v3 = m2*v3;*/

	v1 = m3*v1;
	v2 = m3*v2;
	v3 = m3*v3;

}

void Game::draw()
{
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
	glBegin(GL_TRIANGLES); 
	{ 
		glVertex3d(v1.GetXf(), v1.GetYf(), v1.GetZf()); 
		glVertex3d(v2.GetXf(), v2.GetYf(), v2.GetZf()); 
		glVertex3d(v3.GetXf(), v3.GetYf(), v3.GetZf()); 
	} 
	glEnd();
	

	window.display();
}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}

