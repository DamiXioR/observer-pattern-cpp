#include "DragonsEventInformer.hpp"
#include <algorithm>

void DragonsEventInformer::notifyListeners()
{
    if (!eventListeners_.empty()) {
        std::for_each(eventListeners_.begin(), eventListeners_.end(), [](IEventListener* everyListener) {
            everyListener->updateInformations("respawn of dragons!");
        });
    }
}