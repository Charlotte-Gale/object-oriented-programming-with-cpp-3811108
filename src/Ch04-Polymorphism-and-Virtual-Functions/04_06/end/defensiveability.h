#ifndef DEFENSIVE_ABILITY_H
#define DEFENSIVE_ABILITY_H

#include "ability.h"

class DefensiveAbility : public Ability
{
public:
  DefensiveAbility(const std::string &name, int protection);
  ~DefensiveAbility();

  virtual void use() const override;
  virtual void describe() const override;

    private : int protectionAmount; // Amount of protection provided
};

#endif