//
// Created by dawid on 18.05.2019.
//

#ifndef SNAKE_SNAKE_H
#define SNAKE_SNAKE_H

#include <SFML/Graphics.hpp>

class Snake {

    int columns;
    int rows;
    int squaresize;
    int counter = 0;
    bool finished = false;
    bool start;
    std::vector<sf::RectangleShape> snakeRS; // Wektor odpowiadająca za segmenty węża
    int length;
    int xDir=1,yDir=0;

    sf::RectangleShape fruit;// Kwadrat odpowiadający za owoc

public:
    Snake(int col, int row, int squaresize);
    int getColumns() { return columns; }
    int getRows() { return rows; }
    int getSquareSize() { return squaresize; }
    bool isFisnished() { return finished; }
    void startFn(){start=true;}
    bool isStarted() {return start;}
    int getCounter() { return counter; }
    void setSnakeParameters(sf::Color fillColor, int size, sf::Color outlineColor, int thickness, int index);
    sf::RectangleShape getSnakeSegment(int i){ return snakeRS[i];}
    void setDir(int x, int y){xDir=x; yDir=y;}
    int getDirX(){ return xDir;}
    int getDirY(){return yDir;}
    int getLength(){return length;}
    void move();
    void eat();
    void checkPos();
    void respawnFruit();
    sf::RectangleShape renderFruit() { return fruit; }
};

#endif //SNAKE_SNAKE_H
