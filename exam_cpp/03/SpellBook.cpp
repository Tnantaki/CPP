#include "SpellBook.hpp"

SpellBook::SpellBook()
{
	for (int i = 0; i < 3; i++)
		spell[i] = NULL;
}

SpellBook::SpellBook(SpellBook const & other)
{
	for (int i = 0; i < 3; i++)
		spell[i] = other.spell[i];
}

SpellBook&	SpellBook::operator=(SpellBook const & other)
{
	if (this != & other)
	{
		for (int i = 0; i < 3; i++)
		{
			if (spell[i])
			{
				delete spell[i];
				spell[i] = NULL;
			}
		}
		for (int i = 0; i < 3; i++)
			spell[i] = other.spell[i];
	}
	return *this;
}

SpellBook::~SpellBook()
{
	for (int i = 0; i < 3; i++)
	{
		if (spell[i])
		{
			delete spell[i];
			spell[i] = NULL;
		}
	}
}

// * void learnSpell(ASpell*), that COPIES a spell in the book
// * void forgetSpell(string const &), that deletes a spell from the book, except
//   if it isn't there
// * ASpell* createSpell(string const &), that receives a string corresponding to
//   the name of a spell, creates it, and returns it.

void	SpellBook::learnSpell(ASpell* Spell)
{
	std::cout << "in learn: " << &*Spell << std::endl;
	if (Spell->getName() == "Fwoosh")
	{
		if (spell[0] == NULL)
			spell[0] = Spell;
	}
	else if (Spell->getName() == "Fireball")
	{
		if (spell[1] == NULL)
			spell[1] = Spell;
	}
	else if (Spell->getName() == "Polymorph")
	{
		if (spell[2] == NULL)
			spell[2] = Spell;
	}
	return;
}
void	SpellBook::forgetSpell(std::string const & SpellName)
{
	if (SpellName == "Fwoosh")
	{
		if (spell[0] != NULL)
			delete spell[0];
	}
	else if (SpellName == "Fireball")
	{
		if (spell[1] != NULL)
			delete spell[1];
	}
	else if (SpellName == "Polymorph")
	{
		if (spell[2] != NULL)
			delete spell[2];
	}

}

ASpell*	SpellBook::createSpell(std::string const & SpellName)
{
	if (SpellName == "Fwoosh")
	{
		if (spell[0])
			return (spell[0]);
	}
	else if (SpellName == "Fireball")
	{
		if (spell[1])
			return (spell[1]);
	}
	else if (SpellName == "Polymorph")
	{
		std::cout << "Hello" << std::endl;
		std::cout << &*spell[2] << std::endl;
		if (spell[2])
			return (spell[2]);
	}
	return NULL;
}
