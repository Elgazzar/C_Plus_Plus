#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums{10,20,30,40,50};
    for(int i{0}; i<nums.size();++i)
    {
        std::cout << nums[i] << std::endl;
    }
}