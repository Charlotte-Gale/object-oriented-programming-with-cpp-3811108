// meleeattack.cpp
#include "meleeattack.h"

MeleeAttack::MeleeAttack(const std::string &name, int force)
    : Ability(name), impactForce(force)
{
}

void MeleeAttack::use() const
{
    std::cout << "Using Super Strength!" << std::endl;
}

void MeleeAttack::describe() const
{
    Ability::describe();
    std::cout << "Impact Force: " << impactForce << std::endl;
}