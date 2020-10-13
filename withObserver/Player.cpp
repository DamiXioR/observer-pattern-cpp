#include "Player.hpp"
#include <iostream>

Player::Player(std::string name) : name_(name){}

void Player::updateInformations()
{
    std::cout << name_ << " has a notice!\n";
}