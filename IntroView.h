//
// Created by dawid on 19.05.2019.
//

#ifndef SNAKE_INTROVIEW_H
#define SNAKE_INTROVIEW_H

#include <SFML/Graphics.hpp>
class IntroView {
    sf::RenderWindow &window;
    sf::RectangleShape play_button;
    sf::Text play_txt;
    sf::Font font;

    sf::Text snaketxt;
    sf::Text nazwisko;
    sf::Text indeks;
    sf::Text grupa;
public:
    IntroView(sf::RenderWindow &window);
    void draw(sf::RenderWindow &win);
};

#endif //SNAKE_INTROVIEW_H
