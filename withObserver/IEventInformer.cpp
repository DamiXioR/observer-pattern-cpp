#include "IEventInformer.hpp"
#include <algorithm>

IEventInformer::~IEventInformer() {}

void IEventInformer::addListener(IEventListener* listener)
{
    auto founded = find(eventListeners_.begin(), eventListeners_.end(), listener);

    if (founded == eventListeners_.end()) {
        eventListeners_.emplace_back(listener);
        listener->addInformer(this);
    }
}

void IEventInformer::removeListener(IEventListener* listener)
{
    if (!eventListeners_.empty()) {
        auto founded = find(eventListeners_.begin(), eventListeners_.end(), listener);
        if (founded != eventListeners_.end()) {
            eventListeners_.erase(founded);
            listener->removeInformer(this);
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
