#include<iostream>
#include<SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow game(sf::VideoMode(800,600),"Game");
    while(game.isOpen()) {
        sf::Event event;
        while (game.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                game.close();
        }
        game.clear(sf::Color::Black);
        game.display();
    }
return 0;
}