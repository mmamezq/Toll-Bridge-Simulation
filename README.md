# Toll-Bridge-Simulation
There is a toll drawbridge that crosses Wattawide river. It has two tollbooths that handles normal traffic reasonably well but has room for three extra booths. The problem is when there is a 5 to 15 minute delay when the drawbridge is up and the traffic backs up. The two tollbooths become a bit of a bottleneck.  Write a program that will compare adding one, two, or three tollbooths to see if the wait time goes down. Each vehicle can either pay with a fast electronic pass card (just drive by slowly) that takes 1 time unit or with cash (toss coins into a basket) that takes 3 time units. You may assume half of the vehicles have the pass card and half have coins (do the equivalent of a coin toss using random). Also assume that vehicles will evenly line up behind every toll booth.  Have a toll_sim routine that would take the number of booths, create a queue for each booth, and fill each booth with vehicles. Have a random number from 50 to about 100 as the number of vehicles waiting Use a toll_kind function to return a Pass or Cash for each vehicle to determine the time it takes to go through the booth. Have toll_sim dequeue all the vehicles and add up the wait times per booth (be careful not to include the final wait times since no vehicle would be behind the last one). Have a current wait time as you go through the queue and have a total wait time that adds all the wait times of the cars for the current booth. For each booth, print the maximum wait time (the last current wait time), the number of cars waiting for that booth, and the average wait  (total wait time divided by the number of cars for the booth).  Run the toll_sim with 2 booths, 3 booths, 4 booths, and 5 booths.
