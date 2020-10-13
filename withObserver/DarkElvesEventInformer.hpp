#pragma once
#include "IEventInformer.hpp"

class DarkElvesEventInformer : public IEventInformer {
public:
    void notifyListeners();
};
