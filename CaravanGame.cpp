#include<iostream>
#include<ctime>

int main(){
    std::cout << "***************************** Medieval army cook simulator ************************************\n";
    std::cout << "Welcome! You must be the new cook, your task it to ration our food, don't disappoint us or you'll be sacked!\n";
    srand(time(NULL));

    int forage_chance, sacking_chance, poaching_chance;
    int forage_count, sacking_count, poaching_count;
    forage_count = sacking_count = poaching_count = 0;
    bool forage_event, sacking_event, poaching_event;

    int march_distance;

    int flour = 50;
    int meat = 30;
    int vegetables = 20;

    int flour_req = 10;
    int meat_req = 5;
    int vegetables_req = 5;

    int player_select;
    do{
        std::cout << "\nSelect a number to show a menu:\n";
        std::cout << "1: Show the rules\n";
        std::cout << "2: Show the supplies\n";
        std::cout << "3: Embark!\n\n";
        std::cin >> player_select;

        switch (player_select)
        {
        case 1:
            std::cout << "Your objective is to get to the destination without running out of supplies. Each time the army stop you'll have a chance to get supplies by either foraging, hunting or sacking a village.\n";
            break;
        case 2:
            std::cout << "You start with " << flour << " sacks of flour, " << meat << " pieces of salted meat and " << vegetables << " sacks of vegetables.\n";
            break;
        case 3:
            std::cout << "Good luck and godspeed!\n";
            break;    
        default:
            std::cout << "Did you not learn how to read? You peasant!\n";
            break;
        }

    }while(player_select != 3);

    march_distance = rand() % 200 + 1;
    std::cout << "We must travel " << march_distance << "km to get to our destination.\n\n";

    forage_chance = rand() % 3 + 1;
    poaching_chance = rand() % 4 + 1;
    sacking_chance = rand() % 5 + 1;

    if(forage_chance == 3){
        std::cout << "Scouts have discovered some vegetables and berries in the woods!\n";
        forage_event = true;
    }
    if(poaching_chance == 4){
        std::cout << "Scouts have seen animals roaming in the woods!\n";
        poaching_event = true;
    }
    if(sacking_chance == 5){
        std::cout << "There is a nearby village! We could sack it for requisitions.\n";
        sacking_event = true;
    }

    while(forage_event || poaching_event || sacking_event){
        std::cout << "\nWhat do you choose?\n";
        std::cout << "1: Forage the woods\n";
        std::cout << "2: Hunt in the woods\n";
        std::cout << "3: Sack the village for supplies\n";

        std::cin >> player_select;
        switch (player_select)
        {
        case 1:
            if(forage_event){

            }
            else{

            }
        break;
        
        case 2:
            if(poaching_event){

            }
            else{

            }
        break;
        case 3:
            if(sacking_event){

            }
            else{

            }
        break;
        
        default:
            break;
        }
    }

    for(int i = 0; i < march_distance; i = i + 25){
        std:: cout << "Current travelled distance " << i << march_distance;

    }



    

}