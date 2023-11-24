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
    sf::Vector2f velocity = sf::Vector2f(1.f, 9.8f);
    float initialSpeed = 1.f;

    sf::Vector2f externalForce = sf::Vector2f(1.f, -9.8f);
    
    float dragCoefficient = 0.5f;
    float density = 1.0f;
    float area = 1.0f;

    float mass = 1.0f;
    sf::Vector2f gravity = sf::Vector2f(0.0f, 9.8f);
};

#endif
