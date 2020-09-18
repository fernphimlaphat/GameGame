#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<Windows.h>

#include "player.h"

#ifndef Game_h
#define Game_h




class Game
{
public:
    Game();
    virtual ~Game();
    void pollEvent(); //sfmlEvent
    void Update();
    void Render();

    //const
    const bool running() const; 


private:

// value
    //window
    sf::RenderWindow* window;
    sf::VideoMode videoMode;
    sf::Event ev; //add
    bool endGame;

    Player player;

    //pri.Function
    void intiV();
    void intiwindow();

};

#endif // !Game_hpp


