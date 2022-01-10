#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/ioctl.h>

//#define WR_DATA _IOW('a','a',int32_t*)
#define RD_DATA _IOR('a','b',int32_t*)

int main()
{
        int fd;
        int32_t val,num;
        printf("ioctl based character driver\n");
        fd = open("/dev/chr_device",O_RDONLY);
        if(fd < 0)
        {
                printf("cannot open the device file\n");
                return 0;
     	}
        //ioctl(fd,WR_DATA,(int32_t*)&num);
        printf("reading the value from the driver...\n");
        ioctl(fd,RD_DATA,(int32_t*)&val);
        printf("value is %d\n",val);
        printf("closing the driver\n");
        close(fd);
}
