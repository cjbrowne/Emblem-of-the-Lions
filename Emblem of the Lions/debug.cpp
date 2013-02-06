#include "map_utility.h"

#include "SDL.h"

#include <exception>
#include <iostream>
using namespace std;

int SDL_main(int, char**) {
	try {
		cout << "Creating the map utility" << endl;
		MapUtility m;

		cout << "Loading the map" << endl;
		m.LoadMap("map.txt");

		cout << "Deleting the map" << endl;
		m.DeleteMap();
	}
	catch(exception& e) {
		cerr << "Error: " << e.what() << endl;
		return 1;
	}

	cout << "Finished" << endl;
	return 0;
}