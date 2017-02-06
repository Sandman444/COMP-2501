#pragma once
#include <vector>
#include "Entity.h"

typedef std::vector< std::vector<Entity>> vect;

class Grid
{
public:
	Grid();
	~Grid();

private:
	vect grid;
};

