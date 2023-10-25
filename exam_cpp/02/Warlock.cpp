#include "Warlock.hpp"

Warlock::Warlock(std::string Name, std::string Title) : name(Name), title(Title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const & other) : name(other.name), title(other.title), spell(other.spell)
{
	std::cout << "Copy Constructor" << std::endl;
}

Warlock&	Warlock::operator=(Warlock const & other)
{
	if (this != &other)
	{
		name = other.name;
		title = other.title;
		spell = other.spell;
		std::cout << "Copy assignment operator" << std::endl;
	}
	return *this;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}


void	Warlock::introduce() const {
	std::cout << name << " I am " << name << ", " << title << "!" << std::endl;
}

// Setter
void	Warlock::setTitle(std::string const & Title) {title = Title;}
// Getter
std::string const &	Warlock::getName() const {return name;}
std::string const &	Warlock::getTitle() const {return title;}

void	Warlock::learnSpell(ASpell*	Spell)
{
	if (!Spell)
		return ;
	spell[Spell->getName()] = Spell;
}

void	Warlock::forgetSpell(std::string const SpellName)
{
	std::map<std::string, ASpell*>::iterator	it;

	it = spell.find(SpellName);
	spell.erase(it);
}

void	Warlock::launchSpell(std::string SpellName, ATarget& target)
{
	if (spell.find(SpellName) != spell.end())
		target.getHitBySpell(*spell[SpellName]);
}