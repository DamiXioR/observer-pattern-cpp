#pragma once

#include <string>
#include <vector>

class IEventInformer {
public:
    virtual ~IEventInformer(){};
    virtual void addNewEvent();

protected:
    std::vector<std::string> events_;
};
