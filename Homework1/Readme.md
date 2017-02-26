#Homework 1 : The Jello Cube (Continuous Simulation Assignment
## IDS6938-Simulation Techniques - [University of Central Florida](http://www.ist.ucf.edu/grad/)


This is the framework for homework #1. Please first read the [homework writeup](HomeWork%231.pdf).

The assignment is due: Monday, February 27 at 11:59PM (EST)

| undeformed jello  | deformed jello |
| ------------- | ------------- |
| ![](images/undeformed3.png?raw=true)  | ![](images/deformed3.png?raw=true) |

| RK1  | RK2 | RK4 | Exact |
| ------------- | ------------- | ------------- | ------------- |
| 0.1  | 0.2 | 0.3 | 0.4 |
| 0.1  | 0.2 | 0.3 | 0.4 | 
| 0.1  | 0.2 | 0.3 | 0.4 | 
| 0.1  | 0.2 | 0.3 | 0.4 | 

HW PART 1 

x | y (Euler) | y (midpoint) | y (RK44) | EXACT | %Err(E) | %Err(M) | %Err(RK4)|
--- | --- | --- | --- | --- | --- | --- | --- |
0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
0.1 | 0.5 | 0.509036927 | 0.50401476 | 0.504006212 | 0.01% | 0.01% | 0.00% |
0.2 | 0.98608828 | 0.941891755 | 0.929983374 | 0.929969261 | 6.03% | 0.01% | 0.00% |
0.3 | 1.336761843 | 1.178280127 | 1.158938591 | 1.158923832 | 0.15% | 0.02% | 0.00% |
0.4 | 1.453584287 | 1.136380907 | 1.110627992 | 1.110618385 | 0.31% | 0.02% | 0.00% |
0.5 | 1.28927035 | 0.798159298 | 0.768452619 | 0.768453444 | 0.68% | 0.04% | 0.00% |
0.6 | 0.86543033 | 0.220768035 | 0.190477469 | 0.190492086 | 3.54% | 0.16% | 0.00% |
0.7 | 0.274273714 | -0.470402004 | -0.49781389 | -0.497785095| -1.55%
| -0.06% | 0.00% |
0.8 | -0.337857308| -1.107144704 | -1.129056656| -1.129016654| -70.08%
| -0.02% | 0.00% |
0.9 | -0.802753055| -1.517667616 | -1.533117725| -1.533072395| -47.64%
| -0.01% | 0.00% |
1 | -0.971671551| -1.570878628 | -1.581041974| -1.580998849| -38.54% | -0.01% | 0.00% |
1.1 | -0.755948824| -1.214747006 | -1.222913458| -1.222879899| -38.18%
| -0.01% | 0.00% |
1.2 | -0.156247699| -0.498141061 | -0.509147006| -0.509128232| -69.31%
| -0.02% | 0.00% |
... | ... | ... | ... | ... | ... | ... | ... |
9.8 | 2407.512568 | 33.91946812 | -128.1856199| -128.0792336| -19.80%
| -1.26% | 0.00% |
9.9 | 2674.851039 | 80.95594681 | -97.93441991| -97.81800842| -28.35%
| -1.83% | 0.00% |
10 | 2998.124017 | 158.7831645 | -39.0670402 | -38.93988091| -77.99% | -5.08% | 0.00% |


![](images/graph1.png?raw=true) 
![](images/graph2.png?raw=true)
![](images/graph3.png?raw=true) 
![](images/graph4.png?raw=true)


1) By using RK1, accuracy decreases. RK4 increases accuracy, but it is more computationally demanding. 

2)As X increases the accuracy decreases.

3)As the step size increases the graph gets less accurate.

4)RK1 uses the first derivative. RK2 uses the beginning point and midpoint. RK4 uses 