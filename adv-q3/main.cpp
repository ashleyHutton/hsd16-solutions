/* 
 * name: Ashley Hutton
 * date: 10/1/16
 * file: main.cpp
 * purpose: hsd advanced question 3 solution
 */

#include <iostream>

int main(){
	int bananas;
	int coconuts;
	int berries;
	int bananaEnergy;
	int coconutEnergy;
	int berryEnergy;
	int totalEnergy;	

	std::cin >> bananas;
	std::cin >> coconuts;
	std::cin >> berries;

	bananaEnergy = (bananas * 5) - (bananas * 2);
	coconutEnergy = (coconuts * 3) - (coconuts * 1);
	berryEnergy = (berries * 1);

	totalEnergy = bananaEnergy + coconutEnergy + berryEnergy;
	std::cout << totalEnergy;

	if (totalEnergy < 50){
		std::cout << "\nWe are starving!";
	}
	else if (totalEnergy > 50){
		std::cout << "\nWe are stuffed!";
	}
	else {
		std::cout << "\nWe are satisfied.";
	}
}
