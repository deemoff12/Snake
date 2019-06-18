//
// Created by dawid on 19.05.2019.
//

#include "GameManager.h"

GameManager::GameManager(IntroController &ic, SnakeController &mc, ScoreController &sc)
        : introController(ic), snakeController(mc), scoreController(sc)
{

//    state = INTRO;
    state=1;
}

void GameManager::updateState() {
    switch (state) {
    case 1 ://INTRO:
        if (introController.isFinished())
            state = 2;//GAME;
        break;
    case 2://GAME:
        if (snakeController.isFinished())
        {
            scoreController.setScore();
            state = 3;//SCORE;
        }
        break;
    case 3://SCORE:
        if(scoreController.isFinished())
        {
            scoreController.changeState();
            state = 1;//INTRO;
        }
        break;
    }
}

void GameManager::handleEvent(sf::Event &event)
{
    switch (state) {
    case 1://INTRO:
        introController.handleEvent(event);
        break;
    case 2://GAME:
        snakeController.handleEvent(event);
        break;
    case 3://SCORE:
        scoreController.handleEvent(event);
        break;
    }
    updateState();
}

void GameManager::draw(sf::RenderWindow &win) {
    // updateState() ??
    switch (state) {
    case 1://INTRO:
        introController.draw(win);

        break;
    case 2://GAME:
        snakeController.draw(win);
        break;
    case 3://SCORE:
        scoreController.changeState();
        scoreController.draw(win);
        break;
    }
}
