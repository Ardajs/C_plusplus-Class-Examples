
#include <iostream>
using namespace std;


/*
class Example {
public:
	int x;
	void write() {
		y = 5.2;
		z = 9;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
		cout << "z=" << z << endl;
	}
private:
	float y;
	int z;
};
int main() {
	Example nsn;
	nsn.x = 5;
	nsn.write();
	return 0;
} */

//----------------------------------------------------------------------------------

/*
#include <iostream>
using namespace std;

class S {
public:
	int a;
};
int main() {
	setlocale(LC_ALL, "Turkish");
	S m, n;
	n.a = 8;
	cout << "n nesnesinin a üyesi: " << n.a << endl;
	m = n;
	cout << "m nesnesinin a üyesi: " << m.a << endl;
	S& ref = n;
	cout << "ref referasnsının a üyesi: " << ref.a << endl;
	ref.a = 7;
	cout << "ref referasının a üyesi: " << ref.a << endl;
	S kere[3];
	kere[2].a = 6;
	cout << "kere dizisinin a üyesi : " << kere[2].a << endl;

	return 0;
}  */

//---------------------------------------------------------------------------------
/*
#include <iostream>
using namespace std;

class Ornek4 {
public:
	int i;
	void yaz();
};
void Ornek4::yaz() {
	cout << "Merhaba" << endl;
	cout << "i degeri:" << i << endl;
}
int main() {
	Ornek4 x;
	x.i = 5;
	x.yaz();
	return 0;
}  */

//---------------------------------------------------------------------------------

/*
#include <iostream>
using namespace std;

class Sayi {
	int n;
public:
	void sakla(int = 0);
	int al();
};
void Sayi::sakla(int x) {
	n = x;
}
int Sayi::al() {
	return n;
}
int main() {
	Sayi no;
	no.sakla();
	cout << "n= " << no.al() << endl;
	no.sakla(10);
	cout << "n= " << no.al() << endl;

	return 0;
}  */

//---------------------------------------------------------------------------------------

/*
//sınıfın not ortalamasını hesaplama
#include <iostream>
using namespace std;

class Student {
	int no, vize, final;
public:
	int noAl() {
		return no;
	}
	int vizeAl() {
		return vize;
	}
	int finalAl() {
		return final;
	}
	void noAta(int _no) {
		no = _no;
	}
	void vizeAta(int _vize) {
		vize = _vize;
	}
	void finalAta(int _final) {
		final = _final;
	}
};
int main() {
	Student sinif[3];
	int no, vize, final;
	float average;
	for (int i=0; i < 3; i++) {
		cout << endl << "Please enter Student Number, Vize and Final Notes: ";
		cin >> no >> vize >> final;
		Student student;
		student.noAta(no);
		student.vizeAta(vize);
		student.finalAta(final);
		sinif[i] = student;
	}	
	for (int i = 0; i < 3; i++) {
		average = 0.4 * sinif[i].vizeAl() + 0.6 * sinif[i].finalAl();
		cout << sinif[i].noAl() << "The Student Number Note Average:" << average << endl;
	}
	return 0;
} */

/*
//Member Initialization
#include <iostream>
using namespace std;

class Circle {
	double radius;
public:
	Circle (double r):radius (r) {}
	double area() { return radius * radius * 3.14159265; }
};

class Cylinder {
	Circle base;
	double height;
public:
	Cylinder(double r,double h): base(r),height(h) {}
	double volume() { return base.area() * height; }
};
int main() {
	Cylinder foo(10, 20);

	cout << "foo's volume: " << foo.volume() << endl;
	return 0;
}  */
/*
//Pointer to Classes Example
#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle (int x,int y): width(x),height(y) {}
	int area(void) { return width * height; }
};
int main() {
	Rectangle obj(3, 4);
	Rectangle* foo, * bar, * baz;
	foo = &obj;
	bar = new Rectangle(5, 6);
	baz = new Rectangle[2]{ {2,5},{3,6} };
	cout << "obj's area:" << obj.area() << '\n';
	cout << "*foo' area:" << foo->area() << '\n';
	cout << "*bar's area:" << bar->area() << '\n';
	cout << "baz[0]'s' area:" << baz[0].area() << '\n';
	cout << "baz[1]'s' area:" << baz[1].area() << '\n';
	delete bar;
	delete[] baz;
	return 0;
}  */

/*
//classes and default constructor
#include <iostream>
using namespace std;

class Example3 {
	string data;
public:
	Example3 (const string& str): data (str) {}
	Example3 () {}
	const string& content() { return data; }
};
int main() {
	Example3 foo;
	Example3 bar("Example");

	cout << "foo's content: " << foo.content() << endl;
	cout << "bar's content: " << bar.content() << endl;
}  */
/*
//Destructors
#include <iostream>
using namespace std;

class Example4 {
	string *ptr;
public:
	//constructors:
	Example4 ():ptr(new string){}
	Example4(const string& str): ptr(new string(str)) {}
	
	//destructor:
	~Example4() { delete ptr; }

	//access content
	const string& content() const { return *ptr; }
};
int main() {
	Example4 foo;
	Example4 bar("Example");

	cout << "foo's content: " << foo.content() << endl;
	cout << "bar's content: " << bar.content() << endl;
}  */
/*
//Copy Constructor :Deep Copy 
#include <iostream>
#include <string>
using namespace std;

class Example5 {
	string* ptr;
public:
	Example5 (const string& str): ptr(new string(str)) {}
	~Example5() { delete ptr; }

	//copy constructor
	Example5(const Example5& x): ptr(new string(x.content())) {}
	 
	//access content
	const string& content() const { return *ptr; }
};
int main() {
	Example5 foo  ("Example");
	Example5 bar = foo;

	cout << "foo's content: " << foo.content() << endl;
	cout << "bar's content: " << bar.content() << endl;
	return 0;
} */


