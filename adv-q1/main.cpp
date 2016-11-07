/* 
 * name: Ashley Hutton
 * date: 10/1/16
 * file: main.cpp
 * purpose: HSD advanced question 1 solution
 */

#include <iostream>

int main(){
	// since we don't know the size, we will just set the array size to 100
	// this would be something to get clarification on before implementing
	std::string names[100];
	int size=0;
	while (std::cin >> names[size]){
		size++;
	}
	for (int i=0; i<=size; i++){
		// if the index is even, that indicates a first name, so print
		if (i%2 == 0){
			std::cout << "Hello, " << names[i] << "!\n";
		}
	}

}
