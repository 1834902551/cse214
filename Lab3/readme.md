### [1.Find Maximum from the Array.](https://github.com/1834902551/cse214/blob/master/Lab3/1.c)
```javascript
for(i=0;i<size;i++)
    {
        if(a[i]>max)
            max = a[i];
    }

    printf("Maximum = %d\n",max);
```

### [2. Find Minimum from the Array.](https://github.com/1834902551/cse214/blob/master/Lab3/2.c)
```javascript
for(i=0;i<size;i++)
    {
        if(a[i]<min)
            min = a[i];
    }

    printf("Minimum = %d\n",min);
```

### [3.Find Second Maximum from the Array.](https://github.com/1834902551/cse214/blob/master/Lab3/3.c)
```javascript
for(i=0; i<size; i++)
    {
        if(a[i]>max)
        {
            max2 = max;
            max = a[i];
        }
        else if(a[i]>max2 && a[i]<max)
            max2 = a[i];
    }

    printf("Second Maximum = %d\n",max2);
```

### [4.Find Second Minimum from the Array.](https://github.com/1834902551/cse214/blob/master/Lab3/4.c)
```javascript
for(i=0; i<size; i++)
    {
        if(a[i]>min)
        {
            min2 = min;
            min = a[i];
        }
        else if(a[i]>min2 && a[i]<min)
            min2 = a[i];
    }

    printf("Second Minimum = %d\n",min2);
```
### [5.Calculate the summation of all elements of the given array .](https://github.com/1834902551/cse214/blob/master/Lab3/5.c)
```javascript
for(i=0; i<size; i++)
        sum = sum + a[i];

    printf("Summation = %d\n",sum);
```

### [6.Calculate Standard Deviation of all elements of the given array.](https://github.com/1834902551/cse214/blob/master/Lab3/6.c)
```javascript
for(i=0; i<size; i++)
        variance = variance + pow(a[i]-avg,2);

    variance = sqrt(variance/10);

    printf("\nVariance = %.2lf\n",variance);

```

### [7.Calculate first 92 Fibonacci number and store those in an array.](https://github.com/1834902551/cse214/blob/master/Lab3/7.c)
```javascript
for(i=2; i<size; i++)
        a[i] = a[i-1] + a[i-2];

    for (i = 0; i<size; i++)
        printf("%d. %.0lf \n", i+1, a[i]);

```



