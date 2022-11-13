// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm> 
#include <vector>


int sum_of_prime() {
    int numbers[7] = {};

    for (int i = 0; i < 7; i++) {
        std::cout << "Enter number " << i << "\n";
        std::cin >> numbers[i];
    }
    
    std::sort(numbers, numbers+7);

    for (int i = 0; i < 7; i++) {
        std::cout << numbers[i] << " - ";
    }

    return 0;
}


int F_to_C() {
    float fahrenheit, celsius;

    std::cout << "Enter fahrenheits";
    std::cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 0.5556;

    std::cout << "Celsius - " << celsius;
    
    return 0;
}


int pos_Neg_check() {
    signed long number;
    std::cout << "Enter a Number";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Number is negative";
    }
        
    if (number > 0) {
        std::cout << "Number is positive";
    }

    return 0;
}



int first_five_deviders() {
    int userinput;
    std::vector<int> numbers;
    std::cout << "Enter a Number";
    std::cin >> userinput;
    int numbers_length;
    int i = 1;

    while(true) {
        numbers_length = numbers.size();
        int remainder = userinput % i;
        if (remainder == 0) {
            numbers.push_back(i);
        }

        if (numbers_length == 5) {
            break;
        }
        
        i += 1;
    }

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << "\n";
    }
   
    return 0;
}


int convertNumberToDateTime(int number) {
    int days = 0;
    int hr = 0;
    int min = 0;
    bool done = false;


    do {
       
        if (number >= 24) {
            days++;
            number -= 24;
        }
        else if (number >= 60) {

            hr++;
            number -= 60;
        }
        else if(number >= 1) {
            min = number;
            
        }
        else {
            done = true;
        }
    } while (done == false);

    std::cout << days << " days, " << hr << " hours, " << min << " minues" << std::endl;

    return 0;
}




int main()
{
    //sum_of_prime();
    //F_to_C();
    //pos_Neg_check();
    //first_five_deviders();
    //convertNumberToDateTime(120);
}   

