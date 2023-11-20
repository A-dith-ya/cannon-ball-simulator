#ifndef CANNONBALL_HPP
#define CANNONBALL_HPP

#include <SFML/Graphics.hpp>

class CannonBall {
public:
    CannonBall(float x, float y);
    void draw(sf::RenderWindow& window);

private:
    sf::CircleShape ball;
};

#endif
