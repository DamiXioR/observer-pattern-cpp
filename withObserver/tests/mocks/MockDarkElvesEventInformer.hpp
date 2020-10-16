#include "../../DarkElvesEventInformer.hpp"
#include "gmock/gmock.h"


class MockDarkElvesEventInformer : public DarkElvesEventInformer {
public:
    MOCK_METHOD(void, notifyListeners, (), (override));
};
