#include "IEventInformer.hpp"

void IEventInformer::addNewEvent(std::string incomingEvent)
{
    events_.emplace_back(incomingEvent);
}

std::vector<std::string>& IEventInformer::getEvents()
{
    return events_;
}
