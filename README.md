Interactive-3D-Cellular-Automata---Using-Three.js-Arduino-HTML

<img width="3562" height="2050" alt="Digital User Interface for 3D Cellular Automata -" src="https://github.com/user-attachments/assets/23cccb17-2cbd-4c84-9b7a-87ab7e2e163a" />

<br>
<br>

<img width="900" height="675" alt="final set up" src="https://github.com/user-attachments/assets/a5e3a4f6-8d25-482b-98b9-9d9f80653df2" />
<br>

Overview:
<P>The code creates a 3D cellular automata simulation using Three.js, where each cell exists in a 3D grid (6x6x6) and follows rules inspired by Conway's classic Game of Life. Each cell can be either “alive” with a value of 1 or ”dead” with a value of 1. This state is stored in two 3d arrays called gameState (current generation) and nextState (the generation being calculated). In this simulation, I use a GLB model (corrsscube.glb) for each living cell, or if that fails to load, simple green coloured cubes are used.</P>

<p>The main mechanic driving this game is the neighbour counting function, which checks all the 16 surrounding cells (a 3x3x3 cube minus the centre) to determine how many neighbours are alive. Based on this count, the evolution rules are applied. </p>

<p> A living cell survives if it has 4-6 living neighbours, and a dead cell is born if it has exactly 5 living neighbours. These rules differ from the classic 2D Game of Life because 3D cells have more neighbours, requiring different thresholds to produce interesting patterns. </p>

<p> I have then created a user interface that features my own graphic design. The user controls the simulation through four buttons: Play/Pause toggles automatic generation advancement, Next manually steps forward one generation, Reset clears all cells to dead, and Random seeds the grid with a random pattern (20% of cells alive). The interface also displays the current generation number and count of living cells. </p>


Motivation: 
<P>This Project was inspired by my interest in fractals, particularly the Menger Sponge.
a famous three-dimensional mathematical curve and fractal (a repeating geometric shape). by Karl Menger in 1926. </P>

<P> I wanted to explore ways that I could explore its infinite fractal expansion in a graphics project without creating recursive loops preventing compilation. At this time, I was also exploring the concept of cellular automata. This allows the recursive nature of the fractal to be achieved through the continuous generation and configuration of states that are in Cellular automata.</P>

<P>This is a discrete, abstract model of computation consisting of a regular grid of cells, where each cell changes its state over discrete time steps by following a simple set of local rules based on its own state and the states of its neighbouring cells. This approach was famously adopted into the 2D game of life by John Conway. To date, many variations have been created using this concept.</P> 

<P>What I enjoy about this game is that the user does not have any true control over winning; they can simply only generate an initial condition and then watch the outcome. The Aim of this game becomes to observe and identify behaviours of the cellular automata.</P> 
  

<br>
<img width="723" height="540" alt="Screenshot 2026-10-10 at 17 22 51" src="https://github.com/user-attachments/assets/21bb10fa-4131-4076-9217-7dbf656ba506" />
<br>
Image from (https://www.quantamagazine.org/teen-mathematicians-tie-knots-through-a-mind-blowing-fractal-20241126/)
<br>
Creating the Cross cube in blender:
<img width="3562" height="2090" alt="Creating the Cross cube in blender" src="https://github.com/user-attachments/assets/c9321622-90ad-4d2f-af2e-b1cac0055579" />
<br>

Technical implementation:
The switch Buttons on the controller control the Play/Pause button and the random button to gnerate a new configuration. 
I am now working on an iteration that allows the joysticks to manoeuvre around the space. The interface that allows you to connect to the Arduino and see if the connection is active. In this project I include an LED to be turned without code on the breadboad to ensure that I know there is working voltage running through the breadboard. 

<br>

Equipment -
<p>Two 2 Joysticks </p> 
<P>A breadboard </P>
<P> Arduino Mega 2560 </P>
<P> Wireing </P>

<br>

<img width="3562" height="2050" alt="Navigating The Virtual Space" src="https://github.com/user-attachments/assets/63050394-6259-49d1-84b8-04b231e19ad1" />

 <br>


Demonstration: 

https://github.com/user-attachments/assets/382e830b-9b01-4588-9b27-57f068b6abe0



https://github.com/user-attachments/assets/a8160012-e5fe-422b-91a6-01b2ea238e3c





