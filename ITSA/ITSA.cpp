#include <iostream>
using namespace std;

class Complex {
private:
	int re, im;
	// re:實部
	// im:虛部
public:
	Complex(int r = 0, int i = 0) {
		re = r;
		im = i;
	}	
		Complex operator + (Complex const& obj) {
			Complex result;
			result.re = re + obj.re;
			result.im = im + obj.im;

			return result;		
	}
		Complex operator - (Complex const& obj) {
			Complex result;
			result.re = re - obj.re;
			result.im = im - obj.im;
			return result;
		}
		Complex operator * (Complex const& obj) {
			Complex result;
			//a1=re,b1=im
			//a2=obj.re,b2=obj.im
			result.re = re * obj.re - im * obj.im; //a1*a2-b1*b2
			result.im = re * obj.im + obj.im * im;//a1*b2 +a2*b1
			return result;
		}
	void display() {
		cout << re << " " << im << endl;
	}
};

int main()
{
	int n;
	cin >> n;

	Complex c[10];
	for (int i = 0;i < n;i++) {
		char oper;
		int ar, ai, br, bi;
		cin >> oper >> ar >> ai >> br >> bi;
		Complex a(ar, ai);
		Complex b(br, bi);

		switch (oper){
		    case '+' :
		    	c[i] = a + b;
		    	break;
		    case '-':
			    c[i] = a - b;
			    break;
		    case '*':
			    c[i] = a * b;
			    break;
		}
	}
	for (int i = 0; i < n; i++) {
		c[i].display();
	}
}
