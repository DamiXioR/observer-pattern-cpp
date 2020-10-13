#pragma once

#include <vector>
#include "IEventListener.hpp"

class IEventInformer {
public:
    virtual void addListener() = 0;
    virtual void removeListener() = 0;
    virtual void notifyListeners() = 0;

protected:
    std::vector<IEventListener*> eventListeners_{};
};
