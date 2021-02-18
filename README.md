# Strongin's global search algorithm 
In the tests listed below, precision of calculation = 0.01.<br/>
Let's compare the results with different parameters r.<br/>
###y = x, [1,5]
r = 3:<br/>
![Graph 1](/Images/Test1/graph1.png)<br/>
The count of tests: 8<br/>
Result: (1, 1)<br/>

r = 1.5:<br/>
![Graph 1](/Images/Test2/graph1.png)<br/>
The count of tests: 6<br/>
Result: (1, 1)<br/>


y = sin(x), [1, 9],<br/>
r = 3:<br/>
![Graph 2](/Images/Test1/graph2.png)<br/>
The count of tests: 73<br/>
Result: (4.713, -1)<br/>

r = 1.5:<br/>
![Graph 2](/Images/Test2/graph2.png)<br/>
The count of tests: 41<br/>
Result: (4.712, -1)<br/>


y = sin(x)*x, [0, 20],<br/>
r = 3:<br/>
![Graph 3](/Images/Test1/graph3.png)<br/>
The count of tests: 55<br/>
Result: (17.34, -17.31)<br/>

r = 1.5:<br/>
![Graph 3](/Images/Test2/graph3.png)<br/>
The count of tests: 46<br/>
Result: (4.916, -4.814)<br/>


y = abs(abs(x - 1) - abs(x + 5) * x), [-10, 10],<br/>
r = 3:<br/>
![Graph 4](/Images/Test1/graph4.png)<br/>
The count of tests: 53<br/>
Result: (0.1618, 0.002894)<br/>

r = 1.5:<br/>
![Graph 4](/Images/Test2/graph4.png)<br/>
The count of tests: 23<br/>
Result: (0.1612, 0.00699)<br/>


Output of the program:<br/>
![Result](/Images/result.png)<br/>
