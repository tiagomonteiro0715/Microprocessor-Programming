/* This program search words in the character array*/

#include<stdio.h>
#include<string.h>//header file for strlen()
int main()
{
	char sentence[30], wordInput[10], copySentence[10];//variables
	int i,k=0,flag=-1;

	printf("Enter a sentence:\n");
	scanf("%[^\n]",&sentence);//input sentence

	printf("Enter the word to search in array:\n");
	scanf("%s",&wordInput);//input word to search


	while(sentence[i]!='\0')
	{
		//loop for checking blank space/null character
		while(i<strlen(sentence)){
			if(sentence[i]==' '||sentence[i]=='.'||sentence[i]=='\0')
				break;
			copySentence[k++]=sentence[i++];//copying elements to third array
		}
		copySentence[k]='\0';//assigning null character to third array
		k=0;

		//comparing each word of sentence with word to search
		if(strcmp(wordInput,copySentence)==0)
			flag=1;//if word matched,assigning true value to flag
		i++;
	}
	//displaying result
	if(flag==1)
		printf("word is present in the array.\n");
	else
		printf("word is not present in the array.\n");

	return 0;
}
