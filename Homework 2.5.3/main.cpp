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

	figure() { sides = 0; name = "������: "; }
	figure(int sides) { this->sides = sides; name = "������: "; }

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
		std::cout << "��������: " << get_name() << std::endl;
		if (check()) { std::cout << "���������� "<<std::endl; }
		else { std::cout << "������������ "<<std::endl; }
		std::cout << "���������� ������: " << get_sides()<<std::endl;
	};

};

class triangle:public figure {
public:

	triangle(int a, int b, int c, int  A, int B, int C) {
		sides = 3;
		this->a = a; this->b = b; this->c = c; this->A = A; this->B = B; this->C = C;  name = "�����������: ";
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

};


class quadrangle:public figure {

public:

	quadrangle(int a, int b, int c, int d, int  A, int B, int C, int D) {
		this->a = a; this->b = b; this->c = c; this->d = d; this->A = A; this->B = B; this->C = C; this->D = D; name = "��������������: ";
	}

	
};



void print (triangle print) {

	figure* wow = &print;
	wow->print_info();
	
	std::cout << "�������: " << print.get_a() << " " << print.get_b() << " " << print.get_c()  << std::endl;
	std::cout << "����: " << print.get_A() << " " << print.get_B() << " " << print.get_C() << std::endl;
	std::cout << std::endl;
}


int main() {
	setlocale(LC_ALL, "Russian");

	figure one;
	triangle first(45, 33, 23, 60, 60, 60);
	quadrangle second(84, 74, 65, 50, 46, 34, 22, 14);

	
	

	
	print(first);

	


	return 0;
}
