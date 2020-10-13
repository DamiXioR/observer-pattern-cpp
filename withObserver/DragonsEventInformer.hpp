#pragma once
#include "IEventInformer.hpp"

class DragonsEventInformer : public IEventInformer {
public:
    void addListener(IEventListener* listener);
    void removeListener(IEventListener* listener);
    void notifyListeners();
};
