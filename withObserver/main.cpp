#include "Player.hpp"
#include "DragonsEventInformer.hpp"
#include "DarkElvesEventInformer.hpp"
#include <iostream>
#include <memory>

int main()
{
    std::cout << "\nFIRST STEP\n\n";
    DragonsEventInformer dragonsInformer;
    DarkElvesEventInformer darkElvesInformer;

    std::shared_ptr<Player> playerDragonSlayer (new Player("Nameless"));
    dragonsInformer.addListener(playerDragonSlayer.get());
    dragonsInformer.notifyListeners();

    std::cout << "\nSECOND STEP\n\n";
    std::shared_ptr<Player> playerWarrior (new Player("Conan"));
    dragonsInformer.addListener(playerWarrior.get());
    dragonsInformer.notifyListeners();

    std::cout << "\nTHIRD STEP\n\n";
    std::shared_ptr<Player> playerArcher (new Player("Legolas"));
    dragonsInformer.addListener(playerArcher.get());
    dragonsInformer.notifyListeners();

    std::cout << "\nFOURTH STEP\n\n";
    dragonsInformer.removeListener(playerDragonSlayer.get());
    dragonsInformer.notifyListeners();

    std::cout << "\nFIFTH STEP\n\n";
    dragonsInformer.removeListener(playerWarrior.get());
    darkElvesInformer.addListener(playerWarrior.get());
    dragonsInformer.notifyListeners();
    darkElvesInformer.notifyListeners();

    std::cout << "\nSIXTH STEP\n\n";
    dragonsInformer.removeListener(playerArcher.get());
    dragonsInformer.addListener(playerWarrior.get());
    dragonsInformer.notifyListeners();
    darkElvesInformer.notifyListeners();

    std::cout << "\nSEVENTH STEP\n\n";
    std::shared_ptr<Player> playerMage (new Player("Gandalf"));
    std::shared_ptr<Player> playerWitcher (new Player("Geralt"));
    std::shared_ptr<Player> playerDwarf (new Player("Gimli"));
    dragonsInformer.addListener(playerMage.get());
    dragonsInformer.addListener(playerWitcher.get());
    dragonsInformer.addListener(playerDwarf.get());
    darkElvesInformer.removeListener(playerWarrior.get());
    dragonsInformer.notifyListeners();
    darkElvesInformer.notifyListeners();
    
    std::cout << "\nEIGHT STEP\n\n";
    dragonsInformer.removeListener(playerMage.get());
    playerMage.reset();
    dragonsInformer.notifyListeners();

    std::cout << "\nEND GAME\n\n";

    return 0;
}