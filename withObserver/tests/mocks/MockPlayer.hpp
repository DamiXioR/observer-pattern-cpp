#include "../../Player.hpp"
#include "gmock/gmock.h"

class MockPlayer : public Player {
public:
    MockPlayer(std::string name) : Player(name){}
    ~MockPlayer(){}
    MOCK_METHOD(void, updateInformations, (), (override));
    MOCK_METHOD(void, updateInformations, (std::string informationContent), (override));
};
