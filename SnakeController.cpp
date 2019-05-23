//
// Created by dawid on 18.05.2019.
//

#include "SnakeController.h"
SnakeController::SnakeController(sf::RenderWindow& win, Snake& snake, SnakeView & iv)
        :window(win), snake(snake), view(iv)
{

}
void SnakeController::handleEvent(sf::Event& event)
{
    if (event.type==sf::Event::KeyPressed) {
        if(event.key.code==sf::Keyboard::Space)
        {
            snake.startFn();
        }
        if (event.key.code==sf::Keyboard::Left) {
            if(snake.getDirX()==0)
            {
                snake.setDir(-1,0);
            }
        }
        if (event.key.code==sf::Keyboard::Right) {
            if(snake.getDirX()==0)
            {
                snake.setDir(1,0);
            }
        }
        if (event.key.code==sf::Keyboard::Down) {
            if(snake.getDirY()==0)
            {
                snake.setDir(0,1);
            }
        }
        if (event.key.code==sf::Keyboard::Up) {
            if(snake.getDirY()==0)
            {
                snake.setDir(0,-1);
            }
        }
    }
}
