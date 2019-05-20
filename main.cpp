#include <SFML/Graphics.hpp>
#include "Snake.h"
#include "SnakeView.h"
#include "SnakeController.h"
#include "IntroView.h"
#include "IntroController.h"
#include "ScoreView.h"
#include "ScoreController.h"
#include "GameManager.h"
#include <windows.h>

int main()
{
    srand(time(NULL));
    std::vector<sf::RectangleShape> snakeRS;
    sf::RectangleShape temp1;
    sf::RectangleShape temp2;
    snakeRS.push_back(temp1);
    snakeRS.push_back(temp1);
    snakeRS.push_back(temp1);
    snakeRS.push_back(temp1);
    int x, y;

    sf::RenderWindow window(sf::VideoMode(750, 600), "Snake");
    Snake megawonsz9(25, 20, 30, snakeRS, window);
    IntroView iv(window);
    IntroController ic(iv);
    SnakeView snakeView(megawonsz9, window, snakeRS);
    SnakeController snake_controller(window, x, y, megawonsz9,snakeView);
    ScoreView sv(megawonsz9);
    ScoreController sc(sv,snake_controller,ic,megawonsz9,window);

    GameManager gm(ic,snake_controller, sc);
    window.setFramerateLimit(1);
    while (window.isOpen()) {


        sf::Event event;
        while (window.pollEvent(event)) {
            snake_controller.handleEvent(event);

            if (event.type==sf::Event::Closed) {
                window.close();
            }
        }
        //PROBLEM Z OBSŁUGA WYŚWIETLANIA JEŚLI PĘTLA OBSŁUGUJĄCA POZYCJĘ WĘŻA JEST W POLU KLASY SNAKE
        for (int j = 0; j<snakeRS.size(); ++j) {

            if (j==0) {
                temp1.setPosition(snakeRS[j].getPosition());
                snakeRS[0].move(x*30,y*30);
                temp2.setPosition(snakeRS[j+1].getPosition());
                snakeRS[j+1].setPosition(temp1.getPosition());
                continue;
            }
            j++;
            temp1.setPosition(snakeRS[j].getPosition());
            snakeRS[j].setPosition(temp2.getPosition());
            temp2.setPosition(snakeRS[j+1].getPosition());
            snakeRS[j+1].setPosition(temp1.getPosition());
            megawonsz9.checkPos();
            megawonsz9.eat();
        }

        window.clear(sf::Color::Black);


//        gm.draw(window);
        snake_controller.draw(window);

        window.display();
    }

    return 0;
}