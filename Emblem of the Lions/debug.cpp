#include "region.h"

#include <stdexcept>
#include <iostream>
using namespace std;

int SDL_main(int, char**) {
	try {
		Region region;

		cout << "Loading" << endl;
		region.LoadData("mapdata.txt");

		cout << "Outputing format data" << endl;
		cout << region.GetX() << endl;
		cout << region.GetY() << endl;
		cout << region.GetZ() << endl;

		cout << "Outputting map data" << endl;
		for (int j = 0; j < region.GetY(); j++) {
			for (int i = 0; i < region.GetX(); i++) {
				for (int k = 0; k < region.GetZ(); k++) {
					cout << region.GetTile(i, j, k) << " ";
				}
				cout << " ";
			}
			cout << "\n";
		}

		cout << "Saving the map to a new file" << endl;
		region.SaveData("newdata.txt");

		cout << "Cleaning up" << endl; 
		region.DeleteData();
	}
	catch(exception& e) {
		cerr << "Error: " << e.what() << endl;
		return 1;
	}

	return 0;
}