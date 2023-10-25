#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock
{
	private:
		std::string	name;
		std::string	title;

		// coplien form
		Warlock();
		Warlock(Warlock const & other);
		Warlock&	operator=(Warlock const & other);
	public:
		// coplien form
		Warlock(std::string Name, std::string Title);
		~Warlock();

		// setter
		void	setTitle(std::string const & Title);
		// getter
		std::string const &	getName() const;
		std::string const &	getTitle() const;
		// member funciton
		void	introduce() const;
};

#endif