/*
//example on this
#include <iostream>
using namespace std;

class Dummy {
public:
	bool isitme(Dummy& param);
};

bool Dummy::isitme(Dummy& param) {
	if (&param == this) return true;
	else return false;
}
int main() {
	Dummy a;
	Dummy* b = &a;
	if (b->isitme(a)) 
		cout << "yes, &a is b" << endl;
	
	return 0;
} */

/*
// stacic member in classes
#include <iostream>
using namespace std;

class Dummy {
public:
	static int n;
	Dummy() { n++; };
};
int Dummy::n = 0;

int main() {
	Dummy a;
	Dummy b[5];
	cout << a.n << endl;
	Dummy* c = new Dummy;
	cout << Dummy::n << endl;
	delete c;
	return 0;
}  */


/*
class Example {
public:
	int A;
	void print();
};
void Example::print() {
	cout << "Hello!\n";
	cout << "A = " << A << endl;
}
int main() {
	Example x;
	x.A = 28;
	x.print();
	return 0;
}
*/


/*
//constructor

class Rectangle {
	int width, height;
public:
	Rectangle(int e, int b) {
		width = e;
		height = b;
	}
	int area() {
		return width * height;
	}
};
int main() {
	Rectangle x(5, 10);
	cout << "Area: " << x.area() << '\n';
	return 0;
}
*/


/*
//Destructor

class Eleman {
	int no;
public:
	Eleman(int =0);
	~Eleman();
};
Eleman::~Eleman() {
	cout << "Yikici Fonksiyon" << endl;
	cout << "No:" << no << endl;
}
Eleman::Eleman(int x) {
	no = x;
	cout << "Yapici Fonksiyon\n";
}
int main() {
	Eleman kisi, kisi2(28);
	return 0;
} */



/*
class Example {
public:
	int i;
	void yaz() {
		cout << "HELLO!\n";
		cout << i << endl;
	}
};
int main() {
	Example x;
	x.i = 28;
	x.yaz();
	return 0;
}*/



//simple class example 
/*
class Example {
public:
	int i;
	void yaz();
};
void Example::yaz() {
	cout << "HELLO!\n";
	cout << "i=" << i << endl;
}
int main() {
	Example x;
	x.i = 28;
	x.yaz();
	return 0;
}*/



/*
//constructor kullanılmadan çözüm
class Rectangle {
	int width, height;
public:
	void yaz(int e, int b) {
		width = e;
		height = b;
	}
	int area() {
		return width * height;
	}
};
int main() {
	Rectangle x;
	x.yaz(5, 4);
	cout << "area=" << x.area() << endl;
	return 0;
}*/




/*
//constructor kullanılarak çözüm
class Rectangle {
	int width, height;
public:
	Rectangle(int e, int b) {  //yapıcı fonksiyon tanımı
		width = e; 
		height = b; 
	}
	int area() {
		return width * height;
	}
};
int main() {
	Rectangle x(5, 4);  //x adlı bir dikdörtgen tanımlanır ve yapıcı çağrılır
	cout << "area=" << x.area() << endl;
	return 0;
}*/



/*
//overloading constructor
class Rectangle {
	int width, height;
public:
	Rectangle();
	Rectangle(int, int);
	int area() {
		return width * height;
	}
};
Rectangle::Rectangle() {
	width = 5;
	height = 5;
}
Rectangle::Rectangle(int e, int b) {
	width = e;
	height = b;
}
int main() {
	Rectangle rect(3, 4);
	Rectangle rectb;
	cout << "rect area=" << rect.area() << '\n';
	cout << "rectb area=" << rectb.area() << endl;
	return 0;
}*/




/*
class Bir {
public:
	static int sayi;
	Bir() {
		sayi++;
	}
};
int Bir::sayi = 0;
int main() {
	Bir n1, n2, n3;
	cout << "Nesnelerin sayisi:" << n1.sayi;
	return 0;
}*/


/*
//destructor
class Employee {
	int no;
public:
	Employee(int=0);
	~Employee();
};
Employee::~Employee() {
	cout << "Destructor" << endl;
	cout << "No:" << no << '\n';
}
Employee::Employee(int x) {
	no = x;
	cout << "Constructor" << endl;
}
int main() {
	Employee person1(2882), person2;
	return 0;
}*/


/*
//friend function
class B;
class A {
	int x;
public:
	A(int _x) : x(_x) {}
	friend class B;
};
class B {
	int y;
public:
	void fon(A& nsn);
};
void B::fon(A& nsn) {
	y = nsn.x;
	cout << "y=" << y << endl;
}
int main() {
	A bir(10);
	B iki;
	iki.fon(bir);
	return 0;
}*/



