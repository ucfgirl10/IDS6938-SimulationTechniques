# Homework 3 : Agent based Simulation Assignment 

## IDS6938-Simulation Techniques - [University of Central Florida](http://www.ist.ucf.edu/grad/)

[University of Central Florida](http://www.ist.ucf.edu/grad/)
This is the framework for homework #3.

The assignment is due: **Monday, April  24 at 11:59PM (EST)**

# Introduction
The goal of this assignment is to enable the behavioral animation of vehicle-like walking agents.

You will be expected to compose a *final report* which demonstrates your understanding on the material in each section of the assignment. Be visual! - Pictures say a thousand words so you do not have to. Show off your different configurations and really explore the assignment.


### Part 1: Behaviors

The goal of this assignment is to enable the steering behavioral animation of agents.

We represent an agent as a two-dimensional disk with mass (**m**) and moment-of-inertia (**I**) that is capable of generating a force **F** along body x-axis with a torque about the z-axis. For this assignment assume that the agent only translates in the world x-y plane and rotates about the body z-axis.

![](images/behavior.png?raw=true)

**(a) - 10 points** : Compute derivative vector given input and state vectors. Implement the function *SIMAgent::FindDeriv()*. This function sets derive vector to appropriate values after being called.

Description of agent state vector and input vector:  
* state[0] is the position of the agent in local body coordinates (almost useless in this project);  
* state[1] is the orientation angle of the agent with respect to world (i.e. global) coordinates;  
* state[2] is the velocity of the agent  in local body coordinates.  
* state[3] is the angular velocity of the agent in world coordinates. 
* input[0] is the force in local body coordinates;  
* input[1] is the torque in local body coordinates

You will need to set deriv[0], deriv[1], deriv[2], deriv[3]. Compute derivative vector given input and state vectors. This function sets derive vector to appropriate values after being called. 
* deriv[2] is the velocity of the agent  in local body coordinates
* deriv[3] is the angular velocity of the agent in world coordinates
* deriv[0] is the force in local body coordinates divided by the mass.
* deriv[1] is the torque in local body coordinates divided by the inertia.

You also must implement *SIMAgent::InitValues()*: Try to figure out appropriate values for control and behavior settings. You need to find out appropriate values for: *SIMAgent::Kv0, SIMAgent::Kp1, SIMAgent::Kv1, SIMAgent::KArrival, SIMAgent::KDeparture,
SIMAgent::KNoise,	SIMAgent::KWander, SIMAgent::KAvoid, SIMAgent::TAvoid, SIMAgent::RNeighborhood, SIMAgent::KSeparate, SIMAgent::KAlign, SIMAgent::KCohesion.*


**(b) - 20 points**: In this part of the assignment you will need to implement 6 types of individual behaviors and 5 types of group behaviors. Create the following behaviors through appropriate computation of V<sub> d</sub>  and θ<sub>d</sub>  commands:
* Seek
* Flee
* Arrival
* Departure
* Wander
* Obstacle Avoidance

**(c) - 20 points**: Implement the functions for the following group behaviors: 
* Seperation
* Cohesion 
* Alignment 
* Flocking
* Leader Following

# Part 2 - Simulating a simple pedestrian flow


**(a) - 0 points**: [Anylogic Subway Entrance example]
Below is an image of my Subway Entrance Example with the appropriate features. You can find the file in my "Anylogic Subway Entrance" folder.

![](images/insertname.png?raw=true)

**(b) - 20 points**: Create a maze. Generate the pdm, stats, and animations like before. Vary [parameters in your agents](https://help.anylogic.com/index.jsp?topic=/com.xj.anylogic.help/html/_PL/reference/Attributes.html) to give them different behaviors and show the pedistrians change how they navigate the maze.

![](images/insertname.png?raw=true)

**(c) - 30 points**: Model and analyze a building on campus.
The site I chose to model is the UCF Student Union. This building was built in 1997 and is located at the center of the UCF Orlando campus. This facility hosts several events and meetings, as well as serves as a place to study, socialize, and eat for students and members of the UCF community.
![](images/SU1.png?raw=true)
Known as the "Heart of Campus," the Union offers over 26,000 square feet of meeting and event space, with the ability to host various campus events, seminars, conferences, banquets, and various other functions. The Student Union makes it remarkably easy to reserve almost any one of our many meeting and event spaces. Simply select the type of reservation you are looking to make and walk through the step-by-step guide to reserving your room of choice. Each year, the Student Union helps facilitate over 26,000 bookings for all members of the UCF community. From helping the Campus Activities Board host a famous actress to assisting a Registered Student Organization solicit members on the south patio, we do it all. In addition to reserving space and helping to facilitate these great events, the Student Union hosts some signature programs throughout the year. (Taken directly from: http://studentunion.ucf.edu/).
![](images/SU2.png?raw=true)


This building has four floors **(ADD NUMBER OF STAIRWELLS AND ELEVATORS)**

![](images/SU3.png?raw=true)
Designed to meet the ever-changing needs of the UCF community and its supporters, the Pegasus Grand Ballroom is located on the Union’s first floor. Virtually every space of the Pegasus Ballroom has the ability to be multipurpose. It’s nearly 12,000 square foot of meeting space is easily converted into nine separate meeting venues or conference rooms. With such stunning adaptability, Pegasus delivers a unique experience for patrons -- whether they are there for a conference or attending one of the many concerts for which the Pegasus is equipped to deliver the very latest in high quality equipment and sound.  (Taken directly from: http://studentunion.ucf.edu/spaces/meeting)


SCENARIO:
Every year, Graduate Studies hosts the Graduate Research Forum during Research Week. This year, over 200 graduate students will be participating. The fire alarm sounds, therefore, the entire building would have to be evacuated mid event.
![](images/GRF.png?raw=true)

HYPOTHESIS:
The building design suits the needs of this evacuation and the participants.




