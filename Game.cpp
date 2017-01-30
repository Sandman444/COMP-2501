#include "Game.h"

Game::Game() {
	//Read a game level from a file
	readLevel();
	this->window.create(sf::VideoMode(800, 800), "SFML window");
	this->window.setFramerateLimit(60);
}

void Game::loop() {
	while (true) {
		inputs();
		update();
		render();
	}
}

void Game::inputs() {
	//Deal with pollEvents
	/*while (window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			this->window.close();
			break;
		case sf::Event::MouseButtonReleased:
			this->canClickAgain = true;
			break;
		}
	}*/
}

void Game::update() {
	//Update player from movement
	//player.updatePlayer();
}

void Game::render() {
	//Clear the map
	this->window.clear(sf::Color::Black);

	//Draw the player
	//this->window.draw(player.getPlayerSprite());

	//Draw the walls
	/*for (int i = 0; i < walls.size(); i++) {
		this->window.draw(walls.at(i).getWallSprite());
	}*/

	//Display window
	this->window.display();
}

void Game::readLevel() {
	//Read file
	ifstream myReadFile;
	myReadFile.open("level.txt");
	string line;

	if (myReadFile.is_open()) {
		while (!myReadFile.eof()) {
			myReadFile >> line;
			level.push_back(line);
		}
	}
	myReadFile.close();

	//Add walls to a vector to hold them
	for (int y = 0; y < level.size(); y++) {
		for (int x = 0; x < level.at(0).size(); x++) {
			if (level.at(y).substr(x, 1) == "1") {
				//walls.push_back(Wall(x * 40, y * 40));
			}
		}
	}
}