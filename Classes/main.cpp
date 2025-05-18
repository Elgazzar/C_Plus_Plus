#include <iostream>
#include <vector>
#include <string.h>

class Player{
    //attributes
    std::string name;
    int health;
    int xp;

    //methods function protoypes
    void talk(std::string);
    void is_dead();

};

class Accout{
    //attributes
    std::string name;
    double balance;

    //methods
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Player frank;
    Player hero;

    Player players[] {frank,hero};
    Player *enemy = nullptr;
    std::vector <Player> player_vec;

    player_vec.push_back(hero);
    player_vec.push_back(frank);

    enemy = new Player;

    delete enemy;

    return 0;

}