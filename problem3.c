/*
Problem No: 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
 */

#include <iostream>
#include <cmath>
int main ()
{	
	int largest;
	long int number = 600851475143;
	for (int i = 2; i < sqrt(600851475143); i++){
		while(number % i == 0){
			number /= i;
			largest = i;
		}
	}
	std::cout << largest;
}
