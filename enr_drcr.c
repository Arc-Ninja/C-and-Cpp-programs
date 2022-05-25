//linked liblary
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//functions
//get text from terminal
int get(char n);
//ceaser chiper encryption
int ceaser_encr();
//cearser chiper decryption
int ceaser_dcr();
//hexa encryption
int hex_encrypt();
//hexa decryption
int hex_decrypt();
//main program
int main()
{
  //program begins
  int i;//this for taking option
  while(1)//a continous loop
  {
    //sum for verfing that all process go well
    int sum=0;
    //differnt options
    printf("\n1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("3. quit\n");
    printf("chose your option(1/2/3)\n");
    //take option
    scanf("%d%*c",&i);
    //according to option desire function work
    //1 for encryption
    if(i==1)
    {
      //other option to take text through file or terminal
      printf("Enter text/file\n");
      printf("\n1. enter text through terminal\n");
      printf("2. give text through text.txt\n");
      printf("given/previos text.txt file will deleted after process,\nit is recommended to create a copy of the file\n");
      //take option
      scanf("%d%*c",&i);
      //according all the option process will take place
      if(i==1)
      {
        //taking text through terminal
        sum+=get('t');
      }
      //ceaser chiper encryptiontake place
      sum+=ceaser_encr();
      //remove the text.txt file
      remove("text.txt");
      //second encrytion into hexa encryption
      sum+=hex_encrypt();
      //remove encrypt.txt file
      remove("encrypt.txt");
      //rename hexenc.txt into encrypt.txt
      rename("hexenc.txt","encrypt.txt");
      // if all process done successful then sum is 2 or 3
      if(sum>=2)
      {
        printf("encryption successful.....");
      }
      else
      {
        printf("encryption unsuccessful.....");
      }
    }
    //2 for decryption
    else if(i==2)
    {
      printf("\nEnter Password to decrept the text\n");
      char str[100];
      re :
      scanf("%[^\n]%*c",str);
      if(strcmp(str,"Men Of Culture")==0)
      {
        //chose to give encrypted text through file/terminal
        printf("Enter encrypted file/text\n");
        printf("\n1. enter text through terminal\n");
        printf("2. give text through text.txt\n");
        printf("given encrypted.txt file will deleted after process,\nit is recommended to create a copy of the file\n");
        //take option
        scanf("%d%*c",&i);
        if(i==1)
        {
          //it take encrypted text through terminal
          sum+=get('e');
        }
        //decrypt hexa
        sum+=hex_decrypt();
        //decrept ceaser chiper
        sum+=ceaser_dcr();
        //remove hexdec.txt file
        remove("hexdec.txt");
        //checking if all process go well
        if(sum>=2)
        {
          printf("decryption successful.....");
        }
        else
        {
          printf("decryption unsuccessful.....");
        }
      }
      //wrong password
      else
      {
        printf("\nwrong password.....\n");
        printf("1. re-enter password\n");
        printf("2. exit the program\n");
        scanf("%d%*c",&i);
        if(i==1)
        {
          goto re;
        }
        //exit
        else
        {
          printf("EXIT");
          break;
        }
      }
    }
    //3 break the loop and exit the program
    else
    {
      printf("EXIT");
      break;
    }
  }
  return 0;
}
//function define
//get()
int get(char n)
{
  char ch;
  FILE *f;
  if(n=='t')
  {
    f=fopen("text.txt","w");
  }
  else if(n=='e')
  {
    f=fopen("encrypt.txt","w");
  }
  while((ch=getchar())!=EOF)
  {
    putc(ch,f);
  }
  fclose(f);
  return 1;
}
int ceaser_encr()
{
  char ch;
  FILE *f1,*f2;
  f1=fopen("text.txt","r");
  f2=fopen("encrypt.txt","w");
  while((ch=getc(f1))!=EOF)
  {
    ch+=5;
    putc(ch,f2);
  }
  fclose(f1);
  fclose(f2);
  return 1;
}

int ceaser_dcr()
{
  FILE *f1,*f2;
  f1=fopen("hexdec.txt","r");
  f2=fopen("decrypt.txt","w");
  char ch;
  while((ch=getc(f1))!=EOF)
  {
    ch-=5;
    putc(ch,f2);
  }
  fclose(f1);
  fclose(f2);
  return 1;
}

int hex_encrypt()
{
  FILE *f1,*f2;
  char ch,en[2];
  en[2]='\0';
  f1=fopen("encrypt.txt","r");
  f2=fopen("hexenc.txt","w");
  while((ch=getc(f1))!=EOF)
  {
    for(int i=0;i<2;i++)
    {
      switch (ch%16)
      {
        case 0:en[i]='0';
               break;
        case 1:en[i]='1';
               break;
        case 2:en[i]='2';
               break;
        case 3:en[i]='3';
               break;
        case 4:en[i]='4';
               break;
        case 5:en[i]='5';
               break;
        case 6:en[i]='6';
               break;
        case 7:en[i]='7';
               break;
        case 8:en[i]='8';
               break;
        case 9:en[i]='9';
               break;
        case 10:en[i]='A';
               break;
        case 11:en[i]='B';
               break;
        case 12:en[i]='C';
               break;
        case 13:en[i]='D';
               break;
        case 14:en[i]='E';
               break;
        case 15:en[i]='F';
               break;
      }
      ch/=16;
    }
    putc(en[1],f2);
    putc(en[0],f2);
  }
  fclose(f1);
  fclose(f2);
  return 1;
}

int hex_decrypt()
{
  FILE *f1,*f2;
  char ch,dr[2];
  int j=0;
  dr[2]='\0';
  f1=fopen("encrypt.txt","r");
  f2=fopen("hexdec.txt","w");
  while(1)
  {
    if((ch=getc(f1))==EOF)
    {
      break;
    }
    else
    {
      dr[j]=ch;
      j++;
      if(j==2)
      {
        int sum=0;
        for(int j=0,i=1;j<2;j++,i--)
        {
          switch(dr[j])
          {
            case '0': sum+=(0*pow(16,i));
                    break;
            case '1': sum+=(1*pow(16,i));
                    break;
            case '2': sum+=(2*pow(16,i));
                      break;
            case '3': sum+=(3*pow(16,i));
                      break;
            case '4': sum+=(4*pow(16,i));
                      break;
            case '5': sum+=(5*pow(16,i));
                      break;
            case '6': sum+=(6*pow(16,i));
                      break;
            case '7': sum+=(7*pow(16,i));
                      break;
            case '8': sum+=(8*pow(16,i));
                      break;
            case '9': sum+=(9*pow(16,i));
                      break;
            case 'a':
            case 'A': sum+=(10*pow(16,i));
                      break;
            case 'b':
            case 'B': sum+=(11*pow(16,i));
                      break;
            case 'c':
            case 'C': sum+=(12*pow(16,i));
                      break;
            case 'd':
            case 'D': sum+=(13*pow(16,i));
                      break;
            case 'e':
            case 'E': sum+=(14*pow(16,i));
                      break;
            case 'f':
            case 'F': sum+=(15*pow(16,i));
                      break;
          }
        }
        ch=sum;
        putc(ch,f2);
        j=0;
      }
    }
  }
  fclose(f1);
  fclose(f2);
  return 1;
}
