#pragma once

#include <vector>
#include "IEventListener.hpp"

class IEventInformer {
public:
    virtual void addListener(IEventListener* listener);
    virtual void removeListener(IEventListener* listener);
    virtual void notifyListeners();

protected:
    std::vector<IEventListener*> eventListeners_{};
};
