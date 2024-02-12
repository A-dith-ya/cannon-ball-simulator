#include <SFML/Graphics.hpp>
#include "Cannon.hpp"
#include "CannonBall.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1500, 1000), "My window");

    Cannon cannon(0.f, 500.f);
    CannonBall cannonBall(cannon);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space) {
                cannonBall.setVelocity(cannon);
                cannonBall.isMoving = true;
            }
        }

        window.clear();

        cannon.draw(window);
        cannonBall.draw(window);

        if (cannonBall.isMoving) {
            cannonBall.fireCannonBall(cannon, window);
        }
        
        window.display();
    }

    return 0;
}