
    #include <stdio.h>
    void main()
    {
 
        int i, j, a, n, number[30],number1[30],merge[30],m,x;
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the elements of the array \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                  } 
            } 
            merge[i]=number[i];
        }
        x=n;
             printf("Enter the value of M \n");
        scanf("%d", &m);
 
       
        printf("Enter the elements of the array \n");
        for (i = 0; i < m; ++i)
            scanf("%d", &number1[i]);
 
        for (i = 0; i < m; ++i) 
        {
 
            for (j = i + 1; j < m; ++j)
            {
 
                if (number1[i] > number1[j]) 
                {
                    a =  number1[i];
                    number1[i] = number1[j];
                    number1[j] = a;
                  } 
            } 
            merge[x]=number1[i];
            x++;
        }
        
             for (i = 0; i < x; ++i) 
        {
 
       

            printf("The  %d element of the merge of two sorted array is  %d\n",i+1,merge[i]);
        }
       
    }
