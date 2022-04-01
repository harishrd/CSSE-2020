#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int main(int argc,char **argv) //argc = arguments count, argv = arg. vector
{
   int result;

   char *filename=(char *)malloc(512);

   if(argc<2)
   {
      strcpy(filename,"/usr/bin/adb");
   }
   else
   {
      strcpy(filename,argv[1]);
   }

   result=access(filename,R_OK); //read
   if(result==0)
   {
      printf("%s is readable\n",filename);
   }
   else
   {
      printf("%s is not readable\n",filename);
   }

   result=access(filename,W_OK); //write
   if(result==0)
   {
      printf("%s is writable\n",filename);
   }
   else
   {
      printf("%s is not writable\n",filename);
   }

   result=access(filename,X_OK); //execute
   if(result==0)
   {
      printf("%s is executable\n",filename);
   }
   else
   {
      printf("%s is not executable\n",filename);
   }

   free(filename);

   return 0;
}

/* Output:

/usr/bin/adb is not readable
/usr/bin/adb is not writable
/usr/bin/adb is not executable

*/
