#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE*fp;
    int a[]={0,1,2};
    char b[]="ABC";
    float c[]={1.1,1.2,1.3};

    fp=fopen("a.bin","wb+");
    if(fp==NULL){
        printf("無法打開檔案");
        return 1;
    }

    fwrite(a,sizeof(int),3,fp);
    fwrite(b,sizeof(char),3,fp);
    fwrite(c,sizeof(float),3,fp);

    rewind(fp);

    int ra[3];
    char rb[4]={0};
    float rc[3];

    fread(ra,sizeof(int),3,fp);
    fread(rb,sizeof(char),3,fp);
    fread(rc,sizeof(float),3,fp);

    fclose(fp);

    printf("%d %d %d\n",ra[0],ra[1],ra[2]);
    printf("%s\n",rb);
    printf("%.6f %.6f %.6f\n",rc[0],rc[1],rc[2]);

    return 0;
}
