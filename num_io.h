/*
 * num_io.h
 *
 *  Created on: 2011-12-20
 *      Author: cdunphy
 */

#ifndef NUM_IO_H_
#define NUM_IO_H_

#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <fstream>

/*
 * Load ints from a file, one per line into a vector
 * and return it.
 */
 void get_nums_from_file(const std::string& filename, std::vector<int>& nums);

/*
 * Write ints to a file from a vector, one int per line.
 */
void write_nums_to_file(const std::string& filename,
		const std::vector<int>& nums);

#endif /* NUM_IO_H_ */
