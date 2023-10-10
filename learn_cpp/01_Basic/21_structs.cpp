#include <iostream>

struct Car
{
	std::string	model;
	int	year;
	std::string color;
};

void	ChangeColor(Car &car, std::string color);
void	DisplayCar(Car car);

int	main(void)
{
	Car	car1;
	Car	car2;

	car1.model = "Benz";
	car1.year = 2013;
	car1.color = "Green";

	car2.model = "Toyota";
	car2.year = 2015;
	car2.color = "Blue";
	ChangeColor(car1, "Bronze");
	ChangeColor(car2, "Silver");
	DisplayCar(car1);
	DisplayCar(car2);

	return (0);
}

void	ChangeColor(Car &car, std::string color)
{
	car.color = color;
}

void	DisplayCar(Car car)
{
	std::cout << "Model :" << car.model << " ";
	std::cout << "Year :" << car.year << " ";
	std::cout << "Color :" << car.color << std::endl;
}

