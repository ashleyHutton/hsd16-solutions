/* 
 * name: Ashley Hutton
 * date: 10/1/16
 * file: main.cpp
 * purpose: HSD advanced question 2 solution
 */

#include <iostream>

void printWidthSpaces(int width){
	for (int i=0; i<width-1; i++){
		std::cout << " ";
	}
}

void printWidthDashes(int width){
	for (int i=0; i<width; i++){
		std::cout << "-";
	}
}

int main(){
	int width;
	std::cin >> width;

	// row 1
	for (int i=0; i<3; i++){
		printWidthDashes(width);
		std::cout << "   ";
	}
	std::cout << "\n";
	// row 2
	std::cout << "|";
	printWidthSpaces(width);
	std::cout << "   |";
	printWidthSpaces(width-1);
	std::cout << "|   |\n";
	// row 3
	printWidthDashes(width);
	std::cout << "   |";
	printWidthSpaces(width-1);
	std::cout << "|   ";
	printWidthDashes(width);
	std::cout << "\n";
	// row 4
	printWidthSpaces(width);
	std::cout << "|   |";
	printWidthSpaces(width-1);
	std::cout << "|   ";
	printWidthSpaces(width);
	std::cout << "|\n";
	// row 5
	for (int i=0; i<3; i++){
		printWidthDashes(width);
		std::cout << "   ";
	}
}

