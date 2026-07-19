/*Approach-1 In this taking divisiors till half the original number*/
class Solution {
public:
    bool checkPerfectNumber(int num) 
    {int total = 0;
    for(int i=1; i<=num/2; i++)
        {if(num%i==0){total+=i;}}
    return total==num;}
};
