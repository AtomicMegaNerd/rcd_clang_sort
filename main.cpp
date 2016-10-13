/*
 * main.cpp
 *
 *  Created on: 2011-12-20
 *      Author: cdunphy
 */

#include <iostream>
#include <vector>

#include "sort.h"
#include "num_io.h"

using std::cerr;
using std::cout;
using std::endl;
using std::string;
using std::vector;

const int NUM_ELEMS = 100000;

// #define DEBUG_MODE

int main(int argc, char** argv)
{

#ifdef DEBUG_MODE
	if (argc != 3)
	{
		cerr << "Error, specify infdile and outfile" << endl;
		return -1;
	}
#endif

	vector<int> nums(NUM_ELEMS);
	get_nums_from_file(argv[1], nums);

#ifdef DEBUG_MODE
	cout << "loaded " << nums.size() << " ints into memory" << endl;
#endif

	quick_sort(nums, 0, nums.size());

#ifdef DEBUG_MODE
	cout << "sorting complete" << endl;
#endif

	write_nums_to_file(argv[2], nums);

#ifdef DEBUG_MODE
	cout << "done." << endl;
#endif

	return 0;
}
