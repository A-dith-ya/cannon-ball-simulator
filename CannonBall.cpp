#include "CannonBall.hpp"

CannonBall::CannonBall(float x, float y) {
    ball.setRadius(10.f); 
    ball.setPosition(x, y);
    ball.setFillColor(sf::Color::Red); 
}

void CannonBall::draw(sf::RenderWindow& window) {
    window.draw(ball);
}
