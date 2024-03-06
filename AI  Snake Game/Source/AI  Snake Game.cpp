#include <iostream>

#include <SFML/Graphics.hpp>

int main()
{
    // Initialise window object
    sf::RenderWindow window(sf::VideoMode(500, 500), "AI Snake Game", sf::Style::Titlebar | sf::Style::Close);

    // Initialise game objects
    sf::Clock clock;
    float deltaTime = 0;

    // Handle all window events
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;

                default:
                    break;
            }
        }

        //Calculate delta time
        deltaTime = clock.restart().asSeconds();

        // Clear window with black color
        window.clear(sf::Color::Black);

        window.display();
    }

    return 0;
}
