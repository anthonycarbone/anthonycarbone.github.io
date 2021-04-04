---
title: "Autonomous Arduino Vehicle - ARDET"
layout: single
excerpt: "Designing and building an autonomous vehicle with an Arduino to navigate a challenging track and collect and deposit play-pit balls."
header:
  video:
    id: OzZE8eiATeo
    provider: youtube
  teaser: /assets/projects/ardet/top.jpeg
---

### Designing and building an autonomous vehicle for a first-year engineering course.

For ENGG1000, a first-year Engineering course at UNSW, I led our team of 6 students to win the projects final competition for an autonomous vehicle with a novel mechatronic design.

The task was to construct a vehicle under 5kg that could move the 10 play-pit balls across the track (below) autonomously as quickly as possible. Among the constraints, the vehicle at start had to fit in the cubic 580mm constraints, be powered by no more than 12V and 5000mAh capacity, and have costed under $100.

<figure>
  <img src="{{ '/assets/projects/ardet/track.jpg' | relative_url }}" alt="Circuit Diagram">
</figure> 

My role was somewhat of a team lead, assigning subsystem design and construction to team members. I chose to take responsibility for the electronics and software to become familiar with what were completely foreign disciplines at the time.

#### Design and Construction
The primary design consideration was the task of autonomously collecting and later depositing the balls. To add to the challenge, the vehicle would be set down at a random angle at the start location.

We solved this with a novel servo-actuated bucket design that would fold out of the 580mm cubic constraint, form a continuous bucket with strong magnets, and open to collect all the balls at once.

See below a video of me optimising the servo commands to opening and locking the bucket in place to collect the balls.

{% include video id="ie8_xDRGxQo" provider="youtube" %}

Besides this primary design feature, our design included
- IR sensors to accommodate the random angle start,
- push buttons mounted on either side of the robot to trigger ball collection/deposit,
- 3D printed motor mounts, and
- laser-cut gearing to achieve the necessary torque for the steep ramps.

#### Electronics and Software

I chose to utilise a 3 cell LiPO (11.1V) battery to power the vehicle and all its subsystems, aside from the bucket servos. LiPO batteries are renowned for low weight, medium power applications in small-scale robotics with pretty good capacity and discharge currents.

We chose 4x AA batteries to power the servos as their optimal input voltage range was approximately 6V. In retrospect the AA batteries lacked the power to efficiently drive these servos, and a 2 or 3 cell LiPO might've been better.

This [Fritzing](https://fritzing.org/download/) diagram illustrates how the the components, notably the motor driver (red), all connect. Note in the end we didn't use the Accelerometer/Gyro.

<figure>
  <img src="{{ '/assets/projects/ardet/circuit.jpg' | relative_url }}" alt="Circuit Diagram">
</figure>

[See here a more detailed hand drawn diagram here.](/assets/projects/ardet/big_circuit.jpg)

I used the motor driver (red) to drive the side pairs of motors in parallel, given they would always receive the same commands. The motor driver also brought the approximately 11.1V LiPO voltage down to 5V to power the arduino and the sensors.

I also used [Veroboard](https://en.wikipedia.org/wiki/Veroboard) for primary buses in an attempt to keep things neat, which hilariously failed...

<figure>
    <img src="{{ '/assets/projects/ardet/electronics.jpeg' | relative_url }}" alt="Picture of Onboard Electronics">
</figure>

The software was of course written in Arduino (essentially a modified C/C++). The little logic written was relating to the IR sensors at the start to align with the collection trough and the push buttons to collect and deposit the balls. 

[See the final code here](https://github.com/anthonycarbone/anthonycarbone.github.io/blob/master/assets/projects/ardet/final_code.ino), a word of warning that its definitely not the neatest and suffered a lot of last minute bashing of the keyboard to achieve a satisfactory final result.

#### Performance
We were exceptionally pleased with the final performance of the vehicle (see the header video). The autonomous features of the IR sensors and push buttons did their job well.

The navigation was a bit worrying at times and could have been improved with tracks instead of wheels, or sophisticated integration with ultrasonic sensors, both challenging time, skill and money wise.

The most obvious downfall was falling down the gap. We thought we had solved this problem with wheel reasonably larger than the gap, but clearly that was not the case. This could have been prevented in a number of ways. One way could have the centre of mass shift to the rear (in the direction of motion) by actuating the bucket arms when the vehicle was straddling the gap. Another obvious way could be to use larger wheels or tracks.

Despite this, our vehicle performed exceptionally better than all the other teams, and resulted in us scoring almost triple everyone else's score.

#### What I Learned
I am grateful to have had a good team of five other first year students to have shared this project with. I am equally grateful for the many lessons I took from the project, including:
- leading a technical project team,
- basic mechanical, electrical, and software design,
- technical writing, and
- constructing our design in on-campus Makerspaces.

The final vehicle *Montgomery* in all his glory...
<figure>
    <img src="{{ '/assets/projects/ardet/top.jpeg' | relative_url }}" alt="Picture of Onboard Electronics">
</figure>

As always, if you have any questions feel free to [email](mailto:anthonydavidcarbone@gmail.com) or tweet me @_anthonycarbone.