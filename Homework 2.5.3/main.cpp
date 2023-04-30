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
		else { return false; }
	}

public:

	figure() { sides = 0; name = "Фигура: "; }

	virtual void print_info() {
		std::cout << std::endl;
		std::cout << "Название: " << get_name() << std::endl;
		if (check()) { std::cout << "Правильная "<<std::endl; }
		else { std::cout << "Неправильная "<<std::endl; }
		std::cout << "Количество сторон: " << get_sides()<<std::endl;
		
	};

};

class triangle:public figure {
protected:

void print_s_a_t() {
		std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c() << std::endl;
		std::cout << "Углы: " << get_A() << " " << get_B() << " " << get_C() << std::endl;
}

bool check() override {

	if (((sides == 3) && (A + B + C) == 180)) {

		return true;
	}
	else { return false; }
}

public:

	triangle(int a, int b, int c, int  A, int B, int C) {
		sides = 3;
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		name = "Треугольник ";
	}

	void print_info() override {
		
		figure::print_info();
		print_s_a_t();
	}

};


class quadrangle:public figure {

protected:

void print_s_a_f() {
		std::cout << "Стороны: " << get_a() << " " << get_b() << " " << get_c() << " " << get_d() << std::endl;
		std::cout << "Углы: " << get_A() << " " << get_B() << " " << get_C() << " " << get_D() << std::endl;
}

bool check() override {

	if (((sides == 4) && (A + B + C + D) == 360)) {

		return true;
	}
	else { return false; }
}

public:

	quadrangle(int a, int b, int c, int d, int  A, int B, int C, int D) {
		sides = 4;
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		name = "Четырёхугольник ";
	}


	void print_info() override {
		
		figure::print_info();
		print_s_a_f();
		
	}
	
};

class right_tri :public triangle {
protected:

bool check() override {
		if (triangle::check() && (C == 90)) {

			return true;
		}
		else { return false; }
	}

public:
	right_tri(int a, int b, int c, int  A, int B) :triangle(a,b,c,A,B,C){
		
		C = 90;
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B;
		name = "Прямоугольный треугольник ";
	}

	void print_info() override {
		
		triangle::print_info();

	}


};


class isos_tri :public triangle {
protected:

bool check() override {
		if (triangle::check() && (A == C) && (a == c)) {

			return true;
		}
		else { return false; }
}


public:
	isos_tri(int a, int b, int  A, int B) :triangle(a, b, c, A, B, C) {
		C = A;
		c = a;
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		name = "Равнобедренный треугольник ";
	}

	void print_info() override {

		triangle::print_info();
	}

};

class equil_tri :public triangle {
protected:

	bool check() override {
		if (triangle::check() &&
		(A == 60) && (a == b)&&(A==B)&&(B==C)&&(b==c)&&(c==a)) {
			return true;
		}
		else { return false; }
	}


public:
	equil_tri(int a) :triangle(a, b, c, A, B, C) {
		A=B=C=60;
		c=b=a;
		this->a = a; this->b = b; this->c = c;
		this->A = A; this->B = B; this->C = C;
		name = "Равносторонний треугольник ";
	}

	void print_info() override {

		triangle::print_info();
	}

};


class rectangle :public quadrangle {
protected:

	bool check() override {
		if (quadrangle::check() &&
			(A == 90) && (a == c) && (A == B) && (B == C) && (b == d)&&(C == D) ) {
			return true;
		}
		else { return false; }
	}


public:
	rectangle(int a, int b) :quadrangle(a, b, c,d, A, B, C,D) {
		
		A = B = C = D = 90;
		c=a;
		d = b;
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		name = "Прямоугольник ";
	}

	void print_info() override {

		quadrangle::print_info();
	}

};

class square :public quadrangle {
protected:

	bool check() override {
		if (quadrangle::check() &&
			(A == 90) && (a == b) && (A == B) && (B == C) && (b == c) && (C == D)&&(c==d)) {
			return true;
		}
		else { return false; }
	}


public:
	square(int a) :quadrangle(a, b, c, d, A, B, C, D) {
		A = B = C = D = 90;
		b=c=d=a;
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		name = "Квадрат ";
	}

	void print_info() override {

		quadrangle::print_info();
	}

};

class parallelogram :public quadrangle {
protected:

	bool check() override {
		if (quadrangle::check()
			&& (a == c) && (A == C) && (B == D) && (b == d)) {
			return true;
		}
		else { return false; }
	}


public:
	parallelogram(int a, int b,int A,int B) :quadrangle(a, b, c, d, A, B, C, D) {
		C = A;
		D = B;
		c = a;
		d = b;
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		name = "Параллелограмм ";
	}

	void print_info() override {

		quadrangle::print_info();
	}

};

class rhomb :public quadrangle {
protected:

	bool check() override {
		if (quadrangle::check()  &&
			(a == b) && (A == C) && (B == D) && (b == c)  && (c == d)) {
			return true;
		}
		else { return false; }
	}

public:
	rhomb(int a,int A,int B) :quadrangle(a, b, c, d, A, B, C, D) {
		C = A;
		D = B;
		b = c = d = a;
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		name = "Ромб ";
	}

	void print_info() override {

		quadrangle::print_info();
	}

};


int main() {
	setlocale(LC_ALL, "Russian");

	figure zero;
	triangle first(45, 33, 23, 40, 80, 60);
	quadrangle second(84, 74, 65, 50, 80, 20, 130, 130);
	right_tri third(20, 30, 40, 30, 60);
	isos_tri fourth(20, 30, 70, 40);
	equil_tri fith(40);
	rectangle sixth(20, 40);
	square seventh(50);
	parallelogram eighth(35, 45, 100, 80);
	rhomb ninth(60, 120, 60);


	figure* ZERO =&zero;
	ZERO->print_info();

	figure* one = &first;
	one->print_info();

	figure* two = &second;
	two->print_info();

	figure* three = &third;
	three->print_info();

	figure* four = &fourth;
	four->print_info();

	figure* five = &fith;
	five->print_info();

	figure* six = &sixth;
	six->print_info();

	figure* seven = &seventh;
	seven->print_info();

	figure* eight = &eighth;
	eight->print_info();

	figure* nine = &ninth;
	nine->print_info();
	
	


	return 0;
}
