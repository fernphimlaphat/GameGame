#include "Game.h"

void Game::initWindow()
{
	this->window.create(sf::VideoMode(800, 600), "Game!!");

	//setFramlate animation smooth
	this->window.setFramerateLimit(144);
}

void Game::initPlayer()
{
	this->player = new Player;
}

Game::Game()
{
	this->initWindow();
	this->initPlayer();

}

Game::~Game()
{
	delete this->player;
}

void Game::UpdatePlayer()
{
	this->player->update();
}

void Game::RenderPlayer()
{
	this->player->render(this->window);
}

void Game::Update()
{

	//polling Event
	while (this->window.pollEvent(this->ev))
	{
		if (ev.type == sf::Event::Closed)
			this->window.close();

		else if (this->ev.type == sf::Event::KeyPressed && this->ev.key.code == sf::Keyboard::Escape)
			this->window.close();
	}
	this->UpdatePlayer();
}

void Game::Render()
{
	this->window.clear();
	//this->window.clear(sf::Color::Red);
	this->RenderPlayer();

	//rander game

	this->window.display();
}

const sf::RenderWindow& Game::getwindow() const
{
	// TODO: insert return statement here
	return this->window;
}
