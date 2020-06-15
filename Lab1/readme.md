## [Array Elements Insertion (User Input)](https://github.com/1834902551/cse214/blob/master/Lab1/1.c)

/*for ( initialize ; condition; increment ) {
   scanf statement(s);
}*/

//Implement in Program

for(p = 0; p<memory; p++)
    {
        scanf("%d ",&array[p]);
    }
Print The Array Elements
/*for ( initialize ; condition; increment ) {
   printf statement(s);
}*/

//Implement in Program

for(p = 0; p<memory; p++)
    {
        printf("%d ", array[p]);
    }
Array Reversing
/*for ( initialize ; condition; Decrement ) {
   printf statement(s);
}*/

//Implement in Program

for(p = memory-1; p>=0; p--)
    {
        printf("%d ", array[p]);
    }
Array Access
/*if (index_value > index_size)
printf("Overflow"); //The index location is not available.*/

//Implement in Program

if(p>100)
        {
            printf("Overflow");
            break;
        }
End of File
/*while(Conditions){
Statements;
}*/

//Implement in Program

while(scanf("%d",&array[p]) != EOF)
    {
        p++;
    }
    
    // or
    
while(scanf("%d",&array[p]) == 1)
    {
        p++;
    }
