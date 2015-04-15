#include <iostream>
#include <cmath>

using namespace std;

void Digits(int count)
{

	if(count == 1)
		cout << "One ";
	if(count == 2)
		cout << "Two ";
	if(count == 3)
		cout << "Three ";
	if(count == 4)
		cout << "Four ";
	if(count == 5)
		cout << "Five ";
	if(count == 6)
		cout << "Six ";
	if(count == 7)
		cout << "Seven ";
	if(count == 8)
		cout << "Eight ";
	if(count == 9)
		cout << "Nine ";
}

void Tens(int count)
{

	if(count == 1)
		cout << "One ";
	if(count == 2)
		cout << "Twenty ";
	if(count == 3)
		cout << "Thirty ";
	if(count == 4)
		cout << "Fourty ";
	if(count == 5)
		cout << "Fifty ";
	if(count == 6)
		cout << "Sixty ";
	if(count == 7)
		cout << "Seventy ";
	if(count == 8)
		cout << "Eighty ";
	if(count == 9)
		cout << "Ninety ";
}

Teens(int count)
{
	if(count == 1)
		cout << "Eleven ";
	if(count == 2)
		cout << "Twelve ";
	if(count == 3)
		cout << "Thirteen ";
	if(count == 4)
		cout << "Fourteen ";
	if(count == 5)
		cout << "Fifteen ";
	if(count == 6)
		cout << "Sixteen ";
	if(count == 7)
		cout << "Seventeen ";
	if(count == 8)
		cout << "Eighteen ";
	if(count == 9)
		cout << "Nineteen ";	
}

int main()
{
	double input;
	int count = 0;
	bool skip = true;
	double temp;

	cout << "Enter number you wish to be converted" << endl;

	cin >> input;

	if(input < 0)
	{
		cout << "Negative ";
	}

	int positive = int (abs(input));

	while(positive >= 100000000)
	{
		count++;
		positive -= 100000000;
	}

	Digits(count);
	cout << "Hundred ";

	count = 0;

	while(positive >= 10000000)
	{
		count++;
		positive -= 10000000;
	}

	if(count == 1)
	{
		int temp = int(positive / 1000000);

		Teens(temp);

		skip = false; 
	}
	else
	{
		Tens(count);
	}

	count = 0;

	if(skip)
	{
		while(positive >= 1000000)
		{
			count++;
			positive -= 1000000;
		}

		Digits(count);

		count = 0;
		
	}
	else
	{
		while(positive >= 1000000)
		{
			count++;
			positive -= 1000000;
		}

		count = 0;
	}

	skip = true;

	cout << "Million ";

	while(positive >= 100000)
	{
		count++;
		positive -= 100000;
	}

	Digits(count);
	cout << "Hundred ";

	count = 0;


	while(positive >= 10000)
	{
		count++;
		positive -= 10000;
	}
	
	if(count == 1)
	{
		int temp = int(positive / 1000);

		Teens(temp);

		skip = false; 
	}
	else
	{
		Tens(count);
	}

	count = 0;

	if(skip)
	{
		while(positive >= 1000)
		{
			count++;
			positive -= 1000;
		}

		Digits(count);

		count = 0;
	}
	else
	{
		while(positive >= 1000)
		{
			count++;
			positive -= 1000;
		}

		count = 0;
	}

	skip = true;

	cout << "Thousand ";

	while(positive >= 100)
	{
		count++;
		positive -= 100;
	}

	Digits(count);
	cout << "Hundred ";

	count = 0;

	while(positive >= 10)
	{
		count++;
		positive -= 10;
	}

	if(count == 1)
	{
		int temp = int(positive);

		Teens(temp);

		skip = false; 
	}
	else
	{
		Tens(count);
	}

	count = 0;

	if(skip)
	{
		while(positive >= 1)
		{
			count++;
			positive -= 1;
		}

		Digits(count);

		count = 0;
	}

	return 0;
}