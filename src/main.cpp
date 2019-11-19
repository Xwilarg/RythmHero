#include "scenes.hpp"

int main()
{
    rythm::Scene menuScene = rythm::CreateMenuScene();
    sf::RenderWindow window(sf::VideoMode(1600, 900), "Rythm Hero");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            menuScene.InvokeEvent(event);
        }
        window.clear();
        menuScene.Draw(window);
        window.display();
    }
    return 0;
}