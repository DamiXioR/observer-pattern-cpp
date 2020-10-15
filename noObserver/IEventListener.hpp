#pragma once

#include <vector>

class IEventInformer;

class IEventListener {
public:
    virtual ~IEventListener() {}
    virtual void updateInformations() = 0;
    virtual void updateInformations(std::string informationContent) = 0;

protected:
    IEventInformer* eventInformer1_{};
};
