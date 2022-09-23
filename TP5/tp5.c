#include "mem_targa.h"
#include <stdio.h>
#include <errno.h>


int main(){
    return 0;
}

int readImage(image_desc *pDesc, targa_header *pHeader, char *fName){
    
    FILE *file=fopen(fName,"rb");
    if (file==NULL){
        fprintf(stderr,"error opening file : %s\n",strerror(errno));
        exit(-1);
    }
    

    pDesc->fname=fName;
    pDesc->height=pHeader->height;
    pDesc->width=pHeader->width;
};