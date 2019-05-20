//
// Created by dawid on 19.05.2019.
//

#include "ScoreController.h"

ScoreController::ScoreController(ScoreView &v, SnakeController & sc, IntroController & ic, Snake &s, sf::RenderWindow &win)
        : view(v), minesweeperController(sc), introController(ic), snake(s), window(win)
{}

void ScoreController::handleEvent(sf::Event &event)
{


    if (event.type == sf::Event::MouseButtonPressed)
    {


        if (event.mouseButton.button == sf::Mouse::Left)
        {
            //Wczytanie pozycji klikniecia myszy
            x = event.mouseButton.x;
            y = event.mouseButton.y;

            if(x>=550 && x <=900 && y >= 500 && y<=650)
            {
                window.close();
            }
        }





    }
}