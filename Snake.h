//
// Created by dawid on 18.05.2019.
//

#ifndef SNAKE_SNAKE_H
#define SNAKE_SNAKE_H

#include <SFML/Graphics/RectangleShape.hpp>

class Snake {

    int columns;
    int rows;
    int squaresize;
    int counter = 0;
    bool finished = false;
    std::vector<sf::RectangleShape>& snakeRS; // Wektor odpowiadająca za segmenty węża
    sf::RectangleShape temp1, temp2; // zmienne służące do przemieszczania się węża

    sf::RectangleShape fruit;// Kwadrat odpowiadający za owoc

public:
    Snake(int col, int row, int squaresize, std::vector<sf::RectangleShape>& skRS);
    int getColumns() { return columns; }
    int getRows() { return rows; }
    int getSquareSize() { return squaresize; }
    bool isFisnished() { return finished; }
    int getCounter() { return counter; }
    void move();
    void eat();
    void checkPos();
    void respawnFruit();
    sf::RectangleShape renderFruit() { return fruit; }
};

#endif //SNAKE_SNAKE_H
