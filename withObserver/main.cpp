#include "Player.hpp"
#include "DragonsEventInformer.hpp"
#include <iostream>

int main()
{
    std::cout << "FIRST STEP\n";
    DragonsEventInformer dragonsInformer;
    Player* playerDragonSlayer = new Player("Nameless");
    dragonsInformer.addListener(playerDragonSlayer);
    dragonsInformer.notifyListeners();

    std::cout << "SECOND STEP\n";
    Player* playerWarrior = new Player("Conan");
    dragonsInformer.addListener(playerWarrior);
    dragonsInformer.notifyListeners();

    std::cout << "THIRD STEP\n";
    Player* playerArcher = new Player("Legolas");
    dragonsInformer.addListener(playerArcher);
    dragonsInformer.notifyListeners();

    std::cout << "FOURTH STEP\n";
    dragonsInformer.removeListener(playerDragonSlayer);
    dragonsInformer.notifyListeners();

    return 0;
}