#include "DarkElvesEventInformer.hpp"
#include "DragonsEventInformer.hpp"
#include "Player.hpp"

#include <iostream>
#include <memory>

int main()
{
    std::cout << "\nFIRST STEP\n\n";
    DragonsEventInformer* dragonsInformer = new DragonsEventInformer();
    DarkElvesEventInformer* darkElvesInformer = new DarkElvesEventInformer();

    Player p1("Lord British");
    p1.addInformer(dragonsInformer);
    p1.addInformer(darkElvesInformer);

    dragonsInformer->addNewEvent("Golden Dragon respawn!");

    p1.checkInformer();

    std::cout << "\nSECOND STEP\n\n";

    dragonsInformer->addNewEvent("Green Dragon respawn!");

    p1.checkInformer();

    std::cout << "\nTHIRD STEP\n\n";

    dragonsInformer->addNewEvent("Red Dragon respawn!");
    darkElvesInformer->addNewEvent("Some Dark Elves Warriors respawn!");

    p1.checkInformer();

    std::cout << "\nFOURTH STEP\n\n";

    p1.updateInformations();

    std::cout << "\nFIFTH STEP\n\n";

    std::cout << "\nSIXTH STEP\n\n";

    std::cout << "\nSEVENTH STEP\n\n";

    std::cout << "\nEIGHT STEP\n\n";

    std::cout << "\nNINGHT STEP\n\n";

    std::cout << "\nEND GAME\n\n";

    return 0;
}