### [1.Insert any value at tenth (10th) index of the array.And print the whole array. ](https://github.com/1834902551/cse214/blob/master/Lab2/1.c)
```javascript
printf("\nValue=11\n");

    a[9] = 11;

    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
```

### [2.Insert a value “X” (take input X from user) in the array at the end of currently stored elements. ](https://github.com/1834902551/cse214/blob/master/Lab2/2.c)
```javascript
 printf("\nValue= ");

    scanf("%d",&X);
    a[9] = X;

    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
```

### [3.Insert a value “X” (take input X from user) in the array at third (3rd) index and shift all other value to right. And print the whole array ](https://github.com/1834902551/cse214/blob/master/Lab2/3.c)
```javascript
scanf("%d", &X);

    for (i=size; i>=index; i--)
        a[i] = a[i-1];

    size=size+1;

    a[index] = X;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);
        
```

### [4.Insert a value “X” (take input X from user) in the array at Kth (take input K from user) index and shift all other value to right. And print the whole array: ](https://github.com/1834902551/cse214/blob/master/Lab2/4.c)
```javascript
printf("\nValue= ");
    scanf("%d", &X);

    printf("\nindex: ");
    scanf("%d", &K);

    for (i=size; i>=K; i--)
        a[i] = a[i - 1];

    size++;

    a[K] = X;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);
```

### [5.Update fifth (5th) index with another value. And print the whole array. ](https://github.com/1834902551/cse214/blob/master/Lab2/5.c)
```javascript
for (i=0; i==index; i++)
        a[i] = a[i - 1];

    a[index] = value;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);
```

### [6.Update Kth (take input K from user) index with the value “X” (take input X from user). And print the whole array: ](https://github.com/1834902551/cse214/blob/master/Lab2/6.c)
```javascript
 printf("\nIndex: ");

    scanf("%d", &K);

    printf("\nValue= ");
    scanf("%d", &X);

    for (i=0; i==K; i++)
        a[i] = a[i - 1];

    a[K] = X;

    for(i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
```

### [7.Search a value “X” (take input X from user) in the array and print “Found” if X found in the array otherwise print “Not Found”: ](https://github.com/1834902551/cse214/blob/master/Lab2/7.c)
```javascript
for (i=0; i<size; i++)
    {
        if(a[i]==X)
            search++;
    }

    if(search==1)
        printf("Found");
    else
        printf("Not Found");
```

### [8.Search a value “X” (take input X from user) in the array and print the index if X found in the array otherwise print -1: ](https://github.com/1834902551/cse214/blob/master/Lab2/8.c)
```javascript
for (i=0; i<size; i++)
    {
        if(a[i]==X){
            printf("Index %d",i);
            search++;
        }
    }

    if(search!=1)
        printf("-1\n");

```

### [9.Delete a value from Kth index (take input K from user) from the array shift all other value to left. And print the whole array: ](https://github.com/1834902551/cse214/blob/master/Lab2/9.c)
```javascript
for (i=K; i<size; i++)
        a[i] = a[i+1];

    size--;

    for (i=0; i<size; i++)
        printf("%d ",a[i]);

```

### [10.Delete a value “X” (take input X from user) from the array shift all other value to left. If “X” is not present in the given array print Element Not Found. Only delete the first occurrence of the value. And print the whole array : ](https://github.com/1834902551/cse214/blob/master/Lab2/10.c)
```javascript
 if(search!=1)
    {
        printf("Element Not Found");
    }
    else
    {
        for(i=0; i<size; i++)
            printf("%d ",a[i]);
    }
```

### [11. Delete a value “X” (take input X from user) from the array shift all other value to left. If “X” is not present in the given array print Element Not Found. Delete all the occurrence of the value. And print the whole array: ](https://github.com/1834902551/cse214/blob/master/Lab2/11.c)
```javascript
   if(tag==0)
    {
        printf("Not Found");
    }
    else
    {
        for(i=0; i<size; i++)
            printf("%d ",a[i]);
    }
    
```




