#include "vector.h"
#include <initializer_list>

int main()
{
	vector<int>* v = new vector<int>(10000, 0);
	v->print_vector();
	std::cout << '\n' << v->Size() << std::endl;
	system("pause");
	return 0;
}