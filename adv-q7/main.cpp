/*
 * name: Ashley Hutton
 * date: 10/1/16
 * file: main.cpp
 * purpose: hsd advanced question 7 solution
 */

#include <iostream>

int main(){
	std::string itemsNeeded;
	std::string itemsInBag;
	std::getline (std::cin, itemsNeeded);
	std::getline (std::cin, itemsInBag);

	std::string itemsNeededList[100];
	std::string itemsInBagList[100];
	std::string missingItems[100];

	int sizeNeeded = 0;
	for (unsigned i=0; i<itemsNeeded.length(); i++){
		if (itemsNeeded[i] == ','){
			sizeNeeded++;
		}
		else if (itemsNeeded[i] == ' '){
			continue;
		}
		else {
			itemsNeededList[sizeNeeded] += itemsNeeded[i];
		}
	}
	int sizeInBag = 0;
	for (unsigned i=0; i<itemsInBag.length(); i++){
		if (itemsInBag[i] == ','){
			sizeInBag++;
		}
		else if (itemsInBag[i] == ' '){
			continue;
		}
		else {
			itemsInBagList[sizeInBag] += itemsInBag[i];
		}
	}
	bool exists = false;
	int missingIndex = 0;
	for (int i=0; i<=sizeNeeded; i++){
		exists = false;
		for (int j=0; j<=sizeInBag; j++){
			if (itemsNeededList[i] == itemsInBagList[j]){
				exists = true;
				itemsInBagList[j] = "";
				break;
			}
		}
		if (!exists){
			missingItems[missingIndex] = itemsNeededList[i];
			missingIndex++;
		}	
	} 
	if (missingIndex == 0){
		std::cout << "The boat can be built";
	}
	else {
		std::cout << "The boat can't be built\n";
		for (int i=0; i<=missingIndex; i++){
			std::cout << missingItems[i] << "\n";
		}
	}
}
