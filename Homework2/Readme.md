# Homework 2 :  Discrete-Event Simulation Assignment
**IDS6938-Simulation Techniques**: Assignment for Karla Badillo-Urquiola

USING 2 LATE DAYS! [should currently have 3 because of my conference]

##Part 1: Empirical Tests of Randomness (20 pts).

**(a) - 3pts:** I outputed the results of the following engines: Marsenne, Minimal Standard, Knuth-B, Ranlux, and Sobol. The text files can be found in my discrete 2 build folder and the outputs can be found in the excel spreadsheet label "Part1_outputs.xlsx" in my repository. The following 5 histograms were generated to analyze how uniform the values truly are. Additionally, I conducted Spearman's Rank Correlation Coefficient and Kolmogorov-Smirnov Test to analyze the uniformity of these generators.
**Histograms**
The outputs of the random number generators give how often a value appears in the set of data. Therefore, we are comparing the frequency distributions of the five generators. Histograms are useful for showing the frequency distribution of a set of data. Since all five histograms look the same we can infer that the values of the five generators have uniform values. (https://statistics.laerd.com/statistical-guides/understanding-histograms.php)
![](images/usefulcharts_part1a.png?raw=true)
**Spearman's Rank Correlation Coefficient Output**
I chose to run the Spearman's Rank Correlation Coefficient to find the stregnth of association and relationship between the five random number generators. This is a non-parametric test based on ranked data. According to the following output, Ranlux and Knuth-B are statistically significant at the 0.05 level. However, it is a weak correlation. The rest did not have any significant relationships. (https://statistics.laerd.com/statistical-guides/spearmans-rank-order-correlation-statistical-guide.php)
![](images/Spearman_output.png?raw=true)
**Kolmogorov-Smirnov Test Output**
For my second analysis I chose the Kolmogorov-Smirnov test. I chose this analysis because it compares the sample scores to a reference uniform distribution. According to the output below, the test distributions (our sample data) are uniform. None of the significant levels are less than .005, therefore they are not significant and the values can be considered uniform. (Field, 2013)
![](images/K-Stest_output.png?raw=true)

**(b) - 2pts:**  Starting with the original N=100000, I varied the N to 1000 and then to 200000. Below are the histograms for both N=1000 and N=200000. We can see that all the histograms look similar to each other and to the original histograms from part 1a. There is not much of a change in shape. This is expected, since we are using uniform distribution.
![](images/usefulcharts_part1b.png?raw=true)
When looking at the means and standard deviations, they stay relatively similar.
![](images/Mean-SD.png?raw=true)

**(c) - 3pts:** I selected the Mersenne Twister Generator Engine and the following five distributions: Normal, Poisson, Binomial, Uniform (Real), and Uniform(Integer). For this section, I decided to use scatter plots to show the differences in distributions and the shape. Scatter plots are typically used to show the relationship between two variables (this translates to correlations in stats). They are also useful for showing patterns within the data. (https://visage.co/data-visualization-101-scatter-plots/)
![](images/usefulcharts_part1c.png?raw=true)

**(d)- 4pts:** I fixed my distribution to uniform real and varied my N to output the following samples for the following generators: marsenne, knuth-b, minimal standard, ranlux
![](images/part1d_unitsquare.png?raw=true)

**(e)- 4pts:** I fixed my generator to marsenne and varied my N to output the following samples for the following distributions: Uniform real, uniform integer, normal, poisson, and exponential.
![](images/part1e_unitsquare.png?raw=true)

**(f)- 4pts:**
Unit circles for Part D
![](images/part1f_engine_unitcircle.png?raw=true)

Unit circles for Part E
![](images/part1f_dist_unitcircle.png?raw=true)

##Part 2 - Snakes and Ladders (Discrete Event Markov Chains and Monte Carlo Simulations) (30 pts)

**(a) Null State Game transition matrix - 10pts:** done (this can be seen in my Snakes and Ladders code)

**(b) Simulate and analyze the results of Null State Game - 10pts:** I was not able to get to this part.

**(b) Simulate and analyze the results of Snakes and Ladders - 10pts:** I was not able to get to this part.

**(d) Think - 0pts:**
* If these games are built entirely on chance, do they require any strategy?
I'm thinking it is just based on chance because because the player only uses a dice to move. However, you may be able to use some type of strategy knowing the probabilities of each space on the board.
* Is it really a *game*, would you rather play games of chance or games of strategy?
Yes, it is a game. There is a goal and it can be engaging. I personally prefer games of strategy, but games of chance allow people of all levels to play together.

(http://www.acagamic.com/courses/infr1330-2014/chance-and-skill-in-game-design/)
##Part 3 - Discrete Event Simulation - Queue Simulation (30 pts)

**(a) - 4pts:** done (in my queues project code)
**(b) - 4pts:** done (in my queues project code)
**(c) - 3pts:** done (in my queues project code)
**(d) - 4pts:** I was able to output and generate data from my airport scenario (the files are located in my queues build folder). I ploted the data using histograms to compare the expected and observed values. I chose to use clustered column charts since the data comes from different groups. The order of categorization also does not matter when using these charts. This allows me to compare values across categories. We can see that most of the observe values are greater than expected for both the checkin and security gates. However, when looking at the actual values, they are not too far apart.
![](images/usefulcharts_checkin.png?raw=true)
![](images/usefulcharts_security.png?raw=true)

**(e) - 15pts:** The following image shows my initial queue model and animation.
![](images/logicmodel.PNG?raw=true)
The next image show my model in action.
![](images/logicmodelanimation.PNG?raw=true)

##Part 4 - Implementing Extra Features (10 pts)
* **(10 Points)** - Add a 2D visualization to AnyLogic for Part 3.
![](images/2Dmodel.png?raw=true)
![](images/2Dmodelanimation.PNG?raw=true)

##Extra Features (Extra Credit - 25pts)
* **(10 Points)** - Add a 3D visualization to AnyLogic for Part 3.
![](images/3Dmodelanimation.PNG?raw=true)
![](images/3Dmodelanimation2.PNG?raw=true)


##REFERENCES
I used the following resources:
* https://msdn.microsoft.com/en-us/library/4hwaceh6.aspx
* http://www.cplusplus.com/forum/general/102410/
* http://www.cplusplus.com/reference/cmath/
* Field, A. (2013). Discovering statistics using IBM SPSS statistics (4ed.). SAGE: Los Angeles


For this assignment I studied with the following people:
* Olivia Newton
* Rebecca Leis
* Joe Wileman

