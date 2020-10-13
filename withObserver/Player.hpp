#pragma once
#include "IEventListener.hpp"
#include <string>

class Player : public IEventListener {
public:
    Player(std::string name);
    void updateInformations();
    void updateInformations(std::string informationContent);
private:
    std::string name_{};
};
