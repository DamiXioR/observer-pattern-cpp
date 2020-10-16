#include "../../Player.hpp"
#include "gmock/gmock.h"

class PlayerMock : public Player {
public:
    MOCK_METHOD(void, updateInformations, (), (override));
    MOCK_METHOD(void, updateInformations, (std::string informationContent), (override));
};
