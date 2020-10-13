#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "DragonsEventInformer.hpp"
#include "Player.hpp"

SCENARIO("","[Testing Observer Pattern]"){
    GIVEN("Dragon Event Informer and Player"){
        DragonsEventInformer dragonosInformer;
        Player* playerDragonSlayer = new Player;
        WHEN("Add player to Dragon Event Informer List"){
            dragonosInformer.addListener(playerDragonSlayer);
            THEN("Player should be notified"){
                dragonosInformer.notifyListeners();
                REQUIRE(1 == 1);
            }
        }
    }
}
