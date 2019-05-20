//
// Created by dawid on 18.05.2019.
//

#include "SnakeView.h"


SnakeView::SnakeView(Snake &sk, sf::RenderWindow &win, std::vector<sf::RectangleShape> &skRS) :snake(sk), window(win), snakeRec(skRS) {


}

void SnakeView::draw(sf::RenderWindow &win) {
    win.setFramerateLimit(5);

    sf::RectangleShape square;
    square.setSize(sf::Vector2f(snake.getSquareSize(),snake.getSquareSize()));
    square.setOutlineThickness(1);
    square.setFillColor(sf::Color::White);
    square.setOutlineColor(sf::Color::Black);
    for (int i = 0; i < snake.getColumns(); ++i) {
        for (int j = 0; j < snake.getRows() ; ++j) {
            square.setPosition(i*snake.getSquareSize(), j*snake.getSquareSize());
            win.draw(square);
        }
    }

    for (int i = 0; i < snakeRec.size() ; ++i) {
        snakeRec[i].setFillColor(sf::Color::Red);
        snakeRec[i].setSize(sf::Vector2f(snake.getSquareSize(),snake.getSquareSize()));

        snake.move();

        win.draw(snakeRec[i]);
        win.draw(snake.renderFruit());

    }

}
