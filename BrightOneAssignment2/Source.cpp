#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	cout << "hello world" << endl;

	int casesAmount;
	int turnAmount;
	vector<double> numbers;
	
	cout << "podaj liczbe przypadkow do rozpatrzenia" << endl;
	cin >> casesAmount;

	for (int i = 0 ; i < casesAmount ; i++)
	{
		bool checker = false;
		cout << "podaj liczbe liczb w turze" << endl;
		cin >> turnAmount;

		string holder;
		cout << "podaj liczby odzielone spacja" << endl;
		
		for (int j = 0; j < turnAmount; j++)
		{
			numbers.push_back(0);
			cin >> numbers[j];
		}
		

		for (int j = 0; j < turnAmount; j++)
		{
			double leftSum = 0;
			double rightSum = 0;

			for (int leftIndex = 0; leftIndex < j; leftIndex++)
			{
				leftSum += numbers[leftIndex];
			}

			for (int rightIndex = j; rightIndex < turnAmount; rightIndex++)
			{
				rightSum += numbers[rightIndex];
			}

			if (leftSum == rightSum)
			{
				checker = true;
				break;
			}
			
		}

		if (checker == false)
		{
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
		}

		numbers.clear();
	}

	system("PAUSE");

	return 0;
}