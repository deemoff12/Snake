//
// Created by dawid on 18.05.2019.
//

#include "SnakeView.h"


SnakeView::SnakeView(Snake &sk, sf::RenderWindow &win) :snake(sk), window(win) {


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

    for (int i = 0; i < snake.getLength() ; ++i) {
        snake.setSnakeParameters(sf::Color::Red,snake.getSquareSize(),sf::Color::Black,1,i);

        snake.move();

        win.draw(snake.getSnakeSegment(i));
        win.draw(snake.renderFruit());

    }

}
