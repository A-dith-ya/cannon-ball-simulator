#include "CannonBall.hpp"
#include <cmath> 
#include <iostream>

CannonBall::CannonBall(Cannon& cannon) {
    ball.setRadius(10.f); 
    ball.setPosition(cannon.getBarrelPosition().x, cannon.getBarrelPosition().y);
    ball.setFillColor(sf::Color::Red);
}

void CannonBall::draw(sf::RenderWindow& window) {
    window.draw(ball);
}

void CannonBall::setVelocity(Cannon& cannon) {
    float velX = initialSpeed * std::cos(cannon.getBarrelOrientation() * (3.14159265 / 180.0));
    float velY = initialSpeed * std::sin(cannon.getBarrelOrientation() * (3.14159265 / 180.0));

    velocity = sf::Vector2f(velX, velY);

    sf::Vector2f dragForce = -0.5f * dragCoefficient * density * area * velocity;
    sf::Vector2f totalForce = externalForce + dragForce + mass * gravity;
    sf::Vector2f acceleration = totalForce / mass;
    velocity += acceleration;
}

void CannonBall::fireCannonBall(Cannon& cannon, sf::RenderWindow& window) {
    ball.move(velocity);

    if (ball.getPosition().x < 0 || ball.getPosition().x > window.getSize().x || ball.getPosition().y < 0 || ball.getPosition().y > window.getSize().y) {
        ball.setPosition(cannon.getBarrelPosition().x, cannon.getBarrelPosition().y);

        isMoving = false;
    };
}
