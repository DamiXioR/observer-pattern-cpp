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

    std::cout << "FIFTH STEP\n";
    dragonsInformer.removeListener(playerWarrior);
    dragonsInformer.notifyListeners();

    std::cout << "SIXTH STEP\n";
    dragonsInformer.removeListener(playerArcher);
    dragonsInformer.notifyListeners();

    std::cout << "SEVENTH STEP\n";
    Player* playerMage = new Player("Gandalf");
    Player* playerWitcher = new Player("Geralt");
    Player* playerDwarf = new Player("Gimli");
    dragonsInformer.addListener(playerMage);
    dragonsInformer.addListener(playerWitcher);
    dragonsInformer.addListener(playerDwarf);
    dragonsInformer.notifyListeners();
    
    std::cout << "EIGHT STEP\n";
    //dragonsInformer.removeListener(playerMage);
    delete playerMage;
    dragonsInformer.notifyListeners();

    return 0;
}