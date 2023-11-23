This is a group project, it a school project submitted by Mariam Williams and Ranti Ogunsanya titled the Big'O

What is Big'O notation?
Big Oh notation (which is an upper bound) with Big Theta notation "Θ" (which is a two-side bound). 
But in my experience, this is actually typical of discussions in non-academic settings. 
Apologies for any confusion caused.

BigOh complexity can be visualized with this graph:

Big Oh Analysis

The simplest definition I can give for Big Oh notation is this:

Big Oh notation is a relative representation of the complexity of an algorithm.

There are some important and deliberately chosen words in that sentence:

relative: you can only compare apples to apples. 
You can't compare an algorithm that does arithmetic multiplication to an algorithm that sorts a list of integers. 
But a comparison of two algorithms to do arithmetic operations (one multiplication, one addition) will tell you 
something meaningful;
representation: BigOh (in its simplest form) reduces the comparison between algorithms to a single variable. 
That variable is chosen based on observations or assumptions. 
For example, sorting algorithms are typically compared based on comparison operations (comparing two nodes to determine their relative ordering). 
This assumes that comparison is expensive. But what if the comparison is cheap but swapping is expensive? It changes thecomparison; andcomplexity: if it takes me one second to sort 10,000 elements, how long will it take me to sort one million? Complexity in this instance is a relative measure to something else.
Come back and reread the above when you've read the rest.

The best example of BigOh I can think of is doing arithmetic. 
Take two numbers (123456 and 789012). The basic arithmeticoperations we learned in school were:

addition;
subtraction;
multiplication; and
division.
Each of these is an operation or a problem. A method of solving these is called an algorithm.

The addition is the simplest. You line the numbers up (to the right) and add the digits in a column writing the last number of that addition in the result. 
The 'tens' part of that number is carried over to the next column.

Let's assume that the addition of these numbers is the most expensive operation in this algorithm. It stands to reason that to add these two numbers together we have to add together 6 digits (and possibly carry a 7th). If we add two 100 digit numbers together we have to do 100 additions. If we add two 10,000 digit numbers we have to do 10,000 additions.

See the pattern? The complexity (being the number of operations) is directly proportional to the number of digits n in the larger number. We call this O(n) or linear complexity.

Subtraction is similar (except you may need to borrow instead of carry).

Multiplication is different. You line the numbers up, take the first digit in the bottom number and multiply it in turn against each digit in the top number and so on through each digit. So to multiply our two 6 digit numbers we must do 36 multiplications. We may need to do as many as 10 or 11 column adds to get the end result too.

If we have two 100-digit numbers we need to do 10,000 multiplications and 200 adds. For two one million digit numbers weneed to do one trillion (1012) multiplications and two million adds.

As the algorithm scales with n-squared, this is O(n2) or quadratic complexity. This is a good time to introduce another important concept:

We only care about the most significant portion of complexity.

The astute may have realized that we could express the number of operations as: n2 + 2n. But as you saw from our examplewith two numbers of a million digits apiece, the second term (2n) becomes insignificant (accounting for 0.0002% of the total operations by that stage).

One can notice that we've assumed the worst case scenario here. While multiplying 6 digit numbers, if one of them has 4 digits and the other one has 6 digits, then we only have 24 multiplications. Still, we calculate the worst case scenariofor that 'n', i.e when both are 6 digit numbers. Hence Big Oh notation is about the Worst-case scenario of an algorithm.
