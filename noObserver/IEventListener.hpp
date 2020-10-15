#pragma once

#include "IEventInformer.hpp"

#include <string>
#include <vector>

class IEventListener {
public:
    virtual ~IEventListener(){};
    virtual void updateInformations() = 0;
    virtual void updateInformations(std::string informationContent) = 0;
    virtual void addInformer(IEventInformer* eventInformer);
    virtual void checkInformer();

protected:
    std::vector<IEventInformer*> eventInformers_;
};
