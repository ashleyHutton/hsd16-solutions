/*
 * name: Ashley Hutton
 * date: 10/1/16
 * file: main.cpp
 * purpose: hsd advanced question 6 solution
 */

#include <iostream>
#include <string>
#include <sstream>

int main(){
	std::string message;
	std::cin >> message;
	std::string messageChar;
	int shift = 0;
	char newMessage[message.length() + 1];
	int newMessageLength = 0;
	int result = 0;

	for (unsigned i=0; i<message.length(); i++){
		if (isalpha(message[i])){
			result = int(message[i]) + shift;
			if (result < 'a'){
				result += int('z') - 1;
				result -= int('a');
			}
			else if (result > 'z'){
				result -= int('z');
				result += int('a') - 1;
			}
			newMessage[newMessageLength] = char(result);;
			shift = 0;
			newMessageLength++;
		}
		else if (ispunct(message[i])){
			newMessage[newMessageLength] = message[i];
			newMessageLength++;
			continue;
		}
		else {
			messageChar = message[i];
			std::stringstream stream(messageChar);
			stream >> shift;
		}		
	}	
	newMessage[message.length()] = '\0';
	std::cout << newMessage;
}
