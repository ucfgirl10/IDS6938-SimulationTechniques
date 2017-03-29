# IDS6938-Simulation Techniques
USING 2 LATE DAYS! [should currently have 3 because of my conference]
# Homework 2 :  Discrete-Event Simulation Assignment
### Assignment for Karla Badillo-Urquiola

##Part 1: Empirical Tests of Randomness (20 pts).

**(a) - 3pts:** I outputed the results of the following engines: Marsenne, Minimal Standard, Knuth-B, Ranlux, and Sobol. The outputs can be found in the excel spreadsheet label "Pat1_outputs.xlsx" in my repository. The following 5 histograms were generated to analyze how uniform the values truly are.
**Histograms**
The outputs of the random number generators give how often a value appears in the set of data. Therefore, we are comparing the frequency distributions of the five generators. Histograms are useful for showing the frequency distribution of a set of data. Since all five histograms look the same we can infer that the values of the five generators have uniform values.
![](images/usefulcharts_part1a.png?raw=true)
**Spearman's Rank Correlation Coefficient Output**
I chose to run the Spearman's Rank Correlation Coefficient to find the stregnth of association and relationship between the five random number generators. According to the following output, Ranlux and Knuth-B are statistically significant at the 0.05 level. However, it is a weak correlation. The rest did not have any significant relationships.
![](images/Spearman_output.png?raw=true)
**Kolmogorov-Smirnov Test Output**
For my second analysis I chose the Kolmogorov-Smirnov test. I chose this analysis because it compares the sample scores to a reference uniform distribution. According to the output below, the test distributions (our sample data) are uniform. None of the significant levels are less than .005, therefore they are not significant and the values can be considered uniform.
![](images/K-Stest_output.png?raw=true)

**(b) - 2pts:**  Starting with the original N=100000, I varied the N to 1000 and then to 200000. Below are the histograms for both N=1000 and N=200000. We can see that all the histograms look similar to each other and to the original histograms from part 1a. This is expected, since we are using uniform distribution.
![](images/usefulcharts_part1c.png?raw=true)
When looking at the means and standard deviations, they stay relatively similar.
![](images/Mean-SD.png?raw=true)

**(c) - 3pts:** I selected the Mersenne Twister Generator Engine and the following five distributions: Normal, Poisson, Binomial, Uniform (Real), and Uniform(Integer). In the following histograms show the

**(d)- 4pts:** Generate random numbers in two-dimensions for a unit square. Plot the results for the different random number engines. The vertical axis should vary N in increasing order. The horizontal axis should show of the random number engines.

**(e)- 4pts:** Generate random numbers in two-dimensions for a unit square. Plot the results for the different distributions. The vertical axis should vary N in increasing order. The horizontal axis should show of the random number engines. (See [Random Numbers Webcourse page](https://webcourses.ucf.edu/courses/1246518/pages/random-numbers?module_item_id=10541423) for a rough idea what you should produce.)

**(f)- 4pts:** Repeat parts (d) and (e) with a unit circle.

##Part 2 - Snakes and Ladders (Discrete Event Markov Chains and Monte Carlo Simulations) (30 pts)

**(a) Null State Game transition matrix - 10pts:** done

**(b) Simulate and analyze the results of Null State Game - 10pts:** What is the modal number of moves required by a single player to finish the game? We will be simulating the game two different ways. **(1) Markov Chain**: The game can be analyzed with a row vector, *v* with 101 components, representing the probabilities that the player is on each of the positions. V(0) is (1,0,0,...,0) since we know we start at square 0. v evolves by: <BR>![](images/prob.png?raw=true)<BR>
For this part (1) use the *Markov project* in the Snake and Ladders starter code.<BR>
**(2) Monte Carlo**: he will will use a monte carlo process to solve our Discrete Time Markov Chains. Here (2) use the DTMC project, and utilize the DTMC method similar to what we did in class. <BR><BR>Produce graphs to analyze the results and show how the game evolves over time for both methods. Plot useful statistics of the results such as percentage chance of finishing the game in n-moves, cumulative probability of finishing the game in n-moves, and other ways to convey useful information of the results.

**(c) Simulate and analyze the results of Snakes and Ladders -10pts:**  Construct a new transition matrix based on the table:


Ladders From  | Ladders To | |  Snakes From  | Snakes To 
-------- | -------- | ------------- | -------- | -------- 
3|19| |11|7
15|37| |18|13
22|42| |28|12
25|64| |36|34
41|73| |77|16
53|74| |47|26
63|86| |83|39
76|91| |92|75
84|98| |99|70



Run the same simulation and analyze your results similar to part (b) for the proper game of *Snakes and Ladders* for both methods. How often are the snakes and ladders used, how do the probability of finishing change, etc? What is the maximum and expected amount of moves for the game? Use charts and graphs to illustrate these points.
**(d) Think - 0pts:** If these games are built entirely on chance, do they require any strategy? Is it really a *game*, would you rather play games of chance or games of strategy?


##Part 3 - Discrete Event Simulation - Queue Simulation (30 pts)

**(a) - 4pts:** done
**(b) - 4pts:** done
**(c) - 3pts:** done
**(d) - 4pts:** Write code to call the functions to output and generate data from the airport senario. Plot and analyze the useful statistics/results in the program of your choice.  (Hint -  basically call  *.output();* on the MM1_Queue objects you create. Hint2 - two other use functions are *get_current_time()* and  *plot_results_output()* call intially on your intial MM1_Queue object.)
**(e) - 15pts:** The following image shows my initial queue logic model and animation.
![](images/logicmodel.png?raw=true)
![](images/logicmodelanimation.png?raw=true)

##Part 4 - Implementing Extra Features (10 pts)
* **(10 Points)** - Add a 2D visualization to AnyLogic for Part 3.
![](images/2Dmodel.png?raw=true)
![](images/2Dmodelanimation.png?raw=true)



##Extra Features (Extra Credit - 25pts)
* **(10 Points)** - Add a 3D visualization to AnyLogic for Part 3.
![](images/3Dmodelanimation.png?raw=true)
