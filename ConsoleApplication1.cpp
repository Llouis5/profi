
#include "Header.h"

int main()
{
	std::vector<int> a = return_rand_table(10);
	holts_model(a, 0.1, 0.9);
	/*for (int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << "\n";
	}*/
}

