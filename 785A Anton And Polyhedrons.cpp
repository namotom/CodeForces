/*
Problem: 785A Anton And Polyhedrons
Link: https://codeforces.com/problemset/problem/785/A
Compiler Used: MS C++ 2017
Time: 108ms
Memory: 8KB
*/

#include<iostream>
#include<string>

enum Polyhedrons
{
	Tetrahedron = 4,
	Cube = 6,
	Octahedron = 8,
	Dodecahedron = 12,
	Icosahedron	= 20
};

int main()
{
	int n, count=0;
	std::string S;
	std::cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> S;
		if(S == "Tetrahedron")
			count += Polyhedrons::Tetrahedron;
		else if (S == "Cube")
			count += Polyhedrons::Cube;
		else if (S == "Octahedron")
			count += Polyhedrons::Octahedron;
		else if (S == "Dodecahedron")
			count += Polyhedrons::Dodecahedron;
		else if (S == "Icosahedron")
			count += Polyhedrons::Icosahedron;
	}
	
	std::cout << count;
}