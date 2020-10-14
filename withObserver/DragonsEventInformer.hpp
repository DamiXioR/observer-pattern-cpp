#pragma once
#include "IEventInformer.hpp"

class DragonsEventInformer : public IEventInformer {
public:
    void notifyListeners() override;
};
