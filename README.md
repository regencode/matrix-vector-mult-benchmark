# matrix-vector-mult-benchmark

github link = https://github.com/regencode/matrix-vector-mult-benchmark
How to run:

Open the "matrix-vector-mult-benchmark" folder in WSL with Make installed

Available Makefile commands:

    run - To compile and run main_test.c
    time - Compile and run main_b_time.c -> generates a pair of dataRuntime files
    space - Compile and run main_b_space.c
    clear - Clears all generated files (*.o *.out *.exe *.dat)
 
 # Instructions for checking time complexity:
 On the terminal, enter "make time". A pair of dataRuntime files are created:
 
    data*.dat = stores actual runtime every 100 steps up to 5000 steps
    data*Magnified.dat = stores magnified values of actual runtime 
    (Only for time-complexity graph visualization)
  
Copy all the values from the Magnified.dat files (delete the last comma) and paste it in desmos.com. A scatter plot graph will be generated that shows the shape of the runtime against step-number curve.
    
By running "make time", and extracting the data from the magnified.dat files, this is the scatter plot that I got (I drew a line to show that there is a linear progression):

![matrix vect mult](https://user-images.githubusercontent.com/114067350/205201511-421a2205-f792-4c7b-b24b-9020e5c9a4da.PNG)

As there is a linear progression, matrix-vector multiplication has a time complexity of O(n).

# Instructions for checking space complexity

In the main_b_space.c files is a "forever" loop using while(1). The forever loop only contains the function which does the multiplication operation between the matrix and the vector. By running it using 'make space', these files are executed 3 times each with different input values (n = 1250 (top), n = 1000, n = 750, n = 500, n = 250 (bottom)).
I get these processes in the task manager:

![matrix vect mult space](https://user-images.githubusercontent.com/114067350/205203900-ccef1aec-d485-4d9e-884d-7ccfab22c95b.PNG)

Since there is equal intervals between the N values, we can represent them as 10, 20, 30, 40, and 50 in the x axis of the graph, and the memory usage is represented
as the y axis by dividing each of the memory usages by 100.

And therefore we get this graph:

![space complex](https://user-images.githubusercontent.com/114067350/205204474-52ee88e6-81b2-43fd-a488-85049b28eabf.PNG)

From this graph, we can conclude that my algorithm for matrix-vector multiplication has a space complexity of O(n^2)
The actual space complexity for matrix-vector multiplication is O(n), but since my program has to store the values of matrix, vector and the result as arrays, the space complexity is higher as increasing values of N makes the memory assigned to those arrays increasingly significant.
