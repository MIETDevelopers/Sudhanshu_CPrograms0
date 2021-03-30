// PROGRAM TO READ .csv FILES.
// Written by -- SUDHANSHU BHAGAT
//30-03-2021

#include <stdio.h> //Pre-Process Directive to Include standard input output header files.
#include <stdlib.h>//Pre-Process Directive to Include standard library header files.
#include <string.h>//re-Process Directive to Include string header files. 

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ";");
            tok && *tok;
            tok = strtok(NULL, ";\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}
int main() //Main function body starting
{	
	//Path of the .csv file.
    FILE* stream = fopen("C:\\Users\hp\\Desktop\\C_programs\\Sudhanshu_CPrograms0\\35_ReadCSV.csv", "r"); 

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        printf("Field 3 would be %s\n", getfield(tmp, 3));
        free(tmp);
    }
} // Main function body ends