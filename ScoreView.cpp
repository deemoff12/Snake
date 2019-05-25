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


}

void ScoreView::draw(sf::RenderWindow &win) {
    win.draw(endGame);
    win.draw(endGameTxt);

}
