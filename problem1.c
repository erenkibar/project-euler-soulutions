#include <iostream>
int main()
{
	int j, sum;
	int array[1000];
	for(int i = 0; i < 1000; i++){
		if(i % 3 == 0 || i % 5 == 0){
			array[j] = i;
			j++;
		}
	}
	
	for(int i = 0; i < j; i++ ){
		sum += array[i];
	}
	std::cout << "The sum is " <<sum;
}
