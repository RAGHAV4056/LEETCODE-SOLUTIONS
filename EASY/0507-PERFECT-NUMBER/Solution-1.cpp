/*Approach-1 Looping is done till half the number is reached and divisors of the number are added.*/
class Solution {
public:
    bool checkPerfectNumber(int num) 
    {int total = 0;
    for(int i=1; i<=num/2; i++)
        {if(num%i==0){total+=i;}}
    return total==num;}
};
