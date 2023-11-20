#include "CannonBall.hpp"

CannonBall::CannonBall(Cannon& cannon) {
    ball.setRadius(10.f); 
    ball.setPosition(cannon.getBarrelPosition().x, cannon.getBarrelPosition().y);
    ball.setFillColor(sf::Color::Red); 
}

void CannonBall::draw(sf::RenderWindow& window) {
    window.draw(ball);
}
