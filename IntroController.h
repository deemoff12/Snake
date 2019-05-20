//
// Created by dawid on 19.05.2019.
//

#ifndef SNAKE_INTROCONTROLLER_H
#define SNAKE_INTROCONTROLLER_H

#include "IntroView.h"
class IntroController {
    bool finished = false;
    IntroView & view;
public:
    IntroController(IntroView& iv);
    void handleEvent(sf::Event &event);
    bool isFinished() const { return finished;}
    void draw (sf::RenderWindow & win) { view.draw(win); }
};

#endif //SNAKE_INTROCONTROLLER_H
