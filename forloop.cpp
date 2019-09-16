/*

A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax for this is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop will be

for(int i = 0; i < 10; i++) {
    ...
}
Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the interval  :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd

*/

/*

https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

*/





#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(i>=1 && i<=9)
        {
            switch(i)
            {
                case 1:cout<<"one"<<endl;
                break;

                case 2:
                  cout << "two" << endl;
                  break;

                case 3:
                  cout << "three" << endl;
                  break;

                case 4:
                  cout << "four" << endl;
                  break;

                case 5:
                  cout << "five" << endl;
                  break;

                case 6:
                  cout << "six" << endl;
                  break;

                case 7:
                  cout << "seven" << endl;
                  break;

                case 8:
                  cout << "eight" << endl;
                  break;

                  case 9:cout<<"nine"<<endl;
                break;

                }
        }
        else
        {
            if(i%2==0)
            cout<<"even"<<endl;
            else
            cout<<"odd"<<endl;
        }
    }
    return 0;
}

