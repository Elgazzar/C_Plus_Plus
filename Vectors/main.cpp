#include <iostream>
#include <vector>

/* :: is scope resolution meaning you are using cout from std library */
/* << this is the insertation operator */
/* >> this is the extraction operator */
/*inseration and extraction can be used by files*/
/*global variable is availabe to everyone. it is initialzed to 0 by default */

/*Arrays and vectors in C++ , vectors is much more strong than Arrays */
/*Array is a fixed in size, elements is same type, store contiguous in memory, can be accessed indvidually*/
/*Start indexx is  0 , last element size - 1 */
/*there is no max acess check */

// int test_scores[5] {100,95,99,87,88};
// int high_score_per_level[10] {3,5};
// const int days_in_year {365};
// double hi_temperature[days_in_year] {0};
// int another_array[] {1,2,3,4,5};

/*createing vectos */
/*Syntax std::vector <char> vowels */
/*Syntax std::vector <int> test_scores */

/*this is a vector of 5 char */
std::vector <char> vowels (5);
/*this is a vector of int */
std::vector <int> test_scores {100,95,99,87,88};

int main()
{
    std::cout << "Test Score is : " << test_scores[0] << std::endl;
    std::cout << "Test Score is : " << test_scores[1] << std::endl;
    std::cout << "Test Score is : " << test_scores[2] << std::endl;
    std::cout << "Test Score is : " << test_scores[3] << std::endl;
    std::cout << "Test Score is : " << test_scores[4] << std::endl;


    std::cout << "=============================================" << std::endl;
    test_scores[0] = 11;
    std::cout << "Test Score is : " << test_scores[0] << std::endl;
    std::cout << "Test Score is : " << test_scores[1] << std::endl;
    std::cout << "Test Score is : " << test_scores[2] << std::endl;
    std::cout << "Test Score is : " << test_scores[3] << std::endl;
    std::cout << "Test Score is : " << test_scores[4] << std::endl;
    std::cout << "=============================================" << std::endl;

    test_scores.push_back(55);

    std::cout << "=============================================" << std::endl;
    std::cout << "Test Score is : " << test_scores[0] << std::endl;
    std::cout << "Test Score is : " << test_scores[1] << std::endl;
    std::cout << "Test Score is : " << test_scores[2] << std::endl;
    std::cout << "Test Score is : " << test_scores[3] << std::endl;
    std::cout << "Test Score is : " << test_scores[4] << std::endl;
    std::cout << "Test Score is : " << test_scores[5] << std::endl;
    std::cout << "=============================================" << std::endl;

    std::cout << "=============================================" << std::endl;
    std::cout << "Test Score is : " << test_scores.at(0) << std::endl;
    std::cout << "Test Score is : " << test_scores.at(1) << std::endl;
    std::cout << "Test Score is : " << test_scores.at(2) << std::endl;
    std::cout << "Test Score is : " << test_scores.at(3) << std::endl;
    std::cout << "Test Score is : " << test_scores.at(4) << std::endl;
    std::cout << "Test Score is : " << test_scores.at(5) << std::endl;
    std::cout << "=============================================" << std::endl;
    std::cout << "There is number of elements in vector : " << test_scores.size() << std::endl;

    return 0;
}