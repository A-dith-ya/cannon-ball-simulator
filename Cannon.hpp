#ifndef CANNON_HPP
#define CANNON_HPP

#include <SFML/Graphics.hpp>

class Cannon {
public:
    Cannon(float x, float y);
    void draw(sf::RenderWindow& window);

private:
    sf::RectangleShape body;
    sf::RectangleShape barrel;
};

#endif
