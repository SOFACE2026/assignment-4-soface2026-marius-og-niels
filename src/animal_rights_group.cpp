#include "animal_rights_group.hpp"

AnimalRightsGroup::AnimalRightsGroup(int n_monkeys, int n_tigers, int n_fish)
    : n_monkeys(n_monkeys), n_tigers(n_tigers), n_fish(n_fish),
      n_monkeys_fed(0), n_tigers_scratched(0), n_fish_teeth_brushed(0)
{
}

// Implement this (Observer part)
void AnimalRightsGroup::update(AnimalEvent event)
{
    switch (event) // vi har lavet det om til en switch, da det er langt sejere og hurtigere.
    {
    case MonkeyFed:
        n_monkeys_fed++;
        break;
    case TigerScratched:
        n_tigers_scratched++;
        break;
    case FishTeethCleaned:
        n_fish_teeth_brushed++;
        break;
     }
}

bool AnimalRightsGroup::animals_ok()
{
    // do not modify
    return (n_monkeys == n_monkeys_fed && n_tigers == n_tigers_scratched && n_fish == n_fish_teeth_brushed);
}