//
// Created by vchot on 16/10/2023.
//
#include <iostream>
#include "UI.h"

UI::UI(sf::RenderWindow& window)
        : window(window), tank(5, window.getSize().y - 400, "C:/Users/vchot/CLionProjects/TowerDefence/src/tank.png") {

    if(!font.loadFromFile("C:/Users/vchot/CLionProjects/TowerDefence/src/PlastoTrial-ExtBdExpIta.otf")){
        std::cout << "Unable to load font.";
    };

    upgradeText.setString("Upgrade");
    upgradeText.setFont(font);
    upgradeText.setCharacterSize(20);
    upgradeText.setFillColor(sf::Color::Black);
    upgradeText.setPosition(window.getSize().x - 120, window.getSize().y - 50);

    //Setting castle texture
    if(!castleTexture.loadFromFile("C:/Users/vchot/CLionProjects/TowerDefence/src/castle.png")){
        std::cout << "Can't load castle texture";
    }
    castleSprite.setTexture(castleTexture);
    castleSprite.setPosition(120, window.getSize().y - 60);

    //Setting soldier texture
    if(!soldierTexture.loadFromFile("C:/Users/vchot/CLionProjects/TowerDefence/src/soldier.png")){
        std::cout << "Can't load soldier texture";
    }
    soldierSprite.setTexture(soldierTexture);
    soldierSprite.setPosition(10, window.getSize().y - 60);
}

void UI::draw() {
    window.draw(leftBox);
    window.draw(rightBox);
    window.draw(upgradeText);

    //Draw a castle in the right box
    window.draw(castleSprite);
    //Draw a solider in the left box
    window.draw(soldierSprite);
    //Draw tank
    tank.draw(window);
}

void UI::update() {
    // Update tank
    tank.update();
}

