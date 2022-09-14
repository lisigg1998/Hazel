#include <iostream>
namespace Hazel {
	__declspec(dllimport) void Print();
}

int main() {
	Hazel::Print();
	std::cin.get();
	return 0;
}