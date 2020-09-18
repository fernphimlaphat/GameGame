#include "Player.h"

void Player::initV()
{
}

void Player::initShape()
{
	this->shap.setFillColor(sf::Color::Blue);
	this->shap.setSize(sf::Vector2f(100.f, 50.f));
}
Player::Player()
{
	this->initV();
	this->initShape();

}

Player::~Player()
{
}

void Player::Update()
{
}

void Player::Render(sf::RenderTarget* target)
{
	target->draw(this->shap);
}
