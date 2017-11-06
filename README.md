
# SrGrace's 10 Days of Statistics Challenges-wiki
Collection of solution for [10 Days of Statistics Challenges](https://www.hackerrank.com/domains/tutorials/10-days-of-statistics) at [HackerRank](https://www.hackerrank.com/).

### Contents

* [Day 0](#day-0) 
* [Day 1](#day-1)
* [Day 2](#day-2)
* [Day 3](#day-3)
* [Day 4](#day-4)
* [Day 5](#day-5)
* [Day 6](#day-6)
* [Day 7](#day-7)
* [Day 8](#day-8)
* [Day 9](#day-9)

### Day 0
---

####[Day 0: Mean, Median, and Mode](https://www.hackerrank.com/challenges/s10-basic-statistics/problem)
<br>
**Task:** <br>
Given an array, X, of N integers, calculate and print the respective ***mean, median, and mode*** on separate lines. If your array contains more than one modal value, choose the numerically smallest one.
<br><br>
[Solution](https://github.com/SrGrace/10-Days-of-Statistics-Challenges/blob/master/Day-0/Day-0_MeanMedianAndMode.cpp)
<br>
<br>

####[Day 0: Weighted Mean](https://www.hackerrank.com/challenges/s10-weighted-mean/problem)
<br>
**Task:** <br>
Given an array, X, of N integers and an array, W, representing the respective weights of X's elements, calculate and print the ***weighted mean*** of X's elements. Your answer should be rounded to a scale of decimal place.
<br><br>
[Solution](https://github.com/SrGrace/10-Days-of-Statistics-Challenges/blob/master/Day-0/Day-0_WeightedMean.cpp)
<br>
<br>

### Day 1
---

####[Day 1: Quartiles](https://www.hackerrank.com/challenges/s10-quartiles/problem)
<br>
**Task:**<br>
Given an array, X, of N integers, calculate the respective ***first quartile (Q1), second quartile (Q2), and third quartile (Q3)***. It is guaranteed that Q1, Q2, and Q3 are integers.
<br><br>
[Solution](https://github.com/SrGrace/10-Days-of-Statistics-Challenges/blob/master/Day-1/Day-1_Quartiles.cpp)
<br>
<br>

####[Day 1: Interquartile Range](https://www.hackerrank.com/challenges/s10-interquartile-range/problem)
<br>
**Task:** <br>
The interquartile range of an array is the difference between its first (Q1) and third (Q3) quartiles (i.e., Q3-Q1). <br>
Given an array, X, of N integers and an array, F, representing the respective frequencies of X's elements, construct a data set, X, where each Xi occurs at frequency Fi. Then calculate and print S's ***interquartile range***, rounded to a scale of 1 decimal place (i.e., 12.3 format).
<br><br>
[Solution](https://github.com/SrGrace/10-Days-of-Statistics-Challenges/blob/master/Day-1/Day-1_InterquartileRange.cpp)
<br>
<br>

####[Day 1: Standard Deviation](https://www.hackerrank.com/challenges/s10-standard-deviation/problem)
<br>
**Task:** <br>
Given an array, X, of N integers, calculate and print the ***standard deviation***. Your answer should be in decimal form, rounded to a scale of decimal place (i.e., 12.3 format). An error margin of +-0.1 will be tolerated for the standard deviation.
<br><br>
[Solution](https://github.com/SrGrace/10-Days-of-Statistics-Challenges/blob/master/Day-1/Day-1_StandardDeviation.cpp)
<br>
<br>

### Day 2
---

####[Day 2: Basic Probability](https://www.hackerrank.com/challenges/s10-mcq-1/problem)
<br>
**Task:** <br>
In a single toss of 2 fair (evenly-weighted) six-sided dice, find the probability that their sum will be at most 9.
<br><br>
**Ans:** ***30/36 = 5/6***
<br>
<br>

####[Day 2: More Dice](https://www.hackerrank.com/challenges/s10-mcq-2/problem)
<br>
**Task:** <br>
In a single toss of 2 fair (evenly-weighted) six-sided dice, find the probability that the values rolled by each die will be different and the two dice have a sum of 6. 
<br><br>
**Ans:** ***4/36 = 1/9***
<br>
<br>

####[Day 2: Compound Event Probability](https://www.hackerrank.com/challenges/s10-mcq-3/problem)
<br>
**Task:** <br>
There are 3 urns labeled X, Y, and Z.

    Urn contains red balls and black balls.
    Urn contains red balls and black balls.
    Urn contains red balls and black balls.

One ball is drawn from each of the 3 urns. What is the probability that, of the 3 balls drawn, 2 are red and 1 is black?
<br><br>
**Ans:** <br>

    Urn X has a 4/7 probability of giving a red ball. 
    Urn Y has a 5/9 probability of giving a red ball. 
    Urn Z has a 1/2 probability of giving a red ball. 
    
    Urn X has a 3/7 probability of giving a black ball.
    Urn Y has a 4/9 probability of giving a black ball. 
    Urn Z has a 1/2 probability of giving a black ball. 

    =>P(2 red, 1 black) 
    = P(Red Red Black) + P(Red Black Red) + P(Black Red Red) 
    = (4/7)(5/9)(1/2) + (4/7)(4/9)(1/2) + (3/7)(5/9)(1/2)
    = 20/126 + 16/126 + 15/126 
    = 51/126 
    = 17/42  
    
<br>

### Day 3
---

####[Day 3: Conditional Probability](https://www.hackerrank.com/challenges/s10-mcq-4/problem)
<br>
**Task:** <br>
Suppose a family has 2 children, one of which is a boy. What is the probability that both children are boys?
<br><br>
**Ans:** <br>

    Approach is to reduce the sample space so that it only contains events where one child is a boy 
    S(boy) = {BB, GB, BG}. If we consider event E to be the event in which both children are boys (so E = {BB}), 
    we can find the probability as a fraction of the reduced sample space:
                        P(E) = |E|/|S| = 1/3.
                        
<br>

####[Day 3: Cards of the Same Suit](https://www.hackerrank.com/challenges/s10-mcq-5/problem)
<br>
**Task:** <br>
You draw 2 cards from a standard 52-card deck without replacing them. What is the probability that both cards are of the same suit?
<br><br>
**Ans:** <br>

    The first card drawn will be from any of the 4 suits and there will be 51 cards left in the deck, 
    only 12 of which match the drawn card's suit. The probability of the second card being of the same suit is:
                        P(E) = 12/51 = 4/17.
                        
<br>

####[Day 3: Drawing Marbles](https://www.hackerrank.com/challenges/s10-mcq-6/problem)
<br>
**Task:** <br>
A bag contains 3 red marbles and 4 blue marbles. Then, 2 marbles are drawn from the bag, at random, without replacement. If the first marble drawn is red, what is the probability that the second marble is blue?
<br><br>
**Ans:** <br>

    since already 1 ball is choosen, there are 6 balls left. We need to pick up the blue ball, 
    where there are 4 blue coloured balls. The probabilty is P(E) = 4/6 = 2/3.
                        
<br>

### Day 4
---

### Day 5
---

### Day 6
---

### Day 7
---

### Day 8
---

### Day 9
---

<br><br>
**NOTE:** PRs and Stars are always welcome :)

