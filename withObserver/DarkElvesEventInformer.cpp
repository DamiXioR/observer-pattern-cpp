#include "DarkElvesEventInformer.hpp"
#include <algorithm>

void DarkElvesEventInformer::notifyListeners()
{
    if (!eventListeners_.empty()) {
        std::for_each(eventListeners_.begin(), eventListeners_.end(), [](IEventListener* everyListener) {
            everyListener->updateInformations("respawn of dark elves!");
        });
    }
}