gaits
=====

Calculation of gait patterns for four-legged animals

In 1878, our very own Leland Stanford settled the debate over 
whether horses are ever fully airborne while running: he organized 
the first ever example of a high-speed photo shoot (and hence the 
forerunner of motion picture technology) . Here's the photo, taken 
on June 10, 1878, at his Palo Alto track.

Here, I'll describe walking (actually the most complicated of gaits) :

The dog alternates between two and three legs supporting the body. 
Thus, there are eight 4C3 (three-leg combinations) plus 4C2 (two-leg 
combinations) minus the two combinations where you have the two front 
legs at the same time and then the two back legs at the sam time. 
That's four each. It's an eight-beat cycle, which means that after 
eight steps/lifts, it starts all over, like a video reaching the end 
and starting again. Each odd beat, for example, the dog has two paws 
down, and each even one it has three.

Viewing the odd and even beats separately, you can see that on each 
paw stays down for n beats, where n is the number of paws down on 
the particular beat. Thus, in the whole cycle, each paw stays down 
for n=2 + n=3 = 5 beats.

Here's a diagram for the odd beats (let the dot represent a placed paw) :
0 •  |  0 •  |  • 0  |  • 0
• 0  |  0 •  |  0 •  |  • 0
Which, if you think about it, is really the only way you can cycle 
through those four positions if you adhere to each paw staying down 
for two beats. There are six possible orderings of the four positions 
(4! arrangements, but /4 for the cycles) . If you think of the above 
ordering that we know works as the order 234 (1234) , then you see 
that to avoid jumping from a position to its opposite, i.e.:
|  0 •  |  • 0  | 
|  0 •  |  • 0  | 
or the equivalent other (the diagonal mirror) , you have to come up 
with an order that never pairs 2 and 4 together, like above, nor does 
it do so with 1 and 3, which would automatically follow -- because 
it's a cycle, hence it repeats, so 1243 still pairs 1 and 3 at the 
head and tail. So, to avoid such a pairing, your only other possibility 
is 1423. Or, you could work it out as ordering the letters abB such 
that the 'b' and the 'B' are never together, so you just fix one at 
the start (one possibility of the remaining 2! is good) and same for 
the other, which gives you 1+1=2 total ways to avoid the jump. So, 
for now let's just remember: there's only one position and its mirror 
that work.

As for the three-paw steps, you can view the cycle as each next beat. 
Like so (to view the whole eight-beat cycle, the i^th three-paw beat 
in this cycle is the beat right after the i^th two-paw step) :
0 •  |  • •  |  • 0  |  • •
• •  |  0 •  |  • •  |  • 0

What about the other five possibilities? For example, how about it be 
such that the paw that lifts is the next in an anti-clockwise or
clockwise circle? As in,
0 •  |  • •  |  • •  |  • 0
• •  |  0 •  |  • 0  |  • •
? Well, if you combine that with the odd beats you get the following:
  1      2        3       4        5       6       7        8
0 • |  0 •  |  0 •  |  • •  |  • 0  |  • •  |  • 0  |  • 0
• 0 |  • •  |  0 •  |  0 •  |  0 •  |  • 0  |  • 0  |  • •
, where 
                          1|2|3|4|5|6|7|8
the front left paw goes   0|0|0|•|•|•|•|• , which is OK,
the front right paw goes  •|•|•|•|0|•|0|0 , which is not,
the back left paw goes    •|•|0|0|0|•|•|• , which is OK,
the back right paw goes   0|•|•|•|•|0|0|• , which is not.

front right and back left don't fit. The other five possibilities don't work, 
either -- but the mirror of the one that does works with our original mirror 
for the two-paw beats. So, basically, there are only two sets of beats that 
work for walking: the original that we worked out, and its mirror.