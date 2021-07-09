# include <stdio.h>
main()
{
   int a[ ]={11,34,55,66,77,87,89};
   int l=7, f=0, m, ele, flag=0;
    printf("Enter the element to be find");
    scanf("%d",&ele);
   for(m=(l+f)/2; f!=l ; m=(l+f)/2)
   {
      if(ele==a[m])
          flag=1;
       break;
     if(ele>a[m])
      f=m;
     if(ele<a[m])
      l=m;
    }
 if (flag==1)
   printf("Element  find at the pos %d",m);
 elese
   printf("Elemen not find in array");
}