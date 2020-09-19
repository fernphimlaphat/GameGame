#include "Player.h"

void Player::initV()
{
	this->animationState = Player_animation_state::IDLE;
}

void Player::initTexture()
{
	if (!this->texture1.loadFromFile("img/Player1.png"))
	{
		printf("Not Found");
	}
}

void Player::initSpite()
{
	this->sprite1.setTexture(this->texture1);
	this->CurrentFrame = sf::IntRect(0, 0, 50, 75);

	this->sprite1.setTextureRect(this->CurrentFrame);

	//scale is add or fall width and hight of picture
	this->sprite1.setScale(1.3f, 1.3f);
}

void Player::Animation()
{
	//animation not กระตุก
	this->AnimationTime.restart();
}

Player::Player()
{
	this->initV();
	this->initTexture();
	this->initSpite();
	this->Animation();
}

Player::~Player()
{
}

void Player::updateMove()
{
	this->animationState = Player_animation_state::IDLE;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		//left
		this->sprite1.move(-1.f, 0.f);
		this->animationState = Player_animation_state::Move_left;
	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{ 
		//right
		this->sprite1.move(1.f, 0.f);
		this->animationState = Player_animation_state::Move_right;

	}  

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		//top
		this->sprite1.move(0.f, -1.f);
		this->animationState = Player_animation_state::Move_top;

	}

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		//down
		this->sprite1.move(0.f, 1.f);
		this->animationState = Player_animation_state::Move_down;

	}
}

void Player::updateAnimation()
{
	/*if (this->animationState == Player_animation_state::IDLE)
	{

			/*
		//ออโต้โชว์อนิเมชัน

		if (this->AnimationTime.getElapsedTime().asSeconds() >= .3f)
		this->currentFrame.left += 50.f;
		if(this->currentFrame.left >= 200.f)
		{
		this->currentFrame.left = 0; เลื่อนอนิเมชั่นตามแกน  X
		this->currentFrame.top = 0;  ในแกน Y ที่เท่าไหร่ ที่จะให้แสดงอัติโนมัต
		} 

		


		if (this->AnimationTime.getElapsedTime().asSeconds() >= .3f)
		{

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			{
				this->CurrentFrame.left += 50.f;
				if (CurrentFrame.left >= 200.f)
					CurrentFrame.left = 0;
				CurrentFrame.top = 75;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			{
				this->CurrentFrame.left += 50.f;
				if (CurrentFrame.left >= 200.f)
					CurrentFrame.left = 0;
				CurrentFrame.top = 150;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			{
				this->CurrentFrame.left += 50.f;
				if (CurrentFrame.left >= 200.f)
					CurrentFrame.left = 0;
				CurrentFrame.top = 0;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			{
				if (CurrentFrame.left >= 200.f)
					CurrentFrame.left = 0;
				CurrentFrame.top = 225;
			}


			this->AnimationTime.restart();
			this->sprite1.setTextureRect(this->CurrentFrame);
		}
	}*/
	 
	if(this->animationState == Player_animation_state::Move_right)
	{
		if (this->AnimationTime.getElapsedTime().asSeconds() >= .2f)
		{

			this->CurrentFrame.left += 50.f;
			this->CurrentFrame.top = 150.f;
			if (CurrentFrame.left >= 200.f)
			{
				this->CurrentFrame.left = 0;
			}

			this->AnimationTime.restart();
			this->sprite1.setTextureRect(this->CurrentFrame);
		}
		
		

	}
	else
	{
	
		
			this->CurrentFrame.left = 0.f;
			this->CurrentFrame.top = 150.f;

			this->AnimationTime.restart();
			this->sprite1.setTextureRect(this->CurrentFrame);

		



	}

}

void Player::update()
{
	this->updateMove();
	this->updateAnimation();
}

void Player::render(sf::RenderTarget& target)
{
	target.draw(this->sprite1);
}
