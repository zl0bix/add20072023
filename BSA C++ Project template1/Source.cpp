#include<iostream>
#include<string>

double division(double num1, double num2) {
	if (num1 == 0.0)
		throw std::exception("zero divide");
	if (num2 == 0.0)
		throw -1;
	return num1 / num2;
}

int main() {




	// exceptions for basic functions
	/*int number;
	std::string str;
	std::cout << "Enter number -> ";
	std::getline(std::cin, str);




	try {

		number = std::stoi(str);
		std::cout << number << '\n';
	}

	catch (const std::exception& ex) {
		std::cout << "Exeption thrown: "<<ex.what() << '\n';
	}*/

	int a, b;
	std::cin >> a >> b;
	try {
		double result = division(a, b);
		std::cout << result;
	}

	catch (const int ex) {
		std::cout << "Exception code: " << ex << '\n';
	}
	catch (const std::exception& ex) {
		std::cout << "Exception throw: " << ex.what() << '\n';
	}

	std::cin.get();
	return{};
}