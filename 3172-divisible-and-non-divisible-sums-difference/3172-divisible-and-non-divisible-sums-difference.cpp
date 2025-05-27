class Solution {
public:
    int differenceOfSums(int n, int m) {
        //MATHEMATICAL FORMULA;
        //SUM OF N NUMBERS = N(N+1)/2;
        //NUMBERS DIVISIBLE BY M = N/M = LET K;
        //SUM OF DIVISAL NUMS = K(K+1)/2;
        //BUT WE HAVE TO SUBTRACT TWICE OF SUM OF DIVISIBLE AS 
        //ONE TIME IT IS BEING ADDED WITH THE TOTAL SUM 
        //AND ANOTHER TIME BECAUSE IT IS GIVING IN QUESTION
        //2*(K(K+1)/2) = K(K+1)

        int sum = (n*(n+1))/2;
        int k = n/m;
        return (sum -  (k * (k+1))*m);





        //TRAVERSAL METHOD
        // int num1 = 0, num2 = 0;
        // for(int i = 1; i <= n; i++)
        //     {
        //         if(i % m == 0)
        //             num2 += i;
        //         else
        //             num1 += i;
        //     }
        // return num1-num2;
    }
};