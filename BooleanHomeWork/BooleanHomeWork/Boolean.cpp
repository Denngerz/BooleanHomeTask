#include "Boolean.h"
#include <iostream>

bool Boolean::Boolean1(const float a) {
	return a > 0;
}

bool Boolean::Boolean2(const int a) {
	return a % 2 == 1;
}

bool Boolean::Boolean5(const int a, const int b) {
	return  a >= 0 || b < -2;
}

bool Boolean::Boolean6(const int a, const int b, const int c) {
	return  (a < b && b < c);
}
 
bool Boolean::Boolean7(const int a, const int b, const int c) {
	return b > a && c > b || b < a && c < b;
}

bool Boolean::Boolean8(const int a, const int b) {
	return (a * b % 2);
}

bool Boolean::Boolean11(const int a, const int b) {
	return (a - b) % 2;
}

bool Boolean::Boolean12(const int a, const int b, const int c) {
	return (a > 0) + (b > 0) + (c > 0) == 3;
 }

bool Boolean::Boolean13(const int a, const int b, const int c) {
	return (a > 0) + (b > 0) + (c > 0) >= 1;
}

bool Boolean::Boolean14(const int a, const int b, const int c) {
	return (a > 0) + (b > 0) + (c > 0) == 1;
}

bool Boolean::Boolean17(const int a) {
	bool is_three = a >= 100 && a < 1000;
	bool is_odd = (a % 2 == 1);

	return is_three && is_odd;
}

bool Boolean::Boolean19(const int a, const int b, const int c) {
	return (a == -c) || (b == -c) || (b == -a);
}

bool Boolean::Boolean20(const int a) {
	int first_digit = a / 100;
	int second_digit = (a % 100) / 10;
	int third_digit = a % 10;

	bool is_true = (first_digit != second_digit && second_digit != third_digit && third_digit != first_digit);

	return is_true;
}

bool Boolean::Boolean22(const int a) {
	int first_digit = a / 100;
	int second_digit = (a % 100) / 10;
	int third_digit = a % 10;

	return (second_digit - first_digit) == (third_digit - second_digit) || (second_digit - third_digit) == (first_digit - second_digit);
}

bool Boolean::Boolean24(const int a, const int b, const int c) {
	return b * b - 4 * a * c >= 0;
}

bool Boolean::Boolean26(const int x, const int y) {
	return x > 0 && y < 0;
}

bool Boolean::Boolean28(const int x, const int y) {
	return (x > 0 && y > 0) || (x < 0 && y < 0);
}

bool Boolean::Boolean29(const int x, const int y, const int x1, const int y1, const int x2, const int y2) {
	return (x < x1) && (x > x2) && (y > y2) && (y < y1);
}

bool Boolean::Boolean32(const int a, const int b, const int c) {
	const int a_sq = pow(a, 2);
	const int b_sq = pow(b, 2);
	const int c_sq = pow(c, 2);

	return (a_sq + b_sq == c_sq) || (b_sq + c_sq == a_sq) || (a_sq + c_sq == b_sq);
}

bool Boolean::Boolean33(const int a, const int b, const int c) {
	return (a + b > c) || (a + c > b) || (b + c > a);
}

bool Boolean::Boolean34(const int x, const int y) {
	return (x % 2 == 1) && (y % 2 == 0) || (x % 2 == 0) && (y % 2 == 1);
}

bool Boolean::Boolean35(const int x1, const int y1, const int x2, const int y2) {
	bool is_white_1 = (((x1 % 2 == 1) && (y1 % 2 == 0)) || ((x1 % 2 == 0) && (y1 % 2 == 1)));
	bool is_white_2 = (((x2 % 2 == 1) && (y2 % 2 == 0)) || ((x2 % 2 == 0) && (y2 % 2 == 1)));

	return is_white_1 == is_white_2;
}

bool Boolean::Boolean36(const int x1, const int y1, const int x2, const int y2) {
	return  (x1 == x2 || y1 == y2);
}

bool Boolean::Boolean37(const int x1, const int y1, const int x2, const int y2) {
	return (abs(x2 - x1) == 1 && abs(y2 - y1) <= 1) || (abs(y2 - y1) == 1 && abs(x2 - x1) <= 1);
}

bool Boolean::Boolean38(const int x1, const int y1, const int x2, const int y2) {
	return abs(x2 - x1) == abs(y2 - y1);
}

bool Boolean::Boolean39(const int x1, const int y1, const int x2, const int y2) {
	return (x1 == x2) || (y1 == y2) || (x2 - x1) == (y2 - y1);
}

bool Boolean::Boolean40(const int x1, const int y1, const int x2, const int y2) {
	return (abs(x2 - x1) == 1 && abs(y2 - y1) == 2) || (abs(x2 - x1) == 2 && abs(y2 - y1) == 1);
}

