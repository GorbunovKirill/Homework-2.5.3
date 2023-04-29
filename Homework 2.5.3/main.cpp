#include <iostream>

class figure {
protected:

	int sides;
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
	std::string name;

public:

	figure() { sides = 0; name = "Фигура: "; }
	figure(int sides) { this->sides = sides; name = "Фигура: "; }

	int get_sides() {
		return sides;
	}
	std::string get_name() {
		return name;
	}

	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_d() {
		return d;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}
	int get_D() {
		return D;
	}


	virtual bool check() {
		this->sides;
		if (sides == 0) {

			return true;
		}
		else {  return false; }
	}


	virtual void print_info() {
		std::cout << "Название: " << get_name() << std::endl;
		if (check()) { std::cout << "Правильная "<<std::endl; }
		else { std::cout << "Неправильная "<<std::endl; }
		std::cout << "Количество сторон: " << get_sides()<<std::endl;
		
	};

};

class triangle:public figure {
public:

	triangle(int a, int b, int c, int  A, int B, int C) {
		sides = 3;
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		name = "Треугольник ";
	}
	bool check() override{
		this->A;
		this->B;
		this->C;
		this->sides;
		if (((sides==3) && (A + B + C) == 180)) {
			
			return true;}
		else { return false; }
}

	void print_info() override {
		std::cout << std::endl;
		figure::print_info();
		std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c() << std::endl;
		std::cout << "Углы: " << get_A() << " " << get_B() << " " << get_C() << std::endl;
		std::cout << std::endl;

	}

};


class quadrangle:public figure {

public:

	quadrangle(int a, int b, int c, int d, int  A, int B, int C, int D) {
		sides = 4;
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		name = "Четырёхугольник ";
	}

	bool check() override {
		this->A;
		this->B;
		this->C;
		this->sides;
		if (((sides == 4) && (A + B + C + D) == 360)) {

			return true;
		}
		else { return false; }
	}

	void print_info() override {
		std::cout << std::endl;
		figure::print_info();
		std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c() << " " << get_d() << std::endl;
		std::cout << "Углы: " << get_A() << " " << get_B() << " " << get_C() << " " << get_D() << std::endl;
		std::cout << std::endl;

	}

	
};





int main() {
	setlocale(LC_ALL, "Russian");

	figure one;
	triangle first(45, 33, 23, 30, 90, 60);
	quadrangle second(84, 74, 65, 50, 80, 20, 130, 130);

	
	one.print_info();
	first.print_info();
	second.print_info();
	


	return 0;
}
