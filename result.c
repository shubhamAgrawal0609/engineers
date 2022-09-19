 void main()
{
    int s1,s2,s3,s4,s5,total;
    
    float per;
    printf("Marks obtained by students\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    total=s1+s2+s3+s4+s5;
    per=total/5;
    if(per>=40)
    {
        printf("PASSED\n");
    }
    else
    {
        printf("FAIL\n");
    }
    printf("SUBJECT     MAXIMUM MARKS     MARKS OBTAINED\n");
    
    printf("English       100                    %d\n",s1);
    printf("Hindi         100                    %d\n",s2);
    printf("Maths         100                    %d\n",s3);
    printf("Science       100                    %d\n",s4);
    printf("Arts          100                    %d\n",s5);
    

}
