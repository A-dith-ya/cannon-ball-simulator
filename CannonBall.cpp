#include "CannonBall.hpp"
#include <cmath> 

CannonBall::CannonBall(Cannon& cannon) {
    ball.setRadius(10.f); 
    ball.setPosition(cannon.getBarrelPosition().x, cannon.getBarrelPosition().y);
    ball.setFillColor(sf::Color::Red);

}

void CannonBall::draw(sf::RenderWindow& window) {
    window.draw(ball);
}

void CannonBall::fireCannonBall(Cannon& cannon) {
    float velX = std::cos(cannon.getBarrelOrientation() * (3.14159265 / 180.0));
    float velY = std::sin(cannon.getBarrelOrientation() * (3.14159265 / 180.0));
    
    velocity = sf::Vector2f(velX, velY);
    ball.move(velocity);
}
