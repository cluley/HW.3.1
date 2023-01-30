#include <iostream>

class Calculator {
public:
	double add() { double var = num1 + num2; return var; }
	double multiply() { double var = num1 * num2; return var; }
	double subtract_1_2() { double var = num1 - num2; return var; }
	double subtract_2_1() { double var = num2 - num1; return var; }
	double divide_1_2() { double var = num1 / num2; return var; }
	double divide_2_1() { double var = num2 / num1; return var; }
	bool set_num1(double num1);
	bool set_num2(double num2);
private:
	double num1;
	double num2;
};

bool Calculator::set_num1(double newNum) {
	bool val;
	if (newNum != 0) {
		num1 = newNum;
		val = true;
	}
	else {
		val = false;
	}
	return val;
}

bool Calculator::set_num2(double num2) {
	bool val;
	if (num2 != 0) {
		this->num2 = num2;
		val = true;
	}
	else {
		val = false;
	}
	return val;
}

int main(int argc, char** argv) {
	Calculator userInput;
	int num = 0;

	while (true) {
		std::cout << "Enter num1: ";
		std::cin >> num;
		while(!(userInput.set_num1(num))) {
			std::cout << "Wrong input!" << std::endl;
			std::cout << "Enter num1: ";
			std::cin >> num;
		}

		std::cout << "Enter num2: ";
		std::cin >> num;
		while (!(userInput.set_num2(num))) {
			std::cout << "Wrong input!" << std::endl;
			std::cout << "Enter num2: ";
			std::cin >> num;
		}

		std::cout << "num1 + num2 = " << userInput.add() << std::endl;
		std::cout << "num1 - num2 = " << userInput.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << userInput.subtract_1_2() << std::endl;
		std::cout << "num1 * num2 = " << userInput.multiply() << std::endl;
		std::cout << "num1 / num2 = " << userInput.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << userInput.divide_2_1() << std::endl;
	}

	return 0;
}