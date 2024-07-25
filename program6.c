// Problem statement: Accept two value from user and perform the addition 

// Step 1 : understand the problem statement 
// Conclusion : We have to accept 2 integers and perform its addition .

//step 2: write the algorithm 

/*
 START
 Accept 1st number from user and store into no1
 Accept 2st number from user and store into no2
 Create one variable to store the result named as Ans
 perform addition of no1 and  no2 ,store the result in ans
 Display the result from ans to user 
 STOP
*/

//Step 3: Decide  the programming language 
// We select c programming


// Step 4: write the program


#include<stdio.h>
///////////////////////////////////////////////////////////////////////////
//
//Function Name :Addition
//Description : it is used to perform addition of 2 integers
//Input argument : Integer, Integer
//Output : Integer
//Author: Sanket Gajanan Vaidya
//Date: 25/09/2023
//
/////////////////////////////////////////////////////////////////////////
int addition(int ino1, int ino2)
{
   int isum=0;
   isum = ino1 + ino2;
   return isum;
}
//////////////////////////////////////////////////////////////////////
//
// Entry point function of an application which perform addition of 2 integer
//
////////////////////////////////////////////////////////////////////
int main()
{
    int iVAlue1=0;
   int iVAlue2=0;
   int iAns = 0;

    printf("Enter first number: \n ");
    scanf("%d",&iVAlue1);


    printf("Enter second number : \n");
       scanf("%d",&iVAlue2);

    iAns=addition(iVAlue1,iVAlue2);

    printf("Addition is %d\n",iAns);
    return 0;

}

// step 5 : test the code 
/*
Test case 1 :
Input :10 11
Output : 21

Test case  :
Input : 10 0
Output :10
*/