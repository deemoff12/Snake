//
// Created by dawid on 19.05.2019.
//

#include "ScoreView.h"
ScoreView::ScoreView(Snake snake): snake(snake)
{
    if (!font.loadFromFile("D://Studia//Programowanie Obiektowe//gitlab//minesweeper//arial.ttf")) {
        abort();
    }
    endGameTxt.setFont(font);


    endGame.setSize(sf::Vector2f(350,150));
    endGame.setPosition(250, 400);
    endGame.setFillColor(sf::Color::Red);
    endGame.setOutlineThickness(2);
    endGame.setOutlineColor(sf::Color::Green);

    endGameTxt.setFillColor(sf::Color::Blue);
    endGameTxt.setOutlineColor(sf::Color::Magenta);
    endGameTxt.setOutlineThickness(2);
    endGameTxt.setPosition(300,450);
    endGameTxt.setString("KONIEC GRY");
    endGameTxt.setCharacterSize(40);

    score.setFont(font);
    score.setCharacterSize(50);
    score.setPosition(130,30);
    score.setOutlineThickness(2);
    score.setOutlineColor(sf::Color::Magenta);
    score.setFillColor(sf::Color::Blue);
    score.setString("Twoj wynik to : ");

    scoreInt.setFont(font);
    scoreInt.setCharacterSize(50);
    scoreInt.setPosition(500,30);
    scoreInt.setOutlineThickness(2);
    scoreInt.setOutlineColor(sf::Color::Magenta);
    scoreInt.setFillColor(sf::Color::Blue);

}

void ScoreView::draw(sf::RenderWindow &win) {
    win.draw(endGame);
    win.draw(endGameTxt);
    win.draw(score);
    win.draw(scoreInt);

}
