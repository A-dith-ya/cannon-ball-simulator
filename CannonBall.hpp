#ifndef CANNONBALL_HPP
#define CANNONBALL_HPP

#include <SFML/Graphics.hpp>
#include "Cannon.hpp"

class CannonBall {
public:
    CannonBall(Cannon& cannon);
    void draw(sf::RenderWindow& window);

private:
    sf::CircleShape ball;
};

#endif
