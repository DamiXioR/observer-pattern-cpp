#include "IEventListener.hpp"

IEventListener::~IEventListener(){}

void IEventListener::addInformer(IEventInformer* informer){
    informer_.emplace_back(informer);
}