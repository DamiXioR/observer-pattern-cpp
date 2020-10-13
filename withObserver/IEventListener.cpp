#include "IEventListener.hpp"
#include "IEventInformer.hpp"

#include <algorithm>

IEventListener::~IEventListener()
{
    for (auto el : informer_) {
        el->removeListener(this);
    }
}

void IEventListener::addInformer(IEventInformer* informer)
{
    informer_.emplace_back(informer);
}

void IEventListener::removeInformer(IEventInformer* informer)
{
    if (!informer_.empty()) {
        auto founded = find_if(informer_.begin(), informer_.end(),
                               [informer](IEventInformer* everyInformer) {
                                   return everyInformer == informer;
                               });
        if (founded != informer_.end()) {
            informer_.erase(founded);
        }
    }
}