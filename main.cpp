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
    Snake megawonsz9(25, 20, 30, snakeRS);

    sf::RenderWindow window(sf::VideoMode(750, 600), "Snake");
    IntroView iv(window);
    IntroController ic(iv);
    SnakeView snakeView(megawonsz9, window, snakeRS);
    SnakeController snake_controller(window, x, y, megawonsz9,snakeView);
    ScoreView sv(megawonsz9);
    ScoreController sc(sv,snake_controller,ic,megawonsz9,window);

    GameManager gm(ic,snake_controller, sc);
    window.setFramerateLimit(1);
    while (window.isOpen()) {

        megawonsz9.move();
        sf::Event event;
        while (window.pollEvent(event)) {
            gm.handleEvent(event);

            if (event.type==sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);


//        gm.draw(window);
        snakeView.draw(window);

        window.display();
    }

    return 0;
}