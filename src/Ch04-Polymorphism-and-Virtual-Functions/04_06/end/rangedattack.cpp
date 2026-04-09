#include "rangedattack.h"

RangedAttack::RangedAttack(const std::string &name, int range)
    : Ability(name), rangeValue(range)
{
}

void RangedAttack::use() const
{
    std::cout << "Using Heat Vision!" << std::endl;
}

void RangedAttack::describe() const
{
    Ability::describe();
    std::cout << "Ranged attack: " << rangeValue << std::endl;
}