#include "DragonsEventInformer.hpp"
#include "algorithm"

void DragonsEventInformer::addListener(IEventListener* listener)
{
    eventListeners_.emplace_back(listener);
}

void DragonsEventInformer::removeListener(IEventListener* listener)
{
    auto founded = find_if(eventListeners_.begin(), eventListeners_.end(),
            [listener](IEventListener* everyListener) {
                return everyListener == listener;
            });
    if (founded != eventListeners_.end()){
        eventListeners_.erase(founded);
    }
}

void DragonsEventInformer::notifyListeners()
{
}
