//
// Created by vchot on 16/10/2023.
//
#pragma once
#include <SFML/Graphics.hpp>
#include "Tank.h"
#ifndef TOWERDEFENCE_UI_H
#define TOWERDEFENCE_UI_H


class UI {
public:
    UI(sf::RenderWindow& window);
    void draw();
    void update();


private:
    sf::RenderWindow& window;
    sf::RectangleShape leftBox;
    sf::RectangleShape rightBox;
    sf::Font font;
    sf::Text upgradeText;
    sf::Texture castleTexture;
    sf::Sprite castleSprite;
    sf::Texture soldierTexture;
    sf::Sprite soldierSprite;

    Tank tank;

};


#endif //TOWERDEFENCE_UI_H
