# Homework 3 : Agent based Simulation Assignment

## IDS6938-Simulation Techniques - [University of Central Florida](http://www.ist.ucf.edu/grad/)


The assignment is due: **Monday, April  24 at 11:59PM (EST)**

**WILL BE TAKING 2 LATE DAYS** (My original last day, and the extra day you gave us)

# Part 1: Behaviors

**(a) - 10 points : [Compute derivative vector and implement initial values]**
* Derivative Vector (Based on Piazza post 4/24/17)

![](images/findderiv.PNG?raw=true)

* Initial Values (adjusted as needed)

![](images/initialvalues.PNG?raw=true)


**(b) - 20 points: [Implement individual behaviors]**
* Seek

![](images/seek.PNG?raw=true)

![](images/seek2.PNG?raw=true)

* Flee

![](images/flee.PNG?raw=true)

![](images/flee2.PNG?raw=true)

* Arrival
According to webcourses, arrival and departure are very similar to seek and flee. The difference is that in arrival "the agent attempts to steer towards a specified target and slows down when it gets close." I do not see this difference clearly, therefore I am unsure whether the code is right.

![](images/arrival.PNG?raw=true)

![](images/arrival2.PNG?raw=true)

* Departure
According to webcourses, departure is different from flee, because the agent steers away and slows down after a certain point. I do not see this difference clearly, therefore I am unsure whether the code is right.

![](images/departure.PNG?raw=true)

![](images/departure2.PNG?raw=true)

* Wander

![](images/wander.PNG?raw=true)

![](images/wander2.PNG?raw=true)

* Obstacle Avoidance
I tried implementing avoidance, but had no luck. Below is the code I was working with. It is definitely incomplete since the agents don't do anything except walk through. I tried using the 3 different approaches from webcourses, your notes in the code, and the following webpage suggested by Alex on Piazza: https://gamedevelopment.tutsplus.com/tutorials/understanding-steering-behaviors-collision-avoidance--gamedev-7777

![](images/avoid.PNG?raw=true)

[I did not include a screenshot because it was not working.]

The following video shows all of the individual behaviors implemented.

<a href="https://youtu.be/9fttzFAAryE" target="_blank"><img src="http://img.youtube.com/vi/9fttzFAAryE/0.jpg"
alt="Video2" width="240" height="180" border="10" /></a>


**(c) - 20 points: [Implement group behaviors]**
I was not able to implement the 5 group behaviors due to 1) time, and 2) I did not have enough resources. According to webcourses I would have had to find separation, cohesion, and alignment first to then implement flocking and leader following.

* Seperation

* Cohesion

* Alignment

* Flocking

* Leader Following


# Part 2 - Simulating a simple pedestrian flow


**(a) - 0 points: [Anylogic Subway Entrance Tutorial]**
Below is an image of my Subway Entrance Example with the appropriate features: boundaries and wals, pedestrian density map, intensity and traffic statistics, and 2D/3D animations. You can find the file in my "Anylogic Subway Entrance" folder.

![](images/subwaymodel.PNG?raw=true)


**(b) - 20 points: [Create a maze]**
I created a simple maze using an image I found online. For the first run of my maze, I only implemented the walls. However, I did not close off the walls at the entrance and exit. In the image below, you can see that the agents did not go through the maze. This is because they found that the path of least resistance to getting to the finish line is going outside of the maze.

![](images/Maze1.PNG?raw=true)

Therefore, to fix this, I had to make sure my walls were completely closed. I made sure the entrance and exit had walls. In doing this, all the agents went directly through the maze to the finish line.

![](images/Maze2.PNG?raw=true)

While getting through the maze on the first try is possible, many of us in real life will stumble across a false path. Therefore, I wanted to simulate this behavior in my maze. I added 4 extra target lines to each false path and set the probabilities of those paths to 0.2. In the next image, you can see the results of having an arrival rate of 1000 agents per hour.

![](images/Maze3.PNG?raw=true)

The following images display my 3D model at closer angles.

![](images/Maze3D.PNG?raw=true)

