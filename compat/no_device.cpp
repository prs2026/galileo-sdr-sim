/* Windows file-sink build: no USRP, no RINEX auto-download (gps_rf.py supplies
   the navigation file). */
#include "../include/galileo-sdr.h"
#include "../include/downloader.h"

void init_usrp(usrp_conf_t, sim_t *)
{
    fprintf(stderr, "ERROR: this build has no USRP support; use -U 1 -o <file>\n");
    exit(1);
}

int download_latest_galileo_nav(char *, int)
{
    fprintf(stderr, "ERROR: this build cannot download; pass -e <RINEX 3 nav file>\n");
    return 1;
}
