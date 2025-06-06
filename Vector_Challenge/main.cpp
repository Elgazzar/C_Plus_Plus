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

/*this is a two empty vectors vector1 and vector2 */
std::vector <int> vector1;
std::vector <int> vector2;

std::vector <std::vector <int>> vector_2d;

/*this is a vector of int */
// std::vector <int> test_scores {100,95,99,87,88};

int main()
{

     std::cout << "=============================================" << std::endl;
    /*push Element to the vector using push back*/
    vector1.push_back(10);
    vector1.push_back(20);
    /*Displaying the elements added to the vector*/
    std::cout << "Element 0 in vector1 is : " << vector1.at(0) << std::endl;
    std::cout << "Element 1 in vector1 is : " << vector1.at(1) << std::endl;
    /*Displaying the size*/
    std::cout << "vector 1 size is : " << vector1.size() << std::endl;
    std::cout << "=============================================" << std::endl;
    /*push Element to the vector using push back*/
    vector2.push_back(10);
    vector2.push_back(20);
    /*Displaying the elements added to the vector*/
    std::cout << "Element 0 in vector2 is : " << vector2.at(0) << std::endl;
    std::cout << "Element 1 in vector1 is : " << vector2.at(1) << std::endl;
    /*Displaying the size*/
    std::cout << "vector2 size is : " << vector2.size() << std::endl;
    std::cout << "=============================================" << std::endl;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    std::cout << "Element 0 in vector_2d is : " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "Element 1 in vector_2d is : " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Element 1 in vector_2d is : " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "Element 1 in vector_2d is : " << vector_2d.at(1).at(1) << std::endl;
    std::cout << "=============================================" << std::endl;
    vector1.at(0) = 1000;
    std::cout << "Element 0 in vector_2d is : " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "Element 1 in vector_2d is : " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Element 1 in vector_2d is : " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "Element 1 in vector_2d is : " << vector_2d.at(1).at(1) << std::endl;
    std::cout << "=============================================" << std::endl;
    
    return 0;
}