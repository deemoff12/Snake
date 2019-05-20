//
// Created by dawid on 18.05.2019.
//

#include "SnakeController.h"
SnakeController::SnakeController(sf::RenderWindow& win, int& x, int& y, Snake& snake, SnakeView & iv)
        :window(win), xDir(x), yDir(y), snake(snake), view(iv)
{
    xDir=1;yDir=0;
}
void SnakeController::handleEvent(sf::Event& event)
{
    if (event.type==sf::Event::KeyPressed) {
        if(event.key.code==sf::Keyboard::Space)
        {
            snake.startFn();
        }
        if (event.key.code==sf::Keyboard::Left) {
            if(xDir==0)
            {
                xDir = -1;
                yDir = 0;
            }
        }
        if (event.key.code==sf::Keyboard::Right) {
            if(xDir==0)
            {
                xDir = 1;
                yDir = 0;
            }
        }
        if (event.key.code==sf::Keyboard::Down) {
            if(yDir==0)
            {
                xDir = 0;
                yDir = 1;
            }
        }
        if (event.key.code==sf::Keyboard::Up) {
            if(yDir==0)
            {
                xDir = 0;
                yDir = -1;
            }
        }
    }
}
