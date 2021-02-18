# Strongin's global search algorithm 
In the tests listed below, precision of calculation = 0.01.<br/>
Let's compare the results with different parameters r.
## y = x, [1,5]
### r = 3:<br/>
The count of tests: 8<br/>
Result: (1, 1)<br/>
![Graph 1](/Images/Test1/graph1.png)<br/>

### r = 1.5:<br/>
The count of tests: 6<br/>
Result: (1, 1)<br/>
![Graph 1](/Images/Test2/graph1.png)

## y = sin(x), [1, 9]
### r = 3:<br/>
The count of tests: 73<br/>
Result: (4.713, -1)<br/>
![Graph 2](/Images/Test1/graph2.png)<br/>

### r = 1.5:<br/>
The count of tests: 41<br/>
Result: (4.712, -1)<br/>
![Graph 2](/Images/Test2/graph2.png)

## y = sin(x)*x, [0, 20]
### r = 3:<br/>
The count of tests: 55<br/>
Result: (17.34, -17.31)<br/>
![Graph 3](/Images/Test1/graph3.png)<br/>

### r = 1.5:<br/>
The count of tests: 46<br/>
Result: (4.916, -4.814)<br/>
![Graph 3](/Images/Test2/graph3.png)

## y = abs(abs(x - 1) - abs(x + 5) * x), [-10, 10]
### r = 3:<br/>
The count of tests: 53<br/>
Result: (0.1618, 0.002894)<br/>
![Graph 4](/Images/Test1/graph4.png)<br/>

### r = 1.5:<br/>
The count of tests: 23<br/>
Result: (0.1612, 0.00699)<br/>
![Graph 4](/Images/Test2/graph4.png)<br/>

## Output
Output of the program with the parameter r = 3:<br/>
![Result](/Images/Test1/result.png)<br/>

Output of the program with the parameter r = 1.5:<br/>
![Result](/Images/Test2/result.png)<br/>
