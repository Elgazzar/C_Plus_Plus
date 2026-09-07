#include <iostream>

namespace myitems{
    
    int myitem = 15;
    void print()
    {
        std::cout << "my item" << std::endl;
    }
}

namespace mylibrary {
    namespace core
    {
        void log()
        {
            std::cout << "Hello From Log" << std::endl;
        }
    }
}

int main ()
{
    int room_width {0};
    std::cout << "enter a width of the room" << std::endl;
    std::cin >> room_width;

    int room_length {0};
    std::cout << "enter a length of the room" << std::endl;
    std::cin >> room_length;


    std::cout << "Area of the Room is : " << room_length *  room_width << std::endl;
    /*Scope Access*/
    std::cout << "My Item value is : " << myitems::myitem << std::endl;
    myitems::print();
    mylibrary::core::log();
}