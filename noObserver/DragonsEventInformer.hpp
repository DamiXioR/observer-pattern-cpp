#pragma once

#include "IEventInformer.hpp"

class DragonsEventInformer : public IEventInformer {
public:
    void addNewEvent() override;
};
