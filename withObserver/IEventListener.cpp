#include "IEventListener.hpp"
#include "IEventInformer.hpp"

#include <algorithm>

IEventListener::~IEventListener()
{
    std::for_each(informer_.begin(), informer_.end(),
                  [this](IEventInformer* singleInformer) {
                      singleInformer->removeListener(this);
                  });
}

void IEventListener::addInformer(IEventInformer* informer)
{
    informer_.emplace_back(informer);
}

void IEventListener::removeInformer(IEventInformer* informer)
{
    if (!informer_.empty()) {
        auto founded = find(informer_.begin(), informer_.end(), informer);
        if (founded != informer_.end()) {
            informer_.erase(founded);
        }
    }
}
