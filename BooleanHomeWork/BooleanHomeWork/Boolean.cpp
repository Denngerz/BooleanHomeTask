#include "Boolean.h"
#include <iostream>
#include <cmath>

void Boolean::Boolean1(const float a) {
	bool answer = (a > 0);

	std::cout << answer << std::endl;
}

void Boolean::Boolean2(const int a) {
	bool is_odd = (a % 2 == 1);

	std::cout << is_odd << std::endl;
}

void Boolean::Boolean5(const int a, const int b) {
	bool is_true = (a >= 0 || b < -2);

	std::cout << is_true << std::endl;
}

void Boolean::Boolean6(const int a, const int b, const int c) {
	bool is_true = (a < b && b < c);

	std::cout << is_true << std::endl;
}

void Boolean::Boolean8(const int a, const int b) {
	bool is_true = (a % 2 == 1 && b % 2 == 1);

	std::cout << is_true << std::endl;
}

void Boolean::Boolean11(const int a, const int b) {
	bool is_true = (b % 2 == a % 2);

	std::cout << is_true << std::endl;
}

void Boolean::Boolean14(const int a, const int b, const int c) {
	bool is_true = ( ((a > 0) + (b > 0) + (c > 0)) == 1);

	std::cout << is_true << std::endl;
}

void Boolean::Boolean17(const int a) {
	bool is_three = (a / 100 > 0);
	bool is_odd = (a % 2 == 1);

	bool is_true = (is_three && is_odd);

	std::cout << is_true << std::endl;
}

void Boolean::Boolean19(const int a, const int b, const int c) {
	bool is_true = ((a == -c) || (b == -c) || (b == -a));

	std::cout << is_true << std::endl;
}

void Boolean::Boolean20(const int a) {
	int first_digit = a / 100;
	int second_digit = (a % 100) / 10;
	int third_digit = a % 10;

	bool is_true = (first_digit != second_digit && second_digit != third_digit && third_digit != first_digit);

	std::cout << is_true << std::endl;
}

void Boolean::Boolean22(const int a) {
	int first_digit = a / 100;
	int second_digit = (a % 100) / 10;
	int third_digit = a % 10;

	bool is_true = ((second_digit - first_digit) ==  (third_digit - second_digit) || (second_digit - third_digit) == (first_digit - second_digit));

	std::cout << is_true << std::endl;
}

void Boolean::Boolean24(const int a, const int b, const int c) {
	float discriminant = b * b - 4 * a * c;

	bool is_true = discriminant >= 0;

	std::cout << is_true << std::endl;
}


void Boolean::Boolean26(const int x, const int y) {
	bool is_true = (x > 0 && y < 0);

	std::cout << is_true << std::endl;
}

void Boolean::Boolean28(const int x, const int y) {
	bool is_true = ((x > 0 && y > 0)  || (x < 0 && y < 0));

	std::cout << is_true << std::endl;
}

void Boolean::Boolean29(const int x, const int y, const int x1, const int y1, const int x2, const int y2) {
	bool is_true = ((x < x1) && (x > x2) && (y > y2) && (y < y1));

	std::cout << is_true << std::endl;
}

void Boolean::Boolean32(const int a, const int b, const int c) {
	const int a_sq = pow(a, 2);
	const int b_sq = pow(b, 2);
	const int c_sq = pow(c, 2);

	bool is_true = ((a_sq + b_sq == c_sq) || (b_sq + c_sq == a_sq) || (a_sq + c_sq == b_sq));

	std::cout << is_true << std::endl;
}

void Boolean::Boolean33(const int a, const int b, const int c) {
	bool is_true = ((a + b > c)|| (a + c > b) || (b + c > a));

	std::cout << is_true << std::endl;
}

void Boolean::Boolean34(const int x, const int y) {
	bool is_true = (((x % 2 == 1) && (y % 2 == 0)) || ((x % 2 == 0) && (y % 2 == 1)));

	std::cout << is_true << std::endl;
}

void Boolean::Boolean35(const int x1, const int y1, const int x2, const int y2) {
	bool is_white_1 = (((x1 % 2 == 1) && (y1 % 2 == 0)) || ((x1 % 2 == 0) && (y1 % 2 == 1)));
	bool is_white_2 = (((x2 % 2 == 1) && (y2 % 2 == 0)) || ((x2 % 2 == 0) && (y2 % 2 == 1)));

	bool is_true = is_white_1 == is_white_2;

	std::cout << is_true << std::endl;
}

void Boolean::Boolean36(const int x1, const int y1, const int x2, const int y2) {
	bool is_true = (x1 == x2 || y1 == y2);

	std::cout << is_true << std::endl;
}

void Boolean::Boolean37(const int x1, const int y1, const int x2, const int y2) {
	bool is_true = ((fabs(x2 - x1) == 1 && fabs(y2 - y1) <= 1) || (fabs(y2 - y1) == 1 && fabs(x2 - x1) <= 1) || (fabs(y2 - y1) == 1 && fabs(x2 - x1) == 1));

	std::cout << is_true << std::endl;
}

void Boolean::Boolean38(const int x1, const int y1, const int x2, const int y2) {
	bool is_true = ((x2 - x1) == (y2 - y1));

	std::cout << is_true << std::endl;
}

void Boolean::Boolean39(const int x1, const int y1, const int x2, const int y2) {
	bool is_true = (x1 == x2) || (y1 == y2) || (x2 - x1) == (y2 - y1);

	std::cout << is_true << std::endl;
}

void Boolean::Boolean40(const int x1, const int y1, const int x2, const int y2) {
	bool is_true = ((fabs(x2 - x1) == 1 && fabs(y2 - y1) == 2) || (fabs(x2 - x1) == 2 && fabs(y2 - y1) == 1));

	std::cout << is_true << std::endl;
}

