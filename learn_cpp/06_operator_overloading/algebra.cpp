#include <iostream>
#include <string>

class Vec2
{
public:
	float x, y;

	Vec2(float x, float y) : x(x), y(y) {}

	Vec2	add(const Vec2& cor) const {
		return Vec2(x + cor.x, y + cor.y);
	}

	// For inside : take 1 parameter
	Vec2	operator+(const Vec2& cor) const {
		return add(cor);
	}

	bool	operator==(const Vec2& other) const {
		return (x == other.x && y == other.y);
	}

	bool	operator!=(const Vec2& operand) const {
		return !(*this == operand);
	}
};

// For outside Object : take 2 parameter
// Box operator+(const Box&, const Box&)
Vec2	operator*(const Vec2& a, const Vec2& b) {
	return Vec2(a.x * b.x, a.y * b.y);
}

std::ostream&	operator<<(std::ostream& OUT, Vec2& cor) {
	OUT << "x: " << cor.x << ", " << "y: " << cor.y;
	return (OUT);
}

int	main(void)
{
	Vec2	point1(4, 4);
	Vec2	point2(2, 2);
	Vec2	point3(3, 3);

	Vec2	result1 = point1.add(point2);
	Vec2	result2 = point1 * point2 * point3;
	std::cout << "result1: " << result1 << std::endl;
	std::cout << "result2: " << result2 << std::endl;

	if (result1 == result2)
		std::cout << "result1 equal result2" << std::endl;
	else
		std::cout << "result1 not equal result2" << std::endl;
		


	return (0);
}