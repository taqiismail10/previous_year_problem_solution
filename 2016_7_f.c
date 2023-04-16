#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ara[50], *x;  //এটা ইন্টিজার এরে যার আল্টিমেট সাইজ 50*4 
    x=(ara+0); // এখানে আমি x পয়েন্টারকে 50 element এর base address
                //  এর দিকে পয়েন্ট করে দিছি, যেটা x=&ara[0] বা  x=ara দিলেও হয়।


    int *x = (int *)malloc(50 * sizeof(int)); 
    //ঠিক একই কাজ মেমোরি এলোকেশন দিয়ে করতে বলা হয়ছে প্রশ্নে, এখানে x[50] নামে 
    //একটা এরে ডিক্লেয়ার হয়ছে, আর এরেও একধরণের পয়েন্টার

    //না বুঝলে আবার  বলিস




    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    int max = x[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }
    printf("Maximum number is %d", max);

    return 0;
}