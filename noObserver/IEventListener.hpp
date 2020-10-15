#pragma once

#include <string>
#include <vector>

class IEventInformer;

class IEventListener {
public:
    virtual ~IEventListener(){};
    virtual void updateInformations() = 0;
    virtual void updateInformations(std::string informationContent) = 0;
    virtual void addInformer();
    virtual void checkInformer();

protected:
    std::vector<IEventInformer*> eventInformers_;
};
