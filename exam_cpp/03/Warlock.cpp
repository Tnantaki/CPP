#include "Warlock.hpp"

Warlock::Warlock(std::string Name, std::string Title) : name(Name), title(Title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const & other) : name(other.name), title(other.title)
{
	std::cout << "Copy Constructor" << std::endl;
}

Warlock&	Warlock::operator=(Warlock const & other)
{
	if (this != &other)
	{
		name = other.name;
		title = other.title;
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
	book.learnSpell(Spell->clone());
}

void	Warlock::forgetSpell(std::string const SpellName)
{
	book.forgetSpell(SpellName);
}

void	Warlock::launchSpell(std::string SpellName, ATarget& target)
{
	ASpell*	spell = book.createSpell(SpellName);

	std::cout << "is allright" << std::endl;
	if (spell)
		spell->launch(target);
	return;
}