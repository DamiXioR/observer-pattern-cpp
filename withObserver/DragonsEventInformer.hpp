#pragma once
#include "IEventInformer.hpp"

class DragonsEventInformer : public IEventInformer {
public:
    void addListener();
    void removeListener();
    void notifyListeners();
};
