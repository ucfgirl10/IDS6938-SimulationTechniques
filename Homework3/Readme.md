# Homework 3 : Agent based Simulation Assignment

## IDS6938-Simulation Techniques - [University of Central Florida](http://www.ist.ucf.edu/grad/)


The assignment is due: **Monday, April  24 at 11:59PM (EST)**

**WILL BE TAKING 1 LATE DAY** (This should be the last day I have.)

# Part 1: Behaviors

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

I created a simple maze using an image I found online. For the first run of my maze, I only implemented the walls. However, I did not close off the walls at the entrance and exit. In the image below, you can see that the agents did not go through the maze. This is because they found that the path of least resistance to getting to the finish line is going outside of the maze.
![](images/maze1.png?raw=true)

Therefore, to fix this, I had to make sure my walls were completely closed. In doing this, all the agents went directly through the maze to the finish line.
![](images/maze2.png?raw=true)

![](images/maze3.png?raw=true)

**(c) - 30 points**: Model and analyze a building on campus.
The site I chose to model is the UCF Student Union. This building was built in 1997 and is located at the center of the UCF Orlando campus. This facility hosts several events and meetings, as well as serves as a place to study, socialize, and eat for students and members of the UCF community.
![](images/SU1.png?raw=true)
Known as the "Heart of Campus," the Union offers over 26,000 square feet of meeting and event space, with the ability to host various campus events, seminars, conferences, banquets, and various other functions. The Student Union makes it remarkably easy to reserve almost any one of our many meeting and event spaces. Simply select the type of reservation you are looking to make and walk through the step-by-step guide to reserving your room of choice. Each year, the Student Union helps facilitate over 26,000 bookings for all members of the UCF community. From helping the Campus Activities Board host a famous actress to assisting a Registered Student Organization solicit members on the south patio, we do it all. In addition to reserving space and helping to facilitate these great events, the Student Union hosts some signature programs throughout the year. (Taken directly from: http://studentunion.ucf.edu/).
![](images/SU2.png?raw=true)

This building has three floors. There is a stairwell and elevators in the student for easy access. Additionally, there are approximately 9 food restaurants, an optical office, and great spacious rooms that serve as areas for small and large meetings.
![](images/SU_floorplan.png?raw=true)

One of the most common areas used in the Student Union for large meetings is the Pegasus Grand Ballroom.
![](images/SU3.png?raw=true)
Designed to meet the ever-changing needs of the UCF community and its supporters, the Pegasus Grand Ballroom is located on the Union’s first floor. Virtually every space of the Pegasus Ballroom has the ability to be multipurpose. It’s nearly 12,000 square foot of meeting space is easily converted into nine separate meeting venues or conference rooms. With such stunning adaptability, Pegasus delivers a unique experience for patrons -- whether they are there for a conference or attending one of the many concerts for which the Pegasus is equipped to deliver the very latest in high quality equipment and sound.  (Taken directly from: http://studentunion.ucf.edu/spaces/meeting)


SCENARIO:
Every year, Graduate Studies hosts the Graduate Research Forum during Research Week. This year, over 200 graduate students participated. Unfortunately, during the event, the fire alarm sounds. It seems as though Qdoba burnt some queso and caught on fire some chicken that began to fill the first floor with smoke. Therefore, the entire building was evacuated mid event.
![](images/GRF.png?raw=true)

HYPOTHESIS:
Though there are hundreds of faculty, staff, and students in the building, I believe the building design suits the needs of this evacuation and the participants.

EXPERIMENT:
To visualize this experiment, I will use the floor plan for the first floor:
![](images/SU_floor1.png?raw=true)




