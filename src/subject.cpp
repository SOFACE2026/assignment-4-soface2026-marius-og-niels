#include "subject.hpp"

// Implement this (Observer part)
void Subject::attach(Observer *subscriber)
{
    this->subscribers.push_back(subscriber); //implementeret attach
}

// Implement this (Observer part)
void Subject::detach(Observer *subscriber)
{
    this->subscribers.pop_back(); // implementeret med pop_back
}

// Implement this (Observer part)
void Subject::notify(AnimalEvent event)
{
    for (int i = 0; i < this->subscribers.size(); i++){
        subscribers[i]->update(event); // lidt løkke logik
    }
}