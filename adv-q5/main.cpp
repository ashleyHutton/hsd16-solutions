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
	int maxTravelTimeIndex = 0;
	int travelTime[100];

	std::string paths[100];
	int size=0;	
	while (std::cin >> paths[size]){
		size++;
	}
	for (int i=0; i<size; i++){
		travelTime[i] = 30;
		for (int j=0; j<paths[i].length(); j++){
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
		if (travelTime[i] > travelTime[maxTravelTimeIndex]){
			maxTravelTimeIndex = i;
		}
	} 
	std::cout << maxTravelTimeIndex + 1 << "\n";
	std::cout << travelTime[maxTravelTimeIndex];
}
