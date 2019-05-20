//
// Created by dawid on 19.05.2019.
//

#ifndef SNAKE_SCORECONTROLLER_H
#define SNAKE_SCORECONTROLLER_H

#include "ScoreView.h"
#include "SnakeController.h"
#include "IntroController.h"
class ScoreController {
    bool finished = false;
    ScoreView & view;
    SnakeController & minesweeperController;
    IntroController & introController;
    Snake & snake;
    sf::RenderWindow &window;
    int x,y;
public:
    ScoreController(ScoreView & v, SnakeController & sc, IntroController & ic, Snake &snake, sf::RenderWindow & win);
    void handleEvent(sf::Event &event);

    // no need to change this
    void draw (sf::RenderWindow & win) { view.draw(win); }
    bool isFinished() const { return finished;}
    void changeState(){finished = false;}
};

#endif //SNAKE_SCORECONTROLLER_H
