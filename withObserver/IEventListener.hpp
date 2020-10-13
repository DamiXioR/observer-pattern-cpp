#pragma once
#include <string>
#include <vector>

class IEventInformer;

class IEventListener {
public:
    virtual ~IEventListener() = 0;
    virtual void updateInformations() = 0;
    virtual void updateInformations(std::string informationContent) = 0;
    virtual void addInformer(IEventInformer* informer);

protected:
    std::vector<IEventInformer*> informer_;
};
