#include<stdio.h>
#include<string.h>

typedef struct 

{
    char instagram_id[25];
    char instagram_pass[25];
    int  age;
   
}metauser;
int main()

{
    metauser user1={"Theweeknd", "BLINDINGLIGHTS",34};
    metauser user2={"Juicewrld 999", "REMINDSMEOFTHESUMMER",19};
    metauser user3={"Antent","IWASALWAYSTEMPORARY",999};


printf("%s\n", user1.instagram_id);
printf("%s\n", user1.instagram_pass);
printf("%d\n",user1.age);
printf("\n");
printf("\n");
printf("%s\n",user2.instagram_id);
printf("%s\n",user2.instagram_pass);
printf("%d\n",user2.age);
printf("\n");
printf("\n");
printf("%s\n",user3.instagram_id);
printf("%s\n",user3.instagram_pass);
printf("%d\n",user3.age);


return 0;

}


