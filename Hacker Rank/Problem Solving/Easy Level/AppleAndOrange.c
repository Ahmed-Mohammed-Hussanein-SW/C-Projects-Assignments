/* 
	This code is for calculating the number of apples and oranges than land on sam's house.

	Engineer: Ahmed Mohammed Hussanein Ali.
 	*/

/*
	Proplem Statement:
	The red region denotes the house, where s is the start point, and t is the endpoint.
	The apple tree is to the left of the house, and the orange tree is to its right.
	Assume the trees are located on a single point, where the apple tree is at point a, and the orange tree is at point b.
	When a fruit falls from its tree, it lands d units of distance from its tree of origin along the x-axis.
	*A negative value of d means the fruit fell d units to the tree's left, and a positive value of d means it falls d units to the tree's right. *
	Given the value of d for m apples and n oranges, determine how many apples and oranges will fall on Sam's house (i.e., in the inclusive range )?

*/

#include <stdio.h>
#include <stdlib.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) 
{
	int range = 0, samApples = 0, samOranges = 0;
	int i;
	for (i = 0; i < apples_count; ++i)
	{
		range = apples[i] + a;
		if(range >= s && range <= t)
			samApples ++;
	}
	for (i = 0; i < oranges_count; ++i)
	{
		range = oranges[i] + b;
		if(range >= s && range <= t)
			samOranges ++;
	}

	printf("%d\n%d", samApples, samOranges);
}

int main(int argc, char const *argv[])
{
	/* Test case 1 */
	int arr0[] = {-2, 2, 1};
	int arr1[] = {5, -6};
	countApplesAndOranges(7, 11, 5, 15, 3, arr0, 2, arr1);
	return 0;
}