#include<stdio.h>
#include<stdlib.h>

//Structure created
struct display_array{
    int *a;
    int size;
    int length;
};

//Displays Function Created
void display(struct display_array ARRAY){
    for (int i = 0; i < ARRAY.length; i++){
        printf("%d ",ARRAY.a[i]);
    }
    printf("\n");
}

//Append Function Created
void append(struct display_array *arr,int x){
    if (arr->length<arr->size)
    {
        arr->a[arr->length]=x;
        arr->length++;
    }
    else{
        printf("Array is Already Occupied cannot add any extra array \n");
    }
}

//Insert Function Created
void Insert(struct display_array *arr,int num1,int index){
    if (arr->length<arr->size)
    {
        if(index >= 0 && index < arr->length){
            for (int i = arr->length-1; i>=index; i--)
            {
                arr->a[i+1]=arr->a[i];
            }
            arr->a[index]=num1; 
            arr->length++;
        }
        else{
            printf("Index Is Invalid !!");
        }
    }
    else
        printf("Array is Already occupied cannot Insert. Sorry!! \n");
}

//Delete Function Created
void Delete(struct display_array *arr,int index){
    if (index>=0 && index<arr->length)
    {
        for (int i =index; i <arr->length-1; i++)
        {
            arr->a[i]=arr->a[i+1];
        }
        arr->length--;
        
    }
    else{
        printf("Index is InVALID !!!");
    }
    
}

//Linear Search Function Created
int Linearsearch(struct display_array arr,int element){
    for (int i = 0; i < arr.length; i++)
    {
        if (element==arr.a[i])
        {
            return i;
        }
        
    }
    return -1;
}

//Binary Search Function Created
int Binarysearch(struct display_array arr,int element){
    int low=0,mid;
    int end=arr.length-1;
    while (low<=end)
    {
        mid=(low+end)/2;
        if (element==arr.a[mid])
        {
            return mid;
        }
        else if (element<arr.a[mid])
        {
            end--;
        }
        else{
            low++;
        }
        
        
    }
    return -1;
}

//Get(index) Function Created
void Get(struct display_array arr,int index){
    if (index>=0 && index<arr.length)
    {
        for (int i = 0; i <arr.length ; i++){
            if (index==i)
            {
               printf("Element is %d at Index %d  \n",arr.a[index],index); 
            }
        }
    }
    else{
        printf("Index Is INVALID !!!\n");
    }
}

//Set(index) Function Created
void Set(struct display_array *arr,int index,int element){
    if (index>=0 && index<arr->length)
    {
        for (int i = 0; i <arr->length ; i++){
            if (index==i)
            {
               arr->a[index]=element; 
            }
        }
    }
    else{
        printf("Index Is INVALID !!!\n");
    }
}

//Max(array) Function Created
void Max(struct display_array arr1){
    int t=arr1.a[0];
    for (int i = 1; i < arr1.length; i++)
    {
        if (t<arr1.a[i])
        {
            t=arr1.a[i];
        }
        
    }
    printf("Maximum Value in Array is : %d\n",t);
    
}

//Sum(array) Function Created
int Sum(struct display_array arr2){
    int t=0;
    for (int i = 0; i < arr2.length; i++)
    {
        t=t+arr2.a[i];
    }
    return t;  
}

//Avg(array) Function Created
int Avg(struct display_array arr2){
    int t=0;
    for (int i = 0; i < arr2.length; i++)
    {
        t=t+arr2.a[i];
    }
    return (t/arr2.length);  
}

//Reverse Array Function Created
void Revarray(struct display_array *arr){
    int *b;
    b=(int *)malloc(arr->size*sizeof(int));
    int i,j;
    for (i=arr->length-1,j=0; i>=0,j<arr->length; i--,j++)
    {
        b[j]=arr->a[i];
    }
    for ( i = 0; i < arr->length; i++)
    {
        arr->a[i]=b[i];
    }   
}

//left shift/rotate Function Created similarly will be Created for Right shift/rotate
void Lshift(struct display_array *arr3){
    int b=arr3->a[0];
    for (int i = 0; i < arr3->length-1; i++)
    {
        arr3->a[i]=arr3->a[i+1];
    }
    arr3->a[arr3->length-1]=b; 
}

//Inserting element in Sorted array
void Insertsort(struct display_array *arr4, int element){
    if (arr4->length<arr4->size)
    {
        int i=arr4->length-1;
        for (; arr4->a[i]>element; i--){
            arr4->a[i+1]=arr4->a[i];
        }
        arr4->a[i+1]=element;
        arr4->length++;
        
    }
    else{
        printf("There is No SPACE left in array Sorry !!!\n");
    }   
}

