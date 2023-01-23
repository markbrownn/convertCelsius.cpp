#include <iostream>

// Class for temperature conversion
class TemperatureConversion {
public:
    // Function to convert temperature from Celsius to Fahrenheit
    double celsiusToFahrenheit(double celsius) {
        return (celsius * 9 / 5) + 32;
    }

    // Function to convert temperature from Fahrenheit to Celsius
    double fahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32) * 5 / 9;
    }
};

int main() {
    // Create a temperature conversion object
    TemperatureConversion convert;

    // Get the temperature and unit from the user
    double temperature;
    std::string unit;
    std::cout << "Enter the temperature and unit (C or F): ";
    std::cin >> temperature >> unit;

    // Check if the unit is celsius
    if (unit == "C") {
        std::cout << temperature << "C = " << convert.celsiusToFahrenheit(temperature) << "F" << std::endl;
    }
    // Check if the unit is fahrenheit
    else if (unit == "F") {
        std::cout << temperature << "F = " << convert.fahrenheitToCelsius(temperature) << "C" << std::endl;
    }
    else {
        std::cout << "Invalid unit" << std::endl;
    }

    return 0;
}
