### [1.Copy the given array into another array.](https://github.com/1834902551/cse214/blob/master/Lab4/1.c)
```javascript
for(i=0; i<size; i++)
    {
        b[i] = a[i];
    }
    printf("\nb= ");
    for(i=0; i<size; i++)
        printf("%d ",b[i]);
```

### [2.Reverse the given array and store it in another array.](https://github.com/1834902551/cse214/blob/master/Lab4/2.c)
```javascript
for(i=0;i<=size;i++)
    {
        b[i-1] = a[size-i];

    }

    for(i=0; i<size; i++)
        printf("%d ",b[i]);
```

### [3.Reverse the given array within the same array.](https://github.com/1834902551/cse214/blob/master/Lab4/3.c)
```javascript
 for(i=size-1, j=0; j<i; i--, j++){
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
```


### [4.Declare another array with ten (10) values and compare both arrays whether they are same or not.](https://github.com/1834902551/cse214/blob/master/Lab4/4.c)
```javascript
for(i=0; i<size; i++)
    {
    if(a[i]==b[i]);
            same++;
    }

    if(same==size)
        printf("\n\nThey are same\n");
      else
    {
    printf("\n\nThey are not same\n");

```

### [5.Declare another array with five (5) values and merge two array into one array.](https://github.com/1834902551/cse214/blob/master/Lab4/5.c)
```javascript
size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
        a[i]=b[j];
```

### [6.Merge the Elements of two Sorted Array.](https://github.com/1834902551/cse214/blob/master/Lab4/6.c)
```javascript
for(i=0; i<size; i++)
    {
     for(j=i+1; j<size; j++)
        {
        if(a[i]>a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp
        }
```


### [7.Split an Array at Kth (take input K from user) index into two different Arrays.](https://github.com/1834902551/cse214/blob/master/Lab4/7.c)
```javascript
for(i=0; i<size_a; i++)
    {
        if(i<K)
        {
            b[i] = a[i];
            size_b++;
        }
        else
        {
            c[j++] = a[i];
            size_c++;
        }
```

### [8.Cyclically permute the elements of an array.](https://github.com/1834902551/cse214/blob/master/Lab4/8.c)
```javascript
 a[size] = a[0];

    for (i=0; i<size; i++)
        a[i] = a[i+1];

```




