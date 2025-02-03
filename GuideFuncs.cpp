#include <cstdlib>
#include <string>
#include "Guide.h"

Dice::Dice(int sides){
    this->sides = sides;//this-> shows the code the current object we're working on 
    this->num = 0;
}

int Dice::roll(){
    this->num = rand() % sides + 1;
    return this->num;

}