#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cassert>
#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
int main()
{
	

	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Inventory");
	sf::Texture background;
	assert(background.loadFromFile ("Background.png"));
	sf::Sprite sprite_background (background);
	sprite_background.setPosition (0, 0);
	
	sf::Texture pony_tell;
	assert(pony_tell.loadFromFile ("pony_tell/pony_tell2.jpg"));
	sf::Sprite sprite_pony_tell (pony_tell);
	sprite_pony_tell.setPosition (350, 400);

	sf::Font font;
	assert(font.loadFromFile("AlphaWood.ttf"));
	sf::Text text_pony_tell;
	text_pony_tell.setFont(font); // font is a sf::Font

	// set the string to display
	text_pony_tell.setString("Hello\nWhy are you here?");

	// set the character size
	text_pony_tell.setCharacterSize(32); // in pixels, not points!

	text_pony_tell.setColor(sf::Color::Red);

	sf::Music music;
	assert(music.openFromFile("Oda.ogg"));
	// error
//	music.play();

	while (window.isOpen())
	{	
		
		window.clear();
		sprite_background.setPosition (0, 0);

		window.draw (sprite_background);

		sprite_pony_tell.setPosition(350, 400);
		window.draw (sprite_pony_tell);

		text_pony_tell.setPosition (380, 440);
		window.draw(text_pony_tell);	

		//if(

		if (sf::Keyboard::isKeyPressed (sf::Keyboard::Escape))
			break;

		window.display();


	}


    return 0;
}
