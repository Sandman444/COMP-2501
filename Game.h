#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

class Game
{

public:

	sf::RenderWindow window;

	Game();

	void loop();
	void inputs();
	void update();
	void render();
	void readLevel();

private:
	vector<string> level;
	bool canClickAgain = true;
};