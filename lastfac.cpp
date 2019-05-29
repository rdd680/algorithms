#include <iostream>

using namespace std;

int i;

int main(){
int n;
int amt;
int sum, product=0;

std::cin >> amt;
for(int j =0; j<amt; ++j){
    std::cin >> n;


}
while (n > 0)
{

// STEP 1:
// Write a loop that displays the sum of the first 'n' integers
// For example, the sum of the first three integers is 6.

sum=0;

for (i=1;i<=n;i++)
	sum+=i;

cout << "The sum of the first " << n << " integers is " << sum << "." << endl;

// STEP 2:
// Write a loop that displays the first 'n' integers that are NOT multiples of 3
// For example, the first 5 such numbers are: 1 2 4 5 7
// HINT: The largest such integer will be just less than 1.5*n
// Display all these values on a single line, separated by spaces.

for (i=1;i<=1.5*n;i++)
	if(i%3!=0)
		cout << i << " ";

cout << endl;	 // end the line After all the values display

// STEP 3:
// Write a loop that displays the sum of the first 'n' odd integers
// The largest such integer will be just less than 2*n
// FOr partial credit, it will suffice to get the correct sum
// For full credit, do so without using any if statements to test a number is odd

sum=0;

for (i=1;i<2*n;i+=2)
	sum+=i;

cout << "The sum of the first " << n << " odd integers is " << sum << "." << endl;

// STEP 4:
// Complete the loop that started on line 36 by prompting for
// and accepting a new input value. Tell the user how to stop!

cout << "Please give a new value. If you want to stop give 0." << endl;

cin >> n;

cout << endl;

}

// STEP 5:
// Test the code that you have so far

// STEP 6:
// For any positive integer n, n factorial (written as 'n!' in math)
// is the product of all the positive integers up to and including n.
// Write a program loop that displays the first nine factorials
// The first three lines of 1! = 1
// output should look like 2! = 2
// those at the right here 3! = 6
// For full credit, do so with a single loop (no nested loops)

product=1;

for(i=1;i<=9;i++)
{
	product=product*i;
	cout << i << "! = " << product << endl;
}

cout << endl;

// STEP 7:
// Now produce the same output, but in reverse order, starting with 9 factorial
// Again, for full credit, do so with a single loop (no nested loops)
// Hint: you may use the results from the end of the previous loop

cout << i-1 << "! = " << product << endl;

for(i=9;i>=2;i--)
{
	product=product/i;
	cout << i-1 << "! = " << product << endl;
}

cout << endl;

// STEP 8:
// Test your results of the code you have so far.
// The factorial answers should match each other.

return 0;

}