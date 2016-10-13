/*
 * bubble_sort.h
 *
 *  Created on: 2011-12-20
 *      Author: cdunphy
 */

#ifndef SORT_H_
#define SORT_H_

#include <vector>
#include <cstddef>
#include <algorithm>

/*
 * This is a C++ implementation of the bubble
 * sort algorithm.
 */
void bubble_sort(std::vector<int>& nums);

/*
 * This is the C++ implementation of quicksort
 */
void quick_sort(std::vector<int>& nums, std::size_t left, std::size_t right);

#endif /* SORT_H_ */
