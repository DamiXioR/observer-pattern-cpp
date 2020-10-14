#pragma once
#include <string>
#include "IEventListener.hpp"

class Player : public IEventListener {
public:
    Player(std::string name);
    void updateInformations() override;
    void updateInformations(std::string informationContent) override;

private:
    std::string name_{};
};
