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



    sf::RenderWindow window(sf::VideoMode(750, 600), "Snake");
    Snake megawonsz9(25, 20, 30);
    IntroView iv(window);
    IntroController ic(iv);
    SnakeView snakeView(megawonsz9, window);
    ScoreView sv(megawonsz9);
    SnakeController snake_controller(window, megawonsz9, snakeView);
    ScoreController sc(sv, snake_controller, ic, megawonsz9, window);

    GameManager gm(ic, snake_controller, sc);
    window.setFramerateLimit(1);
    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            gm.handleEvent(event);

            if (event.type==sf::Event::Closed) {
                window.close();
            }
        }
        if(gm.getGameState()==2)
        {
            if (megawonsz9.isStarted())
                megawonsz9.move();

        }

        window.clear(sf::Color::Black);


        gm.draw(window);

        window.display();
    }

    return 0;
}