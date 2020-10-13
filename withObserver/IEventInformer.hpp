#pragma once

#include <vector>
#include "IEventListener.hpp"

class IEventInformer {
public:
    virtual void addListener(IEventListener* listener) = 0;
    virtual void removeListener(IEventListener* listener) = 0;
    virtual void notifyListeners() = 0;

protected:
    std::vector<IEventListener*> eventListeners_{};
};
