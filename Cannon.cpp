#include "Cannon.hpp"

Cannon::Cannon(float x, float y) {
    body.setSize(sf::Vector2f(50.f, 20.f));
    body.setPosition(x, y);
    body.setFillColor(sf::Color::Green);

    barrel.setSize(sf::Vector2f(100.f, 25.f));
    barrel.setPosition(x + 15.f, y - 10.f);
    barrel.setFillColor(sf::Color::Blue);
    barrel.setRotation(-45);
}

void Cannon::draw(sf::RenderWindow& window) {
    window.draw(body);
    window.draw(barrel);
}

sf::Vector2f Cannon::getBarrelPosition() {
    return barrel.getPosition();
}