#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

char alphabet[] = "abcdefghIiJjKklmnopqrstuvwxz";


int main(){
//    char str_message[500];
//    int key,i,enc;
//    printf("Enter Plain text=");
//    gets(p);
//    printf("\n Enter Key=");
//    scanf("%d",&key);
//
//    for(i=0;i<strlen(str_message);i++)
//    {
//
//           enc=((str_message[i]-97)+key)%26;
//           printf("%c",enc+97);
//    }
char str_message[500],str_key[500],str_key_cpy[500],str_message_cpy[500];
printf("enter the text: ");
scanf("%s", &str_message);
printf("enter the key: ");
scanf("%s", &str_key);
strcpy(str_key_cpy, str_key);
strcpy(str_message_cpy, str_message);
strcat(str_key_cpy, alphabet);
printf(str_key_cpy);


}
