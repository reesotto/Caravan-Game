#include<iostream>
#include<ctime>

const int STARTING_FLOUR = 100;
const int STARTING_MEAT = 30;
const int STARTING_VEGETABLES = 50;
const int FORAGE_CHANCE = 3;
const int SACKING_CHANCE = 5;
const int POACHING_CHANCE = 4;

void showMenu();
bool forageChance(int chance);
bool poachingChance(int chance);
bool sackingChance(int chance);


int main(){

    int flour = STARTING_FLOUR;
    int meat = STARTING_MEAT;
    int vegetables = STARTING_VEGETABLES;
    int forage_count, sacking_count, poaching_count;
    int forage_chance, poaching_chance, sacking_chance;
    forage_count = sacking_count = poaching_count = 0;
    bool forage_event, sacking_event, poaching_event;

    int march_distance;

    std::cout << "************************************************ Medieval army commander simulator *******************************************************\n";
    std::cout << "Welcome! You must be the new commander, your task is to ration our food and get us to destination, don't disappoint us or you'll be sacked!\n";
    srand(time(NULL));

    showMenu();

    //number between 1 and 200
    march_distance = rand() % 200 + 1;
    std::cout << "We must travel " << march_distance << "km to get to our destination.\n\n";

    if(poaching_chance == POACHING_CHANCE){
        std::cout << "Scouts have seen animals roaming in the woods!\n";
        poaching_event = true;
    }
    if(sacking_chance == SACKING_CHANCE){
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

void showMenu(){
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

}

bool foorageChance(int chance){
    int temp = rand() % chance + 1;
    if(temp == chance){
        std::cout << "Scouts discovered berries and vegetables in the woods!\n";
        return true;
    }
    return false;
}

bool poachingChance(int chance){
    int temp = rand() % chance + 1;
    if(temp == chance){
        
        return true;
    }
    return false;
}