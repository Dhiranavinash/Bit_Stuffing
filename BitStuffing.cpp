#include <iostream>
int a=0;
int main() {

    int input[8];
    int output[9];
  

    std::cout << "Enter 8 bits (0 or 1): ";
    for (int i = 0; i < 8; i++) {
        std::cin >> input[i];
        if (input[i] != 0 && input[i] != 1) {
            std::cout
			 << "Invalid input! Please enter 0 or 1." << std::endl;
            return 1;
        }
    }

    std::cout << "Input array:   ";
    for (int i = 0; i < 8; ++i) {
        std::cout << input[i] << " ";
    }
    std::cout << std::endl;
    int count = 0;
    int b = 0;


    for (int i = 0; i < 8; i++) {
        if (input[i] == 1) {
            count++;
            output[b++] = input[i];
            if (count == 5) {
                output[b++] = 0; 
                count = 0; 
                a+=1;
            }
        } else {
            count = 0; 
            output[b++] = input[i];
        }
    }
    if (a==0)
    {
    	std::cout << "Output array:  ";
    	for (int i = 0; i < 8; ++i) {
        	std::cout << input[i] << " ";
    	}
    	std::cout << std::endl;
	}
	else
	{
		std::cout << "Output array:  ";
        for (int i = 0; i < 9; ++i) {
        	std::cout << output[i] << " ";
    	}
    	std::cout << std::endl;
	}
    return 0;
}
