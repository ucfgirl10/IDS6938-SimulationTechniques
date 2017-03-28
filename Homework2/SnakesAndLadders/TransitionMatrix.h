int size = 101;  //TODO this should be 101
Eigen::MatrixXf TransitionMatrix(size, size);
Eigen::VectorXf v(size);

unsigned int ROLLS = 1; //TODO Random number?????

double prob = 1.0/6.0 ;  //TODO this should be 1.0/6.0
double two = 2.0/6.0;
double three = 3.0/6.0;
double four = 4.0/6.0;
double five = 5.0/6.0;
double win = 6.0/6.0;

void SetTransitionMatrix()
{
	TransitionMatrix.setZero();
	TransitionMatrix(95, 96) = prob;
	TransitionMatrix(95, 97) = prob;
	TransitionMatrix(95, 98) = prob;
	TransitionMatrix(95, 99) = prob;
	TransitionMatrix(95, 100) = prob;

	TransitionMatrix(96, 96) = prob; // 1/6
	TransitionMatrix(96, 97) = prob; // 1/6
	TransitionMatrix(96, 98) = prob; // 1/6
	TransitionMatrix(96, 99) = prob; // 1/6
	TransitionMatrix(96, 100) = two; // 2/6

	TransitionMatrix(97, 98) = prob;// 1/6
	TransitionMatrix(97, 98) = prob;// 1/6
	TransitionMatrix(97, 99) = prob;// 1/6
	TransitionMatrix(97, 100) = three; // 3/6

	TransitionMatrix(98, 98) = prob; // 1/6
	TransitionMatrix(98, 99) = prob; // 1/6
	TransitionMatrix(98, 100) = four; // 4/6

	TransitionMatrix(99, 99) = prob; // 1/6
	TransitionMatrix(99, 100) = five;// 5/6

	TransitionMatrix(100, 100) = win; // 6/6


	//TODO
	for (int i=0; i < TransitionMatrix.rows() -6; i++) {
		TransitionMatrix(i, i + 1) = prob;
		TransitionMatrix(i, i + 2) = prob;
		TransitionMatrix(i, i + 3) = prob;
		TransitionMatrix(i, i + 4) = prob;
		TransitionMatrix(i, i + 5) = prob;
		TransitionMatrix(i, i + 6) = prob;

	}
	


	std::cout << TransitionMatrix << std::endl;
	exit(1);

}