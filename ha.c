#include <sys/sdt.h>
#include <unistd.h>

int main(){
    DTRACE_PROBE("ha", "probe-main");
    sleep(1000000);
}
