#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define wordlist = [ "the", "of", "to", "and", "in", "said", "for", "that", "was", "on",
            "he", "is", "with", "at", "by", "it", "from", "as", "be", "were",
            "an", "have", "his", "but", "has", "are", "not", "who", "they", "its",
            "had", "will", "would", "about", "been", "this", "their", "new", "or", "which",
            "we", "more", "after", "us", "percent", "up", "one", "people" ]
struct engram
{
	char word[20];
	int frequency;	
};
//struct engram wordlist[3000];
//struct engram wordlist = calloc(5000,sizeof(engram));
void lowercase(char * word){
	for(int i = 0; str[i]; i++){
  		str[i] = tolower(str[i]);
	}
}

struct engram word_frequency(char * filename){
	file fd = fopen(filename,'r');

}

int main(int argc, char const *argv[])
{
	int document = argc-2;

	return 0;
}