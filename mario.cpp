#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mario Bros");//VISUAL
    window.clear(sf::Color::Blue);

    sf::RectangleShape player(sf::Vector2f(10.0f, 50.0f)); //cuadrado//VISUAL
    player.setFillColor(sf::Color::Red);
    player.setPosition(0.0f, 350.0f);

    sf::RectangleShape platform(sf::Vector2f(20000.0f, 20.0f));//piso //VISUAL
    platform.setFillColor(sf::Color::Green);
    platform.setPosition(00.0f, 400.0f);

    
    while (window.isOpen()) //visual
    {
        Event event;
        while (window.pollEvent(event))//visual
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))//visual
        {

            player.move(-5.0f, 0.0f);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))//visual
        {
            player.move(5.0f, 0.0f);
        }

        if (player.getGlobalBounds().intersects(platform.getGlobalBounds()))//visual
        {
            // Realiza alguna acción cuando el jugador colisiona con la plataforma
        }

        window.clear();
        window.draw(player);
        window.draw(platform);
        window.display();
    }

    return 0;
}

