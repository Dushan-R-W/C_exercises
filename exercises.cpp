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


int findLastAngleOfTriangle(int angle1, int angle2) {

    float lastangle = 180 - (angle1 + angle2);
    std::cout << lastangle << std::endl;
    return 0;
}

int dynamicTrianglePrint(int number) {

    int lines = number;
    int stars = 1;

    for (int i = 0; i < lines; i++) {
        for (int i = 0; i < number; i++) {
            std::cout << " " << std::flush;
        }
        for (int i = 0; i < stars; i++) {
            std::cout << "*" << std::flush;
        }
        stars += 2;
        number -= 1;
        std::cout << "" << std::endl;
    }
    return 0;
}


/*
You work in a toy car workshop, and your job is to build toy cars from a collection of parts.
Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside.
Given the total number of wheels, car bodiesand figures available, how many complete toy cars can you make ?
*/
int toy_car_workshop(int wheels, int body, int figures) {

    int number_of_cars = 0;

    while (true) {
        if (wheels >= 4) {
            if (body >= 1) {
                if (figures >= 2) {
                    number_of_cars += 1;
                    wheels -= 4;
                    body -= 1;
                    figures -= 2;
                }
                else break;
            }
            else break;
        }
        else break;
    }

    std::cout << "Max number of cars = " << number_of_cars << std::endl;

    return 0;
}


//Create a function that creates a box based on dimension n.
int dynamicBoxPrint(int number) {

    int lines = number;
    int hash = 1;

    for (int i = 0; i < lines; i++) {
        if (i == 0 || i == lines-1) {
            for (int i = 0; i < lines; i++) {
                std::cout << "#" << std::flush;
            }
        }
        else {
            std::cout << "#" << std::flush;
            for (int i = 0; i < lines-2; i++) {
                std::cout << " " << std::flush;
            }
            std::cout << "#" << std::flush;
        }
        std::cout << "" << std::endl;
    }
        
    return 0;
}


//Create a function that returns the number of characters shared between two words.
int letters_shared_between_words(std::string word1, std::string word2) {

    std::string longWord = word2;
    std::string shortWord = word1;
    std::vector<char> matchingLetters;

    if(word1.length() >= word2.length()){
        longWord = word1;
        shortWord = word2;
    }

    for (int i = 0; i < longWord.length(); i++) {
        for (int t = 0; t < shortWord.length(); t++) {
            if (longWord[i] == shortWord[t] && (std::find(matchingLetters.begin(), matchingLetters.end(), longWord[i]) == matchingLetters.end())) {
                matchingLetters.push_back(longWord[i]);
                std::cout << longWord[i] << std::endl;
            }
        }
    }
    std::cout <<"\n" << matchingLetters.size() << " matching letters found!!" << std::endl;
    
    return 0;
}


int main()
{
    //sum_of_prime();
    //F_to_C();
    //pos_Neg_check();
    //first_five_deviders();
    //convertNumberToDateTime(120);
    //findLastAngleOfTriangle(30, 60);
    //dynamicTrianglePrint(10);
    //toy_car_workshop(40, 100, 200);
    //dynamicBoxPrint(10);
    //letters_shared_between_words("dog", "cat");




}   

