#include <locale.h>
#include <iostream>

class Complex {
	private:
		double real_;
		double imaginary_;
	public:
		Complex() {
			real_ = 0;
			imaginary_ = 0;
		}
		Complex(double a, double b) {
			real_ = a;
			imaginary_ = b;
		}

		double real() {
			return real_;
		}

		double imaginary() {
			return imaginary_;
		}

		Complex operator+(Complex rv) {
			Complex result(real_ + rv.real_, imaginary_ + rv.imaginary_);
			return result;
		}
		Complex operator-(Complex rv) {
			Complex result(real_ - rv.real_, imaginary_ - rv.imaginary_);
			return result;
		}

		void display() {
			using namespace std;
			if(imaginary_ < 0) {
				cout << real_ << imaginary_ << + "i" << endl;
			} else {
				cout << real_ << "+" << imaginary_ << + "i" << endl;
			}
		}
};
