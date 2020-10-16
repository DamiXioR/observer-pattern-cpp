#include "../../DragonsEventInformer.hpp"
#include "gmock/gmock.h"

class MockDragonsEventInformer : public DragonsEventInformer {
public:
    MOCK_METHOD(void, notifyListeners, (), (override));
};
