#include "mem_targa.h"
#include <stdio.h>
#include <errno.h>


int main(){
    return 0;
}

int readImage(image_desc *pDesc, targa_header *pHeader, char *fName){
    char * monImage;
    int i;

    FILE *inputFile=fopen(fName,"rb");
    if (inputFile==NULL){
        fprintf(stderr,"error opening file : %s\n",strerror(errno));
        exit(-1);
    }
    fread(pHeader,sizeof(pHeader),1,inputFile);
    pDesc->fname=fName;
    pDesc->height=pHeader->height;
    pDesc->width=pHeader->width;

    // char img [(pDesc->height)*(pDesc->width)*3]; // C'est possible mais besoin des infos de taille. 
    // Mieux de def les vars en début de fct.
    fread(monImage,sizeof(char),3*pDesc->height*pDesc->width,inputFile);
    fclose(fName);

    for (i=0;i<(pDesc->height)*(pDesc->width);i++){
        (pDesc->pRed)[i]=monImage[3*i];
        (pDesc->pGreen)[i]=monImage[3*i+1];
        (pDesc->pBlue)[i]=monImage[3*i+2];
    };
    return 0;
};