#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
	sf::Texture background;
	background.loadFromFile ("Background.png");
	sf::Sprite sprite (background);
	sprite.setPosition (0, 0);


	sf::Music music;
	music.openFromFile("Oda.ogg");
	// error
	music.play();

	while (window.isOpen())
	{	
		
		window.clear();
		sprite.setPosition (0, 0);

		window.draw (sprite);

//	window.draw (otherSprite);	

		if (sf::Keyboard::isKeyPressed (sf::Keyboard::Escape))
			break;

		window.display();


	}


    return 0;
}
