//
// Created by dawid on 18.05.2019.
//

#include "Snake.h"

Snake::Snake(int col, int row, int sqsize, std::vector<sf::RectangleShape>& skRS, sf::RenderWindow& win)
        :columns(col), rows(row), squaresize(sqsize), snakeRS(skRS), window(win)
{
    snakeRS[0].setPosition(30, 0);
    snakeRS[1].setPosition(30, 30);
    snakeRS[2].setPosition(30, 60);
    snakeRS[3].setPosition(30, 90);
    start=false;
    fruit.setSize(sf::Vector2f(30, 30));
    fruit.setFillColor(sf::Color::Green);
    fruit.setPosition((rand()%columns)*30, (rand()%rows)*30);

}

void Snake::move()
{
    //PROBLEM Z WYŚWIETLANIEM(OBRAZ SIĘ ROZJEZDZA TWORZAC "GRADIENT" DLATEGO FUNKCJA ZNAJDUJE SIE W MAIN
//    for (int j = 0; j<snakeRS.size(); ++j) {
//
//        if (j==0) {
//            temp1.setPosition(snakeRS[j].getPosition());
//            snakeRS[0].move(30, 0);
//            temp2.setPosition(snakeRS[j+1].getPosition());
//            snakeRS[j+1].setPosition(temp1.getPosition());
//            continue;
//        }
//        j++;
//        temp1.setPosition(snakeRS[j].getPosition());
//        snakeRS[j].setPosition(temp2.getPosition());
//        temp2.setPosition(snakeRS[j+1].getPosition());
//        snakeRS[j+1].setPosition(temp1.getPosition());
//        checkPos();
//        eat();
//    }
}
void Snake::respawnFruit()
{
    fruit.setPosition((rand()%columns)*30, (rand()%rows)*30);

    for (int i = 0; i<snakeRS.size(); ++i) {
        if (fruit.getPosition()==snakeRS[i].getPosition())
            respawnFruit();
    }
}
void Snake::checkPos()
{
    if (snakeRS[0].getPosition().x<0 || snakeRS[0].getPosition().y<0 || snakeRS[0].getPosition().x>750 ||
            snakeRS[0].getPosition().y>600) {
        finished = true;
    }
    for (int i = 1; i<snakeRS.size(); ++i) {
        if (snakeRS[0].getPosition()==snakeRS[i].getPosition()) {
            finished = true;
        }
    }
}
void Snake::eat()
{
    if (snakeRS[0].getPosition()==fruit.getPosition()) {
        snakeRS.push_back(fruit);
        counter++;
        respawnFruit();
    }
}


