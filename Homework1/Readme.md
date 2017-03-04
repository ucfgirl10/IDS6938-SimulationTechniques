# IDS6938-Simulation Techniques Homework 1 : The Jello Cube (Continuous Simulation Assignment)

#TAKING 2 LATE DAYS!!!!!

##PART 1
### C. Numerical and exact values
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

### F. Analyze your results
1. By using RK1, accuracy decreases. RK4 increases accuracy, but it is more computationally demanding.

2. As X increases the accuracy decreases.

3. As the step size increases the graph gets less accurate.

4. RK1 uses the first derivative. RK2 uses the beginning point and midpoint. RK4 with a smaller step size is the most accurate. RK4 uses more points to get a better approximation.

##Part 2
See JelloMesh Code.

##Part 3
1. What is the effect of the Ks and Kd parameters on the jello?
By increasing the spring constant, Ks, the jello maintains stability and does not disintegrate (this happens with low Ks). The damping constant, Kd, helps effects the velocity of the cube. With higher Kd, the cube goes slower, while with lower Kd, the cube can maintain a fluid motion.

2. What are the benefits and the drawbacks of the collision system used here? What are some different ways in which it could be improved?
Unfortunately, my collision system does not seem to be working properly (as you can tell in the videos below). The jello does not bounce off the cylinders. This is probably an issue with my detection. Each particle must detect collision. To improvide this, I will probably need to improve my code, as well as my forces.

3. What are some example systems you could model with Mass-spring simulations? Explain how you would construct the model.
Some examples of systems that use mass-spring simulations are: hair (ex: Rapunzel!), water (ex: Moana!), grass (ex: Pocahontas?!) , and fur (ex: Lion King?). In these systems, particles are connected by structural and bend springs. More specifically, if we take the example of hair, springs are used to control the shape of the hair, as well as the movement. Rapunzel's hair doesn't get all tangled because of springs and forces used to account for movement. These forces are also taken into account during collision detection, in the sense that if the hair collides with Rapunzel's ear, a response is implemented and penalty forces are applied.

4. Does the jello behave realistically? What integration method did you choose to make the jello stable?
My jello cube definitely does not behave realistically. This is probably due to my forces, as my jello cube does not bounce and only has a very minor wiggle. I chose to use the RK4 method of integration, because it is the most stable and has the most accuracy.

5. How would you model and simulate water (in terms of a continuous simulation)?
You would use a mass-spring system and implement forces. The Ks and Kd constants make it more solid or fluid-like, depending how high and how low the constants are set to.

## Video of my original Jello Cube environment
<a href="https://youtu.be/tk5rXtK05Wk" target="_blank"><img src="http://img.youtube.com/vi/tk5rXtK05Wk/0.jpg"
alt="Video1" width="240" height="180" border="10" /></a>

## Video exploring different spring stiffness
You can see that the purple jello stays more intact than the red, because the values of Ks and Kd are higher. The red jello disintegrates, because it has little stiffness and force.
<a href="https://youtu.be/WDYx3-AxhFU" target="_blank"><img src="http://img.youtube.com/vi/WDYx3-AxhFU/0.jpg"
alt="Video2" width="240" height="180" border="10" /></a>

## Video exploring integration methods
If you compare the video above with this video, you can see the difference between RK4 (the video above) and the midpoint (this video) integration methods. We can see that RK4 is more stable.
<a href="https://youtu.be/sMAkfIrD4NA" target="_blank"><img src="http://img.youtube.com/vi/sMAkfIrD4NA/0.jpg"
alt="Video3" width="240" height="180" border="10" /></a>

##References
* I used the following two sources as reference point and to understand some of the code:
⋅⋅* https://github.com/mriveralee/hair-simulation/blob/master/Jello%20Simulation/JelloSim_basecode/JelloSim/jelloMesh.cpp#L18
⋅⋅* https://github.com/Jing-Qiu/JelloDemo/blob/master/JelloSim/jelloMesh.cpp

* I also worked multiple time with the following classmates: Rebecca, Olivia, Ashley, Cintya, Joe W., and Ravi.
We tried balancing our strengths in figuring out the code. What I didn't get some others tried to help me understand and vise versa.