// Simple Calculator.cpp : This file contains the code for a simple calculator project

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

	// Starting text and menu choice variable
	int menu_choice;
	std::cout << "Welcome to the simple calculator!\n";

	do {
		// Menu text and gather user input for choice
		std::cout << "Choose an operation below (1-8):\n";
		std::cout << "1. Add\n2. Subtract\n3. Multiply\n";
		std::cout << "4. Divide\n5. Power\n6. Max\n7. Min\n8. Quit\n";
		std::cin >> menu_choice;

		// Check for invalid number input 
		if (menu_choice < 1 || menu_choice > 8) {
			do {
				std::cout << "Invalid menu choice! Try again.\n";
				std::cin >> menu_choice;
			} while (menu_choice < 1 || menu_choice > 8);
		}

		// Check for quit choice
		if (menu_choice == 8) {
			return 0;
		}

		// Gather input numbers 
		double x, y;
		std::cout << "Please enter two numbers separated by space(s): \n";
		std::cin >> x;
		std::cin >> y;

		// Calculations based on operation
		double answer;
		switch (menu_choice) {
		case 1:
			answer = x + y;
			break;
		case 2:
			answer = x - y;
			break;
		case 3:
			answer = x * y;
			break;
		case 4:
			if (y == 0) {
				std::cout << "Division by zero!\n";
				answer = 0;
			}
			else {
				answer = static_cast<float>(x) / y;
			}
			break;
		case 5:
			answer = pow(x, y);
			break;
		case 6:
			answer = (x > y) ? x : y;
			break;
		case 7:
			answer = (x < y) ? x : y;
			break;
		default:
			return 0;
		}

		// Answer output
		std::cout << "The result is: " << answer << std::endl << std::endl;

	} while (menu_choice != 8);
}

