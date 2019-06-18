//
// Created by dawid on 19.05.2019.
//

#ifndef SNAKE_SCOREVIEW_H
#define SNAKE_SCOREVIEW_H

#include <SFML/Graphics.hpp>
#include "Snake.h"
class ScoreView {
private:
    sf::RectangleShape endGame;
    sf::Text endGameTxt;
    sf::Text score;
    sf::Text scoreInt;
    sf::Font font;
    Snake snake;

public:
    ScoreView(Snake snake);
    void draw(sf::RenderWindow &win);
    void setString(int scr){scoreInt.setString(std::to_string(scr));}
//    void scoreDraw(sf::RenderWindow &win,string score){win.draw(score);}
};

#endif //SNAKE_SCOREVIEW_H
