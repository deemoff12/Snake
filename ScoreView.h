//
// Created by dawid on 19.05.2019.
//

#ifndef SNAKE_SCOREVIEW_H
#define SNAKE_SCOREVIEW_H

#include <SFML/Graphics.hpp>
#include <sstream>
#include "Snake.h"
class ScoreView {
    sf::RectangleShape endGame;
    sf::Text endGameTxt;
    sf::Text score;
    sf::Font font;
    Snake snake;
    std::ostringstream strumien;
public:
    ScoreView(Snake snake);
    void draw(sf::RenderWindow &win);
};

#endif //SNAKE_SCOREVIEW_H
