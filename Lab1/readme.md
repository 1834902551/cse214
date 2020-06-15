### [1.Scan N values from user: ](https://github.com/1834902551/cse214/blob/master/Lab1/1.c)

```javascript
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

  ```  
    
### [2.Scan values from user until end of file: ](https://github.com/1834902551/cse214/blob/master/Lab1/2.c)

```javascript
    while(scanf("%d",&a[i]) != EOF)
    
        i++;
        if(i>=10)
        
            printf("\n Overflow");
            break;
            
```

### [3.Scan values from user until user input is 0 (Zero): ](https://github.com/1834902551/cse214/blob/master/Lab1/3.c)
```javascript
 while(1)
    {
        int t;
        scanf(%d", &t);
        if(t == 0)
            break;
            a[i++] = t;
        
```


### [4.Print each element in newline: ](https://github.com/1834902551/cse214/blob/master/Lab1/3.c)
```javascript
for(i=0;i<x;i++)
    {
        printf("%d\n", a[i]);
    }
    
```

### [5.Print each element separated by space: ](https://github.com/1834902551/cse214/blob/master/Lab1/3.c)
```javascript
for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    
```

### [6.Print each element separated by comma : ](https://github.com/1834902551/cse214/blob/master/Lab1/3.c)
```javascript
 for(i=0;i<size;i++)
    {
        printf(" %d,", a[i]);
    }
    
```

### [7.Print each elements in reverse order. : ](https://github.com/1834902551/cse214/blob/master/Lab1/3.c)
```javascript
for(i=size-1;i>=0;i--)
    {
        printf("%d  ", a[i]);
    }
```


