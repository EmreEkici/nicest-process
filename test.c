#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main(){
  int pid, nice_inc;
  scanf("%d %d", pid, nice_inc);

  int ret_val = syscall(355, &pid, &nice_inc);

  if (ret_val == 0)
    printf("Successful.\n");
  else
    printf("%s", strerror(-ret_val));

    return 0;
}
