//Time complexity: O(n)=it is a amount of time taken by the algorithm to run, as a function of the length of the input.
//Space complexity: O(n)=it is a amount of memory taken by the algorithm to run, as a function of the length of the input.
//why we use time and space complexity?
//Ans:1.for making better program
//    2.for making better algorithm
//    3.for comparing two algorithm
//time complexity types:
//1.constant time complexity:O(1)
//2.linear time complexity:O(n)
//3.quadratic time complexity:O(n^2)
//4.cubic time complexity:O(n^3)
//5.logarithmic time complexity:O(log n)
//6.linearithmic time complexity:O(n log n)
//7.exponential time complexity:O(2^n)
//8.factorial time complexity:O(n!
//time complexity comparison:
//1.O(1)<O(log n)<O(n)<O(n log n)<O(n^2)<O(n^3)<O(2^n)<O(n!)
//how to calculate time complexity?
//Ans:1.count the number of operations in the code
//    2.find the largest order term
//    3.remove the constants
//    4.remove the lower order terms
//    5.find the big O notation
//example 1 f(n)=6n^2+2n+6
//f(n)=O(n^2) becuse 6n^2 is the largest order term and we remove the constants and lower order terms
// example2 f(n)=n^2+log n+2
//f(n)=O(n^2) becuse n^2 is the largest order term and we remove the constants and lower order terms
//example 3 f(n)=2n^3+5n^2+8
//f(n)=O(n^3) becuse 2n^3 is the largest order term and we remove the constants and lower order terms
//find the time complexity of the following code
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
//Ans:O(n)because the loop runs n times
//space complexity=O(1) because we are using only one variable sum

//example 2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            sum += i + j;
        }
    }
    cout << sum << endl;
    return 0;
}
//Ans:O(n^2) because the loop runs n*n times and first loop runs n times and second loop runs n times
//so the total time complexity is O(n^2)
//space complexity=O(1) because we are using only one variable sum

//example 3
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                sum += i + j + k;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
//Ans:O(n^3) because the loop runs n*n*n times and first loop runs n times and second loop runs n times and third loop runs n times
//so the total time complexity is O(n^3)
//space complexity=O(1) because we are using only one variable sum

//example 4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum += i + j;
        }
    }
    cout << sum << endl;
    return 0;
}
//Ans:O(n^2) because the loop runs n*(n+1)/2 times and first loop runs n times and second loop runs i times
//here i is the value of first loop and lopp runs from 1 to i
//j runs from 1 to i
//so the total time complexity is O(n^2)
//space complexity=O(1) because we are using only one variable sum

//example 5
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                sum += i + j + k;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
//Ans:O(n^3) because the loop runs n*(n+1)/2*(n+2)/3 times and first loop runs n times and second loop runs i times and third loop runs j times
//here i is the value of first loop and lopp runs from 1 to i
//j runs from 1 to i
//k runs from 1 to j
//so the total time complexity is O(n^3)
//space complexity=O(1) because we are using only one variable sum