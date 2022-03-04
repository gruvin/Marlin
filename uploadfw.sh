#!/bin/bash
ssh hypercube '~/bin/mountskr.sh' && \
    echo "Copying firmware file ... " && \
    scp .pio/build/LPC1768/firmware.bin hypercube:/skr/firmware.bin && \
    echo "Done." && \
    echo -n "Waiting for disk write to complete ... " && \
    echo "Done." && \
    ssh hypercube 'sync -f /skr' && \
    echo -n "Rebooting printer ... " && \
    ssh hypercube 'gpio write 8 1 ; sleep 3 ; gpio write 8 0' && \
    echo "Done."
