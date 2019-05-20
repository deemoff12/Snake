//
// Created by dawid on 19.05.2019.
//

#include "IntroView.h"
IntroView::IntroView(sf::RenderWindow& window): window(window)
{
    if (!font.loadFromFile("D://Studia//Programowanie Obiektowe//gitlab//minesweeper//arial.ttf")) {
        abort();
    }
    nazwisko.setFont(font);
    snaketxt.setFont(font);
    indeks.setFont(font);
    grupa.setFont(font);
    play_txt.setFont(font);

    snaketxt.setPosition(315,20);
    snaketxt.setFillColor(sf::Color::Red);
    snaketxt.setCharacterSize(50);
    snaketxt.setString("SNAKE");

    nazwisko.setString("Dawid Mazurek");
    nazwisko.setPosition(330, 80);
    nazwisko.setFillColor(sf::Color::Red);
    nazwisko.setCharacterSize(20);

    indeks.setString("Numer indeksu : 249067");
    indeks.setFillColor(sf::Color::Red);
    indeks.setPosition(307,110);
    indeks.setCharacterSize(20);

    grupa.setCharacterSize(20);
    grupa.setPosition(320,140);
    grupa.setFillColor(sf::Color::Red);
    grupa.setString("Grupa: Wtorek 15");
}
void IntroView::draw(sf::RenderWindow &win) {
    win.draw(snaketxt);
    win.draw(nazwisko);
    win.draw(indeks);
    win.draw(grupa);
    win.draw(play_button);
    win.draw(play_txt);
}