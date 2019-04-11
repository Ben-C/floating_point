#include <iostream>
#include <iomanip>


int main() {

	std::float fValue = 76.4;
	std::double dValue = 76.4;
	std::long std::double eValue = 76.4;

	std::cout << std::setprecision(20) << std::fixed << fValue << std::endl;

	std::cout << "Size of float: " << std::sizeof(float) << std::endl;
	
	std::cout << std::setprecision(20) << std::fixed << "Size of double float: " << dValue << std::endl;
	std::cout << std::setprecision(20) << std::fixed << "Size of long double float: " << eValue << std::endl;
	return 0;
}
