#include "IEventListener.hpp"
#include "IEventInformer.hpp"

IEventListener::~IEventListener(){
    for(auto el : informer_){
        el->removeListener(this);
    }
}

void IEventListener::addInformer(IEventInformer* informer){
    informer_.emplace_back(informer);
}