#include "IEventListener.hpp"

#include <algorithm>
#include <iostream>

void IEventListener::addInformer(IEventInformer* eventInformer)
{
    if (!eventInformers_.empty()) {
        auto founded = std::find_if(eventInformers_.begin(), eventInformers_.end(),
                                    [eventInformer](IEventInformer* singleEventInformer) {
                                        return singleEventInformer == eventInformer;
                                    });
        if (founded != eventInformers_.end()) {
            eventInformers_.emplace_back(eventInformer);
        }
    }

    if (eventInformers_.empty()) {
        eventInformers_.emplace_back(eventInformer);
    }
}
void IEventListener::checkInformer() {
    if (!eventInformers_.empty()){
        std::for_each(eventInformers_.begin(), eventInformers_.end(), [](IEventInformer* singleEventInformer){
            for(auto event : singleEventInformer->getEvents()){
                std::cout << event << "\n";
            }
        });
    }
}
