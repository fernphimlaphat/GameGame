
#include "Player.h"




class Game
{

private :

	sf::RenderWindow window;
	sf::Event ev;

	Player* player;

	void initWindow();
	void initPlayer();

public: 
	//Function
	Game();
	virtual ~Game();

	//Function
	void UpdatePlayer();
	void RenderPlayer();
	void Update();
	void Render();
	const sf::RenderWindow& getwindow() const;


};



