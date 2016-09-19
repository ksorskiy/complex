#include <locale.h>
#include <iostream>

class Complex {
	private:
		double real;
		double imagine;
	public:
		Complex() {
			real = 0;
			imagine = 0;
		}
		Complex(double a, double b) {
			real = a;
			imagine = b;
		}
		Complex operator+(Complex rv) {
			Complex result(real + rv.real, imagine + rv.imagine);
			return result;
		}
		Complex operator-(Complex rv) {
			Complex result(real - rv.real, imagine - rv.imagine);
			return result;
		}
		void display() {
			using namespace std;
			if(imagine < 0) {
				cout << real << imagine << + "i" << endl;
			} else {
				cout << real << "+" << imagine << + "i" << endl;
			}
		}
};

int main()
{
	setlocale(LC_ALL,"RUS");
	using namespace std;


	Complex num(-5,-3);
	num.display();
	Complex num_(1,2);
	num_.display();

	Complex sum = num + num_;
	sum.display();

	Complex min = num - num_;
	min.display();

	cin.get();
	return 0;
}