I was curious to see how it would change if I lowered the arrival rate to 30 per hour. The following image displays the results. We can see in the density map and statistics that the numbers lowered significantly. In this run, the density stayed mostly between 0 and 0.25, while in the original run it reached higher than 1.00.

![](images/Maze4.PNG?raw=true)

I have created a video to show more clearly in real time the minor changes in density of this last run.

<a href="https://youtu.be/FEZOmdjNmVE" target="_blank"><img src="http://img.youtube.com/vi/FEZOmdjNmVE/0.jpg"
alt="Video2" width="240" height="180" border="10" /></a>

Finally, to make my maze a bit more realistic, I decided to add extra target lines and probabilities. In this run, the probabilities are set in each path. The agents have a 0.5 chance of taking the first true path and a 0.5 chance of taking the first false path (to end up at the first dead end). Then, the agents will move on and have a 0.5 chance of taking the next true path or 0.5 chance of taking the next false path (taking the false path will lead them to having a 0.5 chance to end up at the 2nd dead end or 0.5 to end up at the 3rd dead end). The agents will finally have a 0.5 chance to end up at the last dead end before reaching the exit. The images and video below demonstrate this logic with an arrival rate of 1000 per hour.

![](images/Maze5.PNG?raw=true)

<a href="https://youtu.be/HLgM7ynJ0h0" target="_blank"><img src="http://img.youtube.com/vi/HLgM7ynJ0h0/0.jpg"
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
Every year, Graduate Studies hosts the Graduate Research Forum during Research Week. This year, over 200 graduate students will participate. Unfortunately, during the event, the fire alarm sounds. It seems as though one of the new employees at Qdoba burnt some queso and caught on fire some chicken. He was too slow to act that the smoke from the kitchen began to fill the first floor of the student union. Therefore, the entire building was forced to be evacuated mid event.

![](images/GRF.png?raw=true)

HYPOTHESIS:
Though there are hundreds of faculty, staff, and students in the building, I believe the building design suits the needs of this evacuation and the participants. (Although, using my assumptions and edition of the evacuation plan -- see below-- may negate this)

EXPERIMENT:
To visualize this experiment, I will use the floor plan for the first floor:

![](images/SU_floor1.png?raw=true)

I could not find the official evacuation routes of the student union, therefore I made my own evacuation plan based on the closest exits to the agents (i.e., exit 1 and 2). There are three sets of doors the participants can exit through. If exiting through door 1, they will take the path to exit 1. If exiting from door 2, they can choose either exit. If taking door 3, then they would use exit 2. Though the student union has other doors available, in my model I am assuming these would be the official doors for evacuation and the only possible routes. The image below marks all the doors and exits.

![](images/SUmodel.png?raw=true)

In my model, I included 210 agents. They all start at the graduate forum event in the ballroom. After a minute of being in the ballroom (pedWait), the alarm sounds and they begin to exit the ballroom using one of the three doors (probability of using the paths for door 1 and 3 were set to .35 since they are the closest to the exit they are the most probable to be used. The probabilities of using either path for door 2 were set to .15).

![](images/SUmodel1.png?raw=true)

I included a density map, as well as intensity and traffic statistics for each path. I wanted to understand which paths or areas had the most people and traffic jams.

![](images/SUmodel2.png?raw=true)

To follow is a short clip of my model in motion.

<a href="https://youtu.be/WOrEn-20qzU" target="_blank"><img src="http://img.youtube.com/vi/WOrEn-20qzU/0.jpg"
alt="Video2" width="240" height="180" border="10" /></a>

CONCLUSION:
Though the model is not entirely realistic, I believe if there were only those two exits as depicted in my model, the building design would not be suitable. In the videos and images you can see that there were hold ups (very high density) in getting out of the ballroom. In an emergency situation, we wouldn't want too much delays.

# REFRENCES
For this assignment, I studied with Olivia Newton, Ashley Reardon, and Rebecca Leis.
I also used the following webpages:
* Anylogic Help
* http://studentunion.ucf.edu/




