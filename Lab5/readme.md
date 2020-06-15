#### [1.Scan N (take input N from user) values from user into an array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/1.c)
```javascript
for(i=0; i<N; i++)
        scanf("%d",(p+i));

    printf("\n");

    for(i=0; i<N; i++)
        printf("%d ",*(p+i));
```

#### [2. Scan values from user into an array until end of file. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/2.c)
```javascript
for(i=0; scanf("%d",(p+i))!=EOF; i++)
        size++;

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));
```


#### [3.Scan values from user into an array until user input is 0 (Zero). Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/3.c)
```javascript
for(i=0; scanf("%d",(p+i))!=EOF; i++)
        if(*(p+i)==0)
            break;

    size=i;

```


#### [4.Print entire array each element separated by space. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/4.c)
```javascript
    for(i=0; i<size; i++)
        printf("%d ", *(p+i));
```


#### [5.Insert a value “X” (take input X from user) in the array at Kth (take input K from user) index and shift all other value to right. And print the whole array. Access the array using pointe.](https://github.com/1834902551/cse214/blob/master/Lab5/5.c)
```javascript
    for (i=size; i>=K; i--)
        *(p+i) = *(p+i-1);

    size++;

    *(p+K) = X;
```


#### [6.Update Kth (take input K from user) index with the value “X” (take input X from user). And print the whole array. Access the array using pointer .](https://github.com/1834902551/cse214/blob/master/Lab5/6.c)
```javascript
 for(i=K-1; i<size; i++)
    {
        *(p+i)=X;
        break;
    }
```


#### [7.Search a value “X” (take input X from user) in the array and print the location if “X” found in the array otherwise print -1. Access the array using pointer .](https://github.com/1834902551/cse214/blob/master/Lab5/7.c)
```javascript
for(i=0; i<size; i++)
    {
        if(*(p+i)==X)
        {
            location = i;
            temp++;
        }
    }

    if(temp==1)
        printf("%d",location);
    else
        printf("-1");
```


#### [8.Delete a value from Kth index (take input K from user) from the array shift all other value to left. And print the whole array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/8.c)
```javascript
for (i=K-1; i<size; i++)
        *(p+i) = *(p+i+1);

    size--;

    for(i=0; i<size; i++)
        printf("%d ", *(p+i));
```


#### [9.Find Maximum from the Array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/9.c)
```javascript

    for(i=1; i<size; i++)
        if(*(max+i)>*max)
            *max = *(max+i);

```


#### [10. Find Minimum from the Array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/10.c)
```javascript
for(i=1; i<size; i++)
        if(*(min+i)<*min)
            *min = *(min+i);

```


#### [11.Find Second Maximum from the Array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/11.c)
```javascript
for(i=0; i<size; i++)
    {
        if(*(max+i)>*max)
        {
            max2 = *max;
            *max = *(max+i);
        }
        else if(*(max+i)>max2 && *(max+i)<*max)
            max2 = *(max+i);
    }
```


#### [12.Find Second Minimum from the Array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/12.c)
```javascript
for(i=0; i<size; i++)
    {
        if(*(min+i)<*min)
        {
            min2 = *min;
            *min = *(min+i);
        }
        else if(*(min+i)<min2 && *(min+i)!=*min)
            min2 = *(min+i);
    }
```


#### [13.Calculate the summation of all elements of the given array. Access the array using pointer .](https://github.com/1834902551/cse214/blob/master/Lab5/13.c)
```javascript
    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
        sum += *(p+i);

```


#### [14.Copy the given array into another array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/14.c)
```javascript
for(i=0; i<size; i++)
    {
        temp = *(p+i);
        *(q+i) = temp;
    }

```


#### [15.Reverse the given array within the same array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/15.c)
```javascript
for(i=0; i<=size; i++)
    {
        temp = *(p+size-i);
        *(q+i-1) = temp;
    }

```


#### [16.Declare another array with ten (10) values and compare both arrays whether they are same or not. Access the array using pointe.](https://github.com/1834902551/cse214/blob/master/Lab5/16.c)
```javascript
for(i=0; i<size; i++)
        if(*(p+i)==*(q+i))
            same++;

    if(same==size)
        printf("\nTwo array are same\n");
    else
        printf("\nTwo array are not same\n");
```


#### [17.Declare another array with five (5) values and merge two array into one array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/17.c)
```javascript
size = size_a + size_b;

    for(i=size_a, j=0; i<=size; i++,j++)
       *(p+i)=*(q+j);
```


#### [18.Merge the Elements of two Sorted Array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/18.c)
```javascript
for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(*(p+i)>*(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
```


#### [19.Split an Array after Kth (take input K from user) elements into two different Arrays. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/19.c)
```javascript
for(i=0; i<size_a; i++)
    {
        if(i<K)
        {
            *(q+i) = *(p+i);
            size_b++;
        }
        else
        {
            *(r+j++) = *(p+i);
            size_c++;
        }
```


#### [20.Cyclically permute the elements of an array. Access the array using pointer.](https://github.com/1834902551/cse214/blob/master/Lab5/20.c)
```javascript
*(p+size) = *p;

    for (i=0; i<size; i++)
        *(p+i) = *(p+i+1);
```

