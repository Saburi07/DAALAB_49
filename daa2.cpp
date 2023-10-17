// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum profit
int maxProfit(int* price, int n)
{
	int profit = 0, cDay = n - 1;

	// Start from the last day
	while (cDay > 0) {

		int day = cDay - 1;

// Traverse and keep adding the profit until a day with price of stock higher than currentDay is obtained
		while (day >= 0
			&& (price[cDay]
				> price[day])) {

			profit += (price[cDay]
					- price[day]);

			day--;
		}

		// Set this day as currentDay
		// with maximum cost of stock
		// currently
		cDay = day;
	}

	// Return the profit
	return profit;
}

// Driver Code
int main()
{
	// Given array of prices
	int price[] = { 2, 3, 5 };

	int N = sizeof(price) / sizeof(price[0]);

	// Function Call
	cout << maxProfit(price, N);

	return 0;
}

