#pragma once

#include <SFML/Graphics.hpp>

class Tank {
public:
    Tank(float startX, float startY, const std::string& tankTexturePath);

    void update();
    void draw(sf::RenderWindow& window);

private:
    sf::Texture tankTexture;
    sf::Sprite tankSprite;
    sf::Vector2f position;
    float speed;
};
