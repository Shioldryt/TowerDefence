#include <iostream>
#include <SFML/Graphics.hpp>
#include "src/UI.h"
using namespace std;

int main() {


    sf::RenderWindow window(sf::VideoMode(800, 600), "Tower Defense Game");
    window.setFramerateLimit(60);

    UI ui(window);  // Create an instance of the UI class

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear(sf::Color::White);

        // Update game elements
        ui.update();

        // Draw game elements
        // ... Existing code

        // Draw the UI using the UI class
        ui.draw();

        window.display();
    }

    return 0;
}