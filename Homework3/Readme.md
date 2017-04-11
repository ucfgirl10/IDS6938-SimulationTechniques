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
The site I chose to model is the UCF Harris Corporation Engineering Center. This building was built in 2007 and is located next to the CREOL building and behind Engineering I and II.
![](images/UCF_HCEC.png?raw=true)
With the help of a $3 million donation from the Harris Corporation to the College of Engineering & Computer Science, the Harris Corporation Engineering Center (HCEC) now serves as the home of the Department of Electrical Engineering & Computer Science. The HCEC occupies 75,000 square feet and includes 30 research labs for faculty and graduate students. It also features two specialized research computer-aided virtual environments (CAVEs) for virtual and augmented reality (Taken directly from UCF Campus Maps website).
![](images/HCEC.png?raw=true)
This building has four floors **(ADD NUMBER OF STAIRWELLS AND ELEVATORS)**


SCENARIO:
Dr. LaViola's Lab on the second floor has been preparing for a very important demo with their new robotic hand. This demo will be held during one of the largest recruiting fairs held for the Computer Science Department. Over **500** participants will be attending. One of his grad students irresponsibly forgot to prepare the robotic hand the night before the event. Therefore, he texted an undergrad to make sure to set-up the robotic hand in the morning. Little did anyone know, the undergrad would start short circut that would overheat the wires and start a fire. Everyone would be at the keynote speaker's talk, so the fire takes over the labspace and starts to spread throughout the rest of the building. The fire alarm sounds, therefore, the entire building would have to be evacuated mid event.

HYPOTHESIS:
The building design does not suit the needs of this evacuation and the participants.




