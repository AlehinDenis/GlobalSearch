# Strongin's global search algorithm 
In the tests listed below: <br/>
r = 3 <br/>
Precision of calculation = 0.01<br/>

y = x, [1,5]:<br/>
![Graph 1](/Images/graph1.png)<br/>
The count of tests: 8<br/>
Result: (1, 1)<br/><br/>

y = sin(x), [1, 9]:<br/>
![Graph 2](/Images/graph2.png)<br/>
The count of tests: 73<br/>
Result: (4.713, -1)<br/><br/>

y = sin(x)*x, [0, 20]:<br/>
![Graph 3](/Images/graph3.png)<br/>
The count of tests: 55<br/>
Result: (17.34, -17.31)<br/><br/>

y = abs(abs(x - 1) - abs(x + 5) * x), [-10, 10]:<br/>
![Graph 4](/Images/graph4.png)<br/>
The count of tests: 53<br/>
Result: (0.1618, 0.002894)<br/><br/>

Output of the program:<br/>
![Result](/Images/result.png)<br/>
