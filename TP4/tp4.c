#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
// #include <circular_buffer.h>




void divideVolumeByTwo(){
    FILE *inputFile=NULL;
    FILE *outputFile=NULL;
    inputFile=fopen("input.f32le","rw");
    if (inputFile==NULL){
        fprintf(stderr,"error input: %s\n",strerror(errno));
        exit(-1);
    }
    outputFile=fopen("output.f32le","w");
    if (outputFile==NULL){
        fprintf(stderr,"error output: %s\n",strerror(errno));
        exit(-1);
    }
    float sample;
    while(fread(&sample,sizeof(float),1,inputFile)>0){
        sample=sample/2;
        fwrite(&sample,sizeof(float),1,outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
}


int main(){
    divideVolumeByTwo();
    return 0;
}