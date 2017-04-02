#include <iostream>

int main() {
	
	//multiples of 3 and 5
	
	int sum = 0;
		
	
	
	for (int x = 0; x < 1000; x++) {
		
		
		if (x % 3 == 0 || x % 5 == 0) {		
			sum += x;
		}
	
	
	}
	
	std::cout << "The sum of multiples of 3 and 5 under 1000 is:" << sum;
	
	return 0;
}
