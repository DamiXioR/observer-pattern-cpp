#pragma once
#include "IEventListener.hpp"
#include <string>

class Player : public IEventListener {
public:
    Player(std::string name);
    void updateInformations();
private:
    std::string name_{};
};
