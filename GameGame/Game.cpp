#include "Game.h"



void Game::Update()
{
	this->pollEvent();
}

void Game::Render()
{
	/*
	@return void
	- clear old Frame
	- render object
	- display frame in window
	- render the game object
	*/
	this->window->clear();
	this->player.Render(this->window);
	this->window->display();

}

const bool Game::running() const
{
	return this->window->isOpen();
}

void Game::intiV()
{
	this->endGame = false;
}

void Game::intiwindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 800;

	this->window = new sf::RenderWindow(this->videoMode, "My Game!!!");
}

Game::Game()
{
	this->intiV();
	this->intiwindow();
}

Game::~Game()
{
	delete this->window;
}

void Game::pollEvent()
{
	while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Escape)
				this->window->close();
				break;

		}
	}
}
