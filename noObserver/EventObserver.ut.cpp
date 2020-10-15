#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "DarkElvesEventInformer.hpp"
#include "DragonsEventInformer.hpp"
#include "Player.hpp"

SCENARIO("", "[Testing Observer Pattern]")
{
    GIVEN("Dragon Event Informer and Player")
    {
        WHEN("Add player to Dragon Event Informer List")
        {
            THEN("Player should be notified")
            {
            }
        }
    }
}
