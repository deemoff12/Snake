//
// Created by dawid on 18.05.2019.
//

#ifndef SNAKE_SNAKECONTROLLER_H
#define SNAKE_SNAKECONTROLLER_H

#include <vector>
#include <SFML/Graphics.hpp>
#include "Snake.h"
#include "SnakeView.h"

class SnakeController {
    sf::RenderWindow& window;
    int& xDir;
    int& yDir;
    Snake &snake;
    SnakeView& view;
public:
    explicit SnakeController(sf::RenderWindow& win, int& x, int& y, Snake& snake, SnakeView& iv);
    void handleEvent(sf::Event& event);
    bool isFinished() { return snake.isFisnished(); }
    void draw (sf::RenderWindow & win) { view.draw(win); }
};

#endif //SNAKE_SNAKECONTROLLER_H
