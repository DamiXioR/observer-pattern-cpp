#pragma once

#include <vector>
#include "IEventListener.hpp"

class EventInformer {
public:
    virtual void addListener() = 0;
    virtual void removeListener() = 0;
    virtual void notifyListeners() = 0;

private:
    std::vector<IEventListener*> eventListeners_{};
};
