/*
 * name: Ashley Hutton
 * date: 10/1/16
 * file: main.cpp
 * purpose: hsd advanced question 4 solution
 */

#include <iostream>

int main(){
	int divisor;
	int lowerBound;
	int upperBound;
	int code;

	int firstDigit;
	int secondDigit;
	int thirdDigit;
	int fourthDigit;

	std::cin >> divisor;
	std::cin >> lowerBound;
	std::cin >> upperBound;

	for (int i=lowerBound+1; i<upperBound; i++){
		if (i%divisor == 0) { //number is divisible by divisor
			// obtain each digit by using the mod operator
			firstDigit = (i/1000) % 10;
			secondDigit = (i/100) % 10;
			thirdDigit = (i/10) % 10;
			fourthDigit = i % 10;		
			if (firstDigit == (secondDigit + thirdDigit + fourthDigit)){
				code = i;
			}
		}
	}
	std::cout << code;	
}