//Sort Function Created to check array is sort or not
int Sort(struct display_array arr5){
    for (int i = 0; i < arr5.length-1; i++)
    {
        if (arr5.a[i]>arr5.a[i+1])
        {
            return 0;
        }
    }
    return 1;
}

//-ve on Leftside Function Created
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void Negleft(struct display_array *arr5) {
    int i=0,j=arr5->length-1;
    while (i<j)
    {
        while(arr5->a[i]<0)
        {
            i++;
        }
        while(arr5->a[j]>=0)
        {
            j--;
        }
        if (i<j){
        swap(&(arr5->a[i]),&arr5->a[j]);
        /*
        int temp;
        temp=arr5->a[i];
        arr5->a[i]=arr5->a[j];
        arr5->a[j]=temp;*/
        }
    }  
}

//Merging Two Sorted Array Function Created
void Merge(struct display_array arr1,struct display_array arr2,struct display_array *arr3){
    for (int i = 0; i <arr1.length; i++)
    {
        arr3->a[i]=arr1.a[i];
    }
    for (int j = arr1.length, i=0; j < (arr1.length+arr2.length),i<arr2.length; j++,i++)
    {
        arr3->a[j]=arr2.a[i];
    } 
}

int main(){
    struct display_array array,arr1,arr2;
    int num,index,t;
    /*
    printf("Enter The Size of Array :");
    scanf("%d",&array.size);
    array.a=(int *)malloc(array.size*sizeof(int));
    printf("Enter The Length of Array :");
    scanf("%d",&array.length);
    for (int i = 0; i < array.length; i++){
        printf("Enter The Array :");
        scanf("%d",&array.a[i]);
    }
    */
    /*
    printf("Enter Number Which You Want to Append :");
    scanf("%d",&num);
    append(&array,num);
    */
    /*
    printf("Enter Number Which You Want to Insert :");
    scanf("%d",&num);
    printf("At Which Index You Want to Insert :");
    Insert(&array,num,index);
    */
    /*
    printf("At Which Index You Want to Delete :");
    scanf("%d",&index);
    Delete(&array,index);
    */
    /*
    printf("Enter Number Which You Want to search :");
    scanf("%d",&num);
    t=Linearsearch(array,num);
    if (t>=0 && t<array.length)
    {
        printf("Element Found At Index : %d\n",t);
    }
    else{
        printf("Not Found\n");
    }
    */
    /*
    printf("Enter Number Which You Want to search :");
    scanf("%d",&num);
    t=Binarysearch(array,num);
    if (t>=0 && t<array.length)
    {
        printf("Element Found At Index : %d\n",t);
    }
    else{
        printf("Not Found\n");
    }
    */
   /*
    printf("Enter The Index To Know The Elements :");
    scanf("%d",&index);
    Get(array,index);
    */
   /*
    printf("Enter Number Which You Want to Set :");
    scanf("%d",&num);
    printf("Enter The Index At Which You Want to Set :");
    scanf("%d",&index);
    Set(&array,index,num);
    */
    /*
    Max(array);
    */
    //printf("Sum Of Array is : %d\n",Sum(array));
    //printf("Avg Of Array is : %d\n",Avg(array));
    //Revarray(&array);
    //Lshift(&array);
    /*
    printf("Enter Number Which You Want to Insert in Sorted ARRAY :");
    scanf("%d",&num);
    display(array);
    Insertsort(&array,num);
    */
    /*
    t=Sort(array);
    if (t==0)
    {
        printf("Array is Not Sorted !!!\n");
    }
    else{
        printf("Array is Sorted\n");
    }
    */
    //display(array);
    //Negleft(&array);

    /*
    printf("Enter The Size of first Array :");
    scanf("%d",&array.size);
    array.a=(int *)malloc(array.size*sizeof(int));
    printf("Enter The Length of first Array :");
    scanf("%d",&array.length);
    for (int i = 0; i < array.length; i++){
        printf("Enter The Array :");
        scanf("%d",&array.a[i]);
    }
    printf("Enter The Size of second Array :");
    scanf("%d",&arr1.size);
    arr1.a=(int *)malloc(arr1.size*sizeof(int));
    printf("Enter The Length of Array :");
    scanf("%d",&arr1.length);
    for (int i = 0; i < arr1.length; i++){
        printf("Enter The Array :");
        scanf("%d",&arr1.a[i]);
    }
    arr2.a=(int *)malloc((arr1.size+array.size)*sizeof(int));
    arr2.length=arr1.length+array.length;
    display(array);
    display(arr1);
    Merge(array,arr1,&arr2);
    display(arr2);
    */
    return 0;
}