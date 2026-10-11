Interactive-3D-Cellular-Automata---Using-Three.js-Arduino-HTML

<img width="3562" height="2050" alt="Digital User Interface for 3D Cellular Automata -" src="https://github.com/user-attachments/assets/23cccb17-2cbd-4c84-9b7a-87ab7e2e163a" />

<br>
<br>

<img width="900" height="675" alt="final set up" src="https://github.com/user-attachments/assets/a5e3a4f6-8d25-482b-98b9-9d9f80653df2" />
<br>

Overview:
<P>
Grid Size 6×6×6 = 216 cells
</P>
<P>
Uses gameState and nextState to avoid conflicts
</P>
<P>
If GLB model fails to load, it uses coloured cubes instead
</P>

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
Two 2 Joysticks 
A breadboard 
Arduino Mega 2560
Wireing


<br>

<img width="3562" height="2050" alt="Navigating The Virtual Space" src="https://github.com/user-attachments/assets/63050394-6259-49d1-84b8-04b231e19ad1" />

 <br>


Demonstration: 

https://github.com/user-attachments/assets/382e830b-9b01-4588-9b27-57f068b6abe0



https://github.com/user-attachments/assets/a8160012-e5fe-422b-91a6-01b2ea238e3c





