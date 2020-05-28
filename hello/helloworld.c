//C:\\Users\\ÂÞÑ×Ò¢\\Desktop\\hello\\test.txt
#include <stdio.h>
void main()
{
    FILE *fp;
	char ch;
    fp=fopen("C:\\Users\\ÂÞÑ×Ò¢\\Desktop\\hello\\test.txt","r");
    
    while((ch=fgetc(fp))!=EOF)    
            putchar(ch);          
    fclose(fp);            
}
