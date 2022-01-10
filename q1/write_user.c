#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/ioctl.h>


#define WR_DATA _IOW('a','a',int32_t*)
#define WR_DATA1 _IOW('a','1',char*)

int main()
{
        int fd;
        int32_t num;
	char ch;
        printf("ioctl based character driver\n");
        fd=open("/dev/chr_device",O_RDWR);
        if(fd < 0)
        {
                printf("cannot open the device file\n");
                return 0;
        }
        printf("enter the data to send...\n");
        scanf("%d",&num);
	printf("Enter the string ..\n");
	scanf("%c",&ch);
	printf("writing value to the driver..\n");
        ioctl(fd,WR_DATA,(int32_t)&num);
	ioctl(fd,WR_DATA1,(char)ch);
        printf("closing the driver\n");
        close(fd);
}
