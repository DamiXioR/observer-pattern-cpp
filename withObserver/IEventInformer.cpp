#include "IEventInformer.hpp"
#include <algorithm>

void IEventInformer::addListener(IEventListener* listener)
{
    auto founded = find_if(eventListeners_.begin(), eventListeners_.end(),
                           [listener](IEventListener* everyListener) {
                               return everyListener == listener;
                           });
    if (founded == eventListeners_.end()) {
        eventListeners_.emplace_back(listener);
    }
    listener->addInformer(this);
}

void IEventInformer::removeListener(IEventListener* listener)
{
    if (!eventListeners_.empty()) {
        auto founded = find_if(eventListeners_.begin(), eventListeners_.end(),
                               [listener](IEventListener* everyListener) {
                                   return everyListener == listener;
                               });
        if (founded != eventListeners_.end()) {
            eventListeners_.erase(founded);
        }
    }
}

void IEventInformer::notifyListeners()
{
    if (!eventListeners_.empty()) {
        std::for_each(eventListeners_.begin(), eventListeners_.end(), [](IEventListener* everyListener) {
            everyListener->updateInformations();
        });
    }
}
