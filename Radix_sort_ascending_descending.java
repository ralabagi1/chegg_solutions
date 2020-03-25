import java.util.Scanner;
/*
Complexity : O (d*(n+b))
d is digits in input integers.
b is the base for representing numbers.
*/
public class RadixSort 
{
    /** Radix Sort function **/
    public static void sortaes( int[] a)
    {
        int i, m = a[0], exp = 1, n = a.length;
       
        int[] b = new int[n];
        for (i = 1; i < n; i++){
            if (a[i] > m)
                m = a[i];
        } 
         /*
        Using the above for loop we can find the maximum of all the numbers. 
        Instead of finding itslength we will iterate a while loop until the 
        maximum number falls below zero by dividing the number by 10 for every 
        iteration. Then sort the array using a temporary bucket and array b[ ]
        and place back the final contents.
        */
        while (m / exp > 0)
        {
            int[] bucket = new int[10];
            //storing count of occurence
            for (i = 0; i < n; i++)
                bucket[(a[i] / exp) % 10]++;
            /* Changing bucket[i] so that bucket[i] now contains 
               actual position of this digit in output[]
            */
            for (i = 1; i < 10; i++)
                bucket[i] += bucket[i - 1];
            //building output array
            for (i = n - 1; i >= 0; i--)
                b[--bucket[(a[i] / exp) % 10]] = a[i];
            //copying output array to original array
            for (i = 0; i < n; i++)
                a[i] = b[i];
            exp *= 10;        
        }
    }    
    
    public static void sortdes(int[] a){
        
    int i, m=0, exp=1,n = a.length;
    int[] b = new int[n];
    for (i=0; i<n; i++)
        if (a[i]>m)
            m=a[i];
    while (m/exp>0)
    {
         int[] bucket = new int[10];
         /* 
           storing count of occurence.Instead of reversing after each pass, 
           reverse the indexes used for bucket by using (9 - digit).
          */
        for (i=0; i<n; i++)
            bucket[9-a[i]/exp%10]++; 
        /* 
            Changing bucket[i] so that bucket[i] now contains 
           actual position of this digit in output[]
        */
        for (i=1; i<10; i++)
            bucket[i]+=bucket[i-1];
        /*
           building output array even here you can we reverse 
           index by subtracting index with 9 for output index
        
        */
        for (i=n-1; i>=0; i--)
            b[--bucket[9-a[i]/exp%10]]=a[i];
        //copying output array to original array
        for (i=0; i<n;i++){
            a[i]=b[i];                    
        }
        exp*=10;
    }
}
    

    public static void main(String[] args) 
    {
      
        int arr[] = {25,98,12,33,45,24,57,17,31};
        int i=0,n=arr.length;
        System.out.println("Elements before sorting");
        for (i = 0; i < n; i++){
            System.out.print(arr[i]+" ");            
        }
        sortaes(arr);
        System.out.println("\n\nElements after sorting in ascending");        
        for (i = 0; i < n; i++){
            System.out.print(arr[i]+" ");            
        }
        int arr1[] = {25,98,12,33,45,24,57,17,31};
        sortdes(arr);
        System.out.println("\n\nElements after sorting in descending");        
        for (i = 0; i < n; i++){
            System.out.print(arr[i]+" ");            
        }
    }    
}
