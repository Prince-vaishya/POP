/* Electricity bill
Practical 2, Part 2
This is program outline for testing to see it compiles and runs

@author Prince Vaishya */
                                                                 
#include<stdio.h>

int main()
{
    /* code */
    //define variables for previous reading, current reading, day and month
    int previousMetre=0, currentMetre=0, day=0, month=0;
    // int previousMetre, currentMetre, day, month; //sample code

    //prompt user to enter previous reading, current reading, day and month separated 
    //by a space or return;

    printf("Enter previous reading:\nEnter current reading:\nEnter Day:\nEnter month:\n");
    //read previous metre, current metre, day and month 
    scanf("%d %d %d %d",&previousMetre, &currentMetre,&day,&month);

 
      

    //Validation
    //current metre reading within range 0..9999
    //sample code below
    //previous metre reading within range 0..9999  
    if (currentMetre < 0 || currentMetre > 9999){
        printf("Error: current meter reading out of range \n");
        printf("Meter Range: 0 to 9999 \n");}
    //previous not greater than present
    if (previousMetre>currentMetre)
    {
        printf("Error: Current meter can't be less than previous meter\n");
    }
    //month in range 1..12
    if (month>12|month<0)
    {
        printf("Error: Enter Valid month\n");
        
    }

    if (month==1||day>31)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==2||day>29)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==3||day>31)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==4||day>31)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==5||day>31)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==6||day>31)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==7||day>31)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==8||day>31)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==9||day>31)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==10||day>31)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==11||day>31)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    if (month==12||day>30)
    {
        printf("Enter valid day! ");
        scanf("%d",&day);
    }
    
    
   //display previous metre, current metre, day and month
    printf("Your Previous Reading was: %d\nYour Current reading is: %d\nThe day is: %d\nThe Month is: %d",previousMetre,currentMetre,day,month );


    return 0;
} 
      


    
    
    //electricity used not more than 1000

       
    //days in month must be correct (Jan, March etc)
    
    //days in month must be correct (Apr, June etc)
        
    //days in month must be correct (Feb – assuming 29 days) 

    