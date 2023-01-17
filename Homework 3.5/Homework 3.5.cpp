// Homework 3.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	std::cout << "Task 1.1\n";
	int i = 0;
	while (i < 9)
	{
		std::cout << "Hello!\n";
		i++;
	}

	std::cout << "\nTask 1.2\n";
	i = 0;
	while (i < 15)
	{
		std::cout << i << " ";
		i++;
	}

	std::cout << "\n\nTask 1.3\n";
	i = 0;
	while (i < 15)
	{
		if(i%2!=0)
		std::cout << i << " ";
		i++;
	}

	std::cout << "\n\nTask 2\n";
	i = 5;
	int sum = 0;
	while (i <= 15)
	{
		sum = sum+i;
		i++;
	}
	std::cout << sum << "\n";
}

