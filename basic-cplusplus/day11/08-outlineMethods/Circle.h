#pragma once
class Circle {
private:
	int m_radius;
public: //constructor section
		//non-parametric, default constructor
	Circle();
	Circle(int r);
public:
	int GetRadius();
	void SetRadius(int r);
public:
	void Print();
};
