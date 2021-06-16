#include<bits/stdc++.h>
using namespace std;

/**
 *  Oscillating Prices of "Chakri"
 *  -   Diwali is here. While everyone here is busy texting "Happy Diwali" wishes 
 *      to everybody else, NinjaCoder has some other plans and wants to earn some 
 *      money this season.  
 *  -   Now, the Apex court has allowed the sale of only green crackers this Diwali. 
 *      Out of all green crackers, "Chakri" is most popular. Because of the irregular 
 *      supply of "Chakri", the price of "Chakri" is oscillating daily. NinjaCoder 
 *      saw a business opportunity in this. He/She got a price list for coming N 
 *      days from an insider in the market union. Prices in the list are for 1 unit 
 *      of a large packet of "Chakri". Each large packet contains 100 units of Chakri.
 *  -   Now, due to financial limitations, NinjaCoder can transact only 1 large 
 *      packet (100 units of "Chakri") in the market. You have to tell maximum 
 *      profit possible, given that he/she can transact atmost one time.
 *  Note: 1. Transaction refers to the act of buying and selling.
 *        2. "Chakri" cannot be sold individually. NinjaCoder has to buy/sell the 
 *           entire packet. 
 *  Input Format
 *      First-line contains N - (Integer)
 *      Second-line contains N spaced integers.
 *  Constraints
 *      1 <= N <= 10000
 *      50 <= A(i) <= 100
 *  Output Format
 *      Print the maximum profit that can be generated by NinjaCoder.
 * 
 *  Sample Input 0:
 *      7
 *      62 63 70 66 64 68 61
 *  Sample Output 0:
 *      8
 */
int main() {

	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i = 0;i < n;i++) {
		cin >> arr[i];
	}

	int minimum = 100000;
	int maxProfit = 0;
	for(int i=0; i<n; i++) {
		if(arr[i] <= minimum) {
			minimum = arr[i];
		}
		else{
			int profit = arr[i] - minimum;
			maxProfit = max(maxProfit, profit);
		}
	}
	cout << maxProfit;
    
	return 0;
}