#include "pow_fpga_LampaLab.h"

int main(int argc, char* argv[]) 
{
    
    uint8_t mwm = 0;
    char* itrytes = NULL;

    if (argc == 3) {
        mwm = atoi(argv[1]);
        itrytes = argv[2];
    } else {
        //fprintf(stderr, HINTS, TRANSACTION_LEN);
        return 1;
    }

    pow_fpga_LampaLab_init();

    PowFPGALampaLab(itrytes, mwm, 0);

    pow_fpga_LampaLab_destroy();
    
    return 1;
   
}

