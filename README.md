# Multi-shaped-clock

💡Requirement Analysis
The C++ language is used to design clocks with different shapes, as well as hour, minute and second hands of different colours, lengths and even shapes, enabling multi-shaped clocks.

💡Key steps are described as follows:
1. In the design of the clock class, combined with the C language for the initialization and import of hours, minutes and seconds,,using the time.h function to import the system local time.
2. In writing acllib.h and acllib.c file, the use of graphical functions and classes, this experiment designed a rectangle clock and a seven-coloured petal clock. Essentially inherited the rectangleclock class and ellipseclock class features for design.
3. When designing the clock pattern, the appearance is designed first, followed by the scale, which is calculated through the math.h function and the change in radian. The scale should be close to the outer edge as the appearance changes, and finally the hour, minute and second hands. The hour hand is thicker and shorter, the minute hand is longer and thinner than the hour hand, and the second hand is the thinnest and longest, all of which can be varied through mathematical formulae.

💡Test results
When the program is opened and compiled and run, the rectangular clock is shown below:

![image](https://github.com/Frannie1020/Multi-shaped-clock/assets/137517674/e9cbdeee-2203-457b-b357-349a70c0c406)


The seven-coloured petal-shaped clock is shown below:

![image](https://github.com/Frannie1020/Multi-shaped-clock/assets/137517674/47f4f5f2-2214-41a2-a52c-5e0d747e537f)


The times are all current system times, followed by the overall picture:

![image](https://github.com/Frannie1020/Multi-shaped-clock/assets/137517674/f4a1f3ab-9f22-49b3-9040-2ab67d972eaa)


💡Thoughts

1. Through this experiment, I got a better grasp of classes and also gained an in-depth understanding of the three major operations of C++: encapsulation inheritance and polymorphism.

2. I learnt the basic operations of the acllib library and how to graph the functions written, as well as how to draw different shapes and patterns and add different colours.

3. During the experiment, I also learned how to configure acllib in different compilers, and how to configure it in dev C++, VS2013 and codeblocks, which I have mastered.

4. Writing code in the process of encountering places do not know, learned to check the catechism and textbook related content, but also more familiar with the use of mathematical methods to calculate the radian, trajectory and conic equation.

5. This experiment also want to carry out heart-shaped pattern drawing, but due to the current level of limited, in my opinion, using python or UG drawing will be more convenient, I hope to master in the future learning.

