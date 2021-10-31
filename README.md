# ***Network Community Detection***

## **Building and Executing**
_________________
### **Linux**
#### **From Command Line**<br/>

1. Clone Repository into a folder on your local machine.<br/>
   `git clone https://github.com/drodrigues01/Program-3-Diogo-Kellen.git` <br/>
2. Open Ubuntu and navigate to the folder directory you just created.
3. Build and Compile Project:<br/>
   `mkdir build`<br/>
   `cd build`<br/>
   `cmake ..`<br/>
   `cmake --build .`<br/>
4. Run the Project:<br/>
   `./Program-3-Diogo-Kellen` <br/>

## **TASK**
_________________
This projects implements 3 container classes (vector, list, and
dictionary using a balanced binary search tree) and implements two
iterators: Forward Iterator and Random Access Iterator. The latter
is supported by all three data structures while the first only by
the vector.<br/>
In addition, 4 algorithms are implemented:
* **Find** using a forward iterator range
* **Insertion** sort using random iterator range
* **Quicksort** using random iterator range
* **Heapsort** using random iterator range

## **DATA GATHERING**
_________________
The project creates a sets of random integers and random strings
of 10 characters in order to test the performance of the
algorithms. The performance is tracked using std::chrono.
**Algorithm For Data Generation**
sizes = {1000, 2500, 5000, 10000, 25000, 40000}
for s in size:
* generate a randomized dataset of size s with 0% duplicates
* generate a dataset of size s with 0% duplicates that is sorted in ascending order
* generate a dataset of size s with 0% duplicates that is sorted in descending order
* generate a randomized dataset of size s with 20% duplicates
* generate a randomized dataset of size s with 40% duplicates
* run each of the datasets above through each of the three sorting algorithms and
  collect timing data.


## **WRITE UP**
_________________
In generating the data, there were really only about four processes that were used:
in-order generation, reverse order generation, duplicates, and shuffling. For the
randomized dataset with 0% duplicates, an in-order loop was run, then each index in
the array took turns being swapped with another random index. for the in order, it
was the same process, minus the shuffling. The reverse order was the only unique one,
but under the hood it was also an in-order creation, with the amount of loops run
subtracting from a constant number. The 20 and 40% duplicates added ones to the array
until they hit 1 or 2 fifths of the dataset size, respectively, and then shuffled all
indexes with another random index. Of the three algorithms, heapsort performed
relatively similar in all cases, while insertionsort and quicksort performed
extremely well for in-order datasets and extremely poor for reverse-order datasets.
The selectionsort and heapsort performed relatively consistently over each data size,
not increasing by an impressive amount along with the dataset size, but the quicksort
actually became completely out of hand for every dataset type once the sizes got
large enough. The insertionsort was interesting to watch because it had the largest
span relative to itself over two different data types, being in-order and reverse-
-order. In order stayed shockingly low over all of the dataset sizes, but the reverse-
-order dataset grew astronomically large quite quickly.

### **GRAPHS**
