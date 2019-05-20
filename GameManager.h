//
// Created by dawid on 19.05.2019.
//

#ifndef SNAKE_GAMEMANAGER_H
#define SNAKE_GAMEMANAGER_H

#include "IntroController.h"
#include "ScoreController.h"
class GameManager {
    IntroController &introController;
    SnakeController &snakeController;
    ScoreController &scoreController;

    enum GameState {
      INTRO, GAME, SCORE
    } state;

    void updateState();
public:
    GameManager(IntroController &ic, SnakeController &mc, ScoreController &sc);

    void draw(sf::RenderWindow &win);

    void handleEvent(sf::Event &event);
};

#endif //SNAKE_GAMEMANAGER_H
