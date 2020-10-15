#pragma once

#include <string>
#include <vector>

class IEventInformer {
public:
    virtual ~IEventInformer(){};
    virtual void addNewEvent(std::string incomingEvent);
    virtual std::vector<std::string>& getEvents();

protected:
    std::vector<std::string> events_;
};
