#include "Tank.h"

Tank::Tank(float startX, float startY, const std::string& tankTexturePath)
        : position(startX, startY), speed(2.0f) {
    if (!tankTexture.loadFromFile(tankTexturePath)) {
    }

    tankSprite.setTexture(tankTexture);
    tankSprite.setPosition(position);
}

void Tank::update() {

    position.x += speed;
    tankSprite.setPosition(position);
}

void Tank::draw(sf::RenderWindow& window) {
    window.draw(tankSprite);
}
