# Homework 3 : Agent based Simulation Assignment

## IDS6938-Simulation Techniques - [University of Central Florida](http://www.ist.ucf.edu/grad/)


The assignment is due: **Monday, April  24 at 11:59PM (EST)**

**WILL BE TAKING 2 LATE DAYS** (My original last day, and the extra day you gave us)

# Part 1: Behaviors

**(a) - 10 points : [Compute derivative vector and implement initial values]**
* Derivative Vector (Based on Piazza post 4/24/17)
![](images/findderiv.png?raw=true)

* Initial Values
![](images/initialvalues.png?raw=true)



**(b) - 20 points: [Implement 6 types of individual behaviors and 5 types of group behaviors.]**
* Seek
SCREEN SHOT

* Flee
SCREEN SHOT

* Arrival
SCREEN SHOT

* Departure
SCREEN SHOT

* Wander
SCREEN SHOT

* Obstacle Avoidance
SCREEN SHOT

**(c) - 20 points: [Implement group behaviors]**
* Seperation
SCREEN SHOT

* Cohesion 
SCREEN SHOT

* Alignment 
SCREEN SHOT

* Flocking
SCREEN SHOT

* Leader Following
SCREEN SHOT

# Part 2 - Simulating a simple pedestrian flow


**(a) - 0 points: [Anylogic Subway Entrance Tutorial]**
Below is an image of my Subway Entrance Example with the appropriate features: boundaries and wals, pedestrian density map, intensity and traffic statistics, and 2D/3D animations. You can find the file in my "Anylogic Subway Entrance" folder.

![](images/subwaymodel.png?raw=true)


**(b) - 20 points: [Create a maze]**
I created a simple maze using an image I found online. For the first run of my maze, I only implemented the walls. However, I did not close off the walls at the entrance and exit. In the image below, you can see that the agents did not go through the maze. This is because they found that the path of least resistance to getting to the finish line is going outside of the maze.
![](images/maze1.png?raw=true)

Therefore, to fix this, I had to make sure my walls were completely closed. I made sure the entrance and exit had walls. In doing this, all the agents went directly through the maze to the finish line.
![](images/maze2.png?raw=true)
While getting through the maze on the first try is possible, many of us in real life will stuble across a false path. Therefore, I wanted to simulate this behavior in my maze. I added extra target lines to each false path and set the probabilities of those paths to 0.2. In the next image, you can see the results of having an arrival rate of 1000 agents per hour.
![](images/maze3.png?raw=true)
![](images/maze3D.png?raw=true)
I was curious to see how it would change if I lowered the arrival rate to 30 per hour. The following image displays the results. We can see in the density map and statistics that the numbers lowered significantly. In this run, the density stayed mostly between 0 and 0.25, while in the original run it reached higher than 1.00.
![](images/maze4.png?raw=true)

I have created a video to show the changes in density. 
<a href="https://youtu.be/FEZOmdjNmVE" target="_blank"><img src="http://img.youtube.com/vi/FEZOmdjNmVE/0.jpg"
alt="Video2" width="240" height="180" border="10" /></a>



**(c) - 30 points: [Model and analyze a building on campus.]**
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
Every year, Graduate Studies hosts the Graduate Research Forum during Research Week. This year, over 200 graduate students will participate. Unfortunately, during the event, the fire alarm sounds. It seems as though one of the new employees at Qdoba burnt some queso and caught on fire some chicken. He was too slow to act that the smoke from the kitchen began to fill the first floor of the student union. Therefore, the entire building was forced to be evacuated mid event. It was about 12:00pm-- LUNCHTIME!--therefore the student union was packed! Probably close to 1000 in the building.
![](images/GRF.png?raw=true)

HYPOTHESIS:
Though there are hundreds of faculty, staff, and students in the building, I believe the building design suits the needs of this evacuation and the participants.

EXPERIMENT:
To visualize this experiment, I will use the floor plan for the first floor:
![](images/SU_floor1.png?raw=true)


# REFRENCES
For this assignment, I studied with Olivia Newton, Ashley Reardon, and Rebecca Leis.
I also used the following webpages:
* Anylogic Help
* http://studentunion.ucf.edu/




