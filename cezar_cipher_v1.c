#include<stdio.h>

void encrypt(){
  char str_message[500], ch;
  int j, key;
  printf("Enter a message to encrypt: ");
  scanf("%s",str_message);
  printf("Enter the key(from 1 to 15): ");
  scanf("%d", &key);
  for(j = 0; str_message[j] != '\0'; ++j){
    ch = str_message[j];
    if(ch >= 'a' && ch <= 'z'){
      ch = ch + key;
      if(ch > 'z'){
        ch = ch - 'z' + 'a' - 1;
      }
      str_message[j] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
      ch = ch + key;
      if(ch > 'Z'){
        ch = ch - 'Z' + 'A' - 1;
      }
      str_message[j] = ch;
    }
  }
  printf("Encrypted message: %s\n", str_message);
}
void decrypt(){
  char str_message[500], ch;
  int j, key;
  printf("Enter a message to decrypt: ");
  scanf("%s",str_message);
  printf("Enter key: ");
  scanf("%d", &key);
  for(j = 0; str_message[j] != '\0'; ++j){
    ch = str_message[j];
    if(ch >= 'a' && ch <= 'z'){
      ch = ch - key;
      if(ch < 'a'){
        ch = ch + 'z' - 'a' + 1;
      }
      str_message[j] = ch;
    }
    else if(ch >= 'A' && ch <= 'Z'){
      ch = ch - key;
      if(ch < 'A'){
        ch = ch + 'Z' - 'A' + 1;
      }
      str_message[j] = ch;
    }
  }
  printf("Decrypted message: %s\n", str_message);
}

int main(){
int i;
printf("+------------------------+\n");
printf("|  1. Encrypt            |\n");
printf("|  2. Decryption         |\n");
printf("|  3. Exit               |\n");
printf("+------------------------+\n");
printf("> ");
scanf("%i",&i);
switch(i){
case 1:
encrypt();
break;
case 2:
decrypt();
break;
}
}
