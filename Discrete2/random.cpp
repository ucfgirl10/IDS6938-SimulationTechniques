#define _USE_MATH_DEFINES //for C++ Referenceshttps://msdn.microsoft.com/en-us/library/4hwaceh6.aspxhttp://www.cplusplus.com/forum/general/102410/
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <vector>
#include <chrono>
#include <fstream>
#include <algorithm>
#include <functional> 
#include <numeric>
#include <cmath> //referencehttp://www.cplusplus.com/reference/cmath/

int main()
{
	// Get a random seed
	
	//use a random device
	std::random_device rd;

	// 1) Change random number generators
	//std::mt19937_64 engine(rd());   //Marsenne Twister
	//std::knuth_b engine(rd());  //Knuth-B
	//std::minstd_rand engine(rd()); //Minimal Standard
	std::ranlux48 engine(rd()); //Ranlux


	// Another seed intialization routine (this is just here for future reference for you.)
	// initialize the random number generator with time-dependent seed
	//uint64_t timeSeed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
	//std::seed_seq ss{ uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed >> 32) };
	//std::mt19937_64 e2;
	//e2.seed(ss);

	

	//  2) - Change distribution types
	std::uniform_real_distribution<> dist(0,100);  // example of a uniform real distribution
	//std::normal_distribution<> dist(5,2);    // example of a normal distribution 
	//std::uniform_int_distribution<> dist(0,100); // example of uniform discrete distribution
	//std::poisson_distribution<> dist(5); // example of poisson distribution 
	//std::exponential_distribution<> dist(5); //example of exponential distribution 

	auto generator = std::bind(dist, engine);

	// 3) Play with N
	unsigned int N = 1000;  // number of values generated
	double randomValue;
	double rX;
	double rY;
	double q;
	double range;
	std::map<int, int> hist; //Counts of discrete values
		//std::vector<double> raw; //raw random values 
	std::vector<double> rawX;
	std::vector<double> rawY;


	for (unsigned int i = 0; i < N; ++i) {
		randomValue = generator();
		//rX = generator(); //x coordinate
		//rY = generator(); //y coordinate

	//Unit circle code
		q = generator() * (M_PI * 2);
		range = sqrt(randomValue);
		rX = (1.0 * range) * cos(q);
		rY = (1.0 * range) * sin(q);
		
	//Original Code:
	//++hist[std::round(randomValue)]; // count the values
	//raw.push_back(randomValue);  //push the raw values

		rawX.push_back(rX);
		rawY.push_back(rY);
	}

	//for (auto p : hist) {

	// Uncomment if you want to see the values
	//std::cout << std::fixed << std::setprecision(1) << std::setw(2)
	//<< p.first << " -  "<< p.second << std::endl;

	//std::cout << std::fixed << std::setprecision(1) << std::setw(2)
	//<< p.first << "  " << std::string(p.second / (N/500), '*') << std::endl;

	// Print Results to File
	/*
	std::ofstream myfile;
	myfile.open("mersenne_uniform_int_histogram.txt");
	for (auto p : hist) {
	myfile << std::fixed << std::setprecision(1) << std::setw(2)
	<< p.first << "," << p.second  << std::endl;
	}
	myfile.close();
	*/

	//for (auto p : rawX) {

	// Uncomment if you want to see the values
	//std::cout << std::fixed << std::setprecision(1) << std::setw(2)
	//<< p << " -  " << std::endl;
	//}
	std::ofstream myfile;
	myfile.open("circle_ranlux_X.txt");
	for (auto p : rawX) {

		myfile << std::fixed << std::setprecision(5) << std::setw(2)
			<< p << std::endl;
	}
	myfile.close();

	myfile.open("circle_ranlux_Y.txt");
	for (auto p : rawY) {

		myfile << std::fixed << std::setprecision(5) << std::setw(2)
			<< p << std::endl;
	}
	myfile.close();

	//if you choose to write useful stats here
	/*
	myfile.open("mersenne_uniform_int__stats.txt");
	double sum = std::accumulate(raw.begin(), raw.end(), 0.0);
	double mean = sum / raw.size();
	myfile << "mean: " << mean << std::endl;
	std::cout << "mean: " << mean << std::endl;

	std::vector<double> diff(raw.size());
	std::transform(raw.begin(), raw.end(), diff.begin(),
	std::bind2nd(std::minus<double>(), mean));
	double sq_sum = std::inner_product(diff.begin(), diff.end(), diff.begin(), 0.0);
	double stdev = std::sqrt(sq_sum / raw.size());
	myfile << "stdev: " << stdev << std::endl;
	std::cout << "stdev: " << stdev << std::endl;

	myfile.close();
	*/
}
