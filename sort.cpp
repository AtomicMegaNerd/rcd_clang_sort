/*
 * bubble_sort.cpp
 *
 *  Created on: 2011-12-20
 *      Author: cdunphy
 */

#include "sort.h"

using std::size_t;
using std::vector;
using std::swap;

void bubble_sort(vector<int>& nums)
{
	size_t sz = nums.size();
	for (size_t pass = 1; pass != sz; ++pass)
	{
		for (size_t ix = 0; ix != sz - pass; ++ix)
		{
			if (nums[ix] > nums[ix + 1])
			{
				swap(nums[ix], nums[ix + 1]);
			}
		}
	}
}

void quick_sort(vector<int>& nums, size_t left, size_t right)
{
	size_t i = left, j = right;
	int pivot = nums[(left + right) / 2];

	while (i <= j)
	{
		while (nums[i] < pivot)
			i++;
		while (nums[j] > pivot)
			j--;
		if (i <= j)
		{
			swap(nums[i], nums[j]);
			i++;
			j--;
		}
	};

	if (left < j)
		quick_sort(nums, left, j);
	if (i < right)
		quick_sort(nums, i, right);
}
