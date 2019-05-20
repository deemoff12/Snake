//
// Created by dawid on 18.05.2019.
//

#ifndef SNAKE_SNAKEVIEW_H
#define SNAKE_SNAKEVIEW_H

#include <SFML/Graphics.hpp>
#include "Snake.h"
#include <windows.h>

class SnakeView {
    Snake & snake;
    sf::RenderWindow & window;
    std::vector<sf::RectangleShape> &snakeRec;


public:
    SnakeView(Snake &sk, sf::RenderWindow &win, std::vector<sf::RectangleShape>& skRS);
    void draw(sf::RenderWindow &win);
};


#endif //SNAKE_SNAKEVIEW_H