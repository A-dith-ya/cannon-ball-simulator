#ifndef CANNONBALL_HPP
#define CANNONBALL_HPP

#include <SFML/Graphics.hpp>
#include "Cannon.hpp"

class CannonBall {
public:
    CannonBall(Cannon& cannon);
    void draw(sf::RenderWindow& window);
    void fireCannonBall(Cannon& cannon);

private:
    sf::CircleShape ball;
    sf::Vector2f velocity;
};

#endif
