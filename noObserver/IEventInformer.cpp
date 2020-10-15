#include "IEventInformer.hpp"

void IEventInformer::addNewEvent()
{
}

std::vector<std::string>& IEventInformer::getEvents()
{
    return events_;
}
