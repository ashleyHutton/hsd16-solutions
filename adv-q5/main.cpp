/*
 * name: Ashley Hutton
 * date: 10/1/16
 * file: main.cpp
 * purpose: hsd advanced question 5 solution
 */

#include <iostream>

int main(){
	int trip = 3;
	int sand = 5;
	int lost = 10;
	int minTravelTimeIndex = 0;
	int travelTime[100];

	std::string paths[100];
	int size=0;	
	while (std::cin >> paths[size]){
		size++;
	}
	for (int i=0; i<size; i++){
		travelTime[i] = 30;
		for (unsigned j=0; j<paths[i].length(); j++){
			if (paths[i][j] == 'T'){
				travelTime[i] += trip;
			}
			else if (paths[i][j] == 'Q'){
				travelTime[i] += sand;
			}
			else {
				travelTime[i] += lost;
			}	
		}
		if (travelTime[i] < travelTime[minTravelTimeIndex]){
			minTravelTimeIndex = i;
		}
	} 
	std::cout << minTravelTimeIndex + 1 << "\n";
	std::cout << travelTime[minTravelTimeIndex];
}
