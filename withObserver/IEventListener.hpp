#pragma once

class IEventListener {
public:
    virtual ~IEventListener() = 0;
    virtual void updateInformations() = 0;
};
