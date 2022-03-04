#!/bin/bash
echo "Mounting remote MMC card ..." && \
    ssh hypercube '~/bin/mountskr.sh' && \
    echo "Copying firmware file ..." && \
    scp .pio/build/LPC1768/firmware.bin hypercube:/skr/firmware.bin && \
    echo "Waiting for disk write to complete ..." && \
    ssh hypercube 'sync -f /skr' && \
    echo "Rebooting printer ..." && \
    ssh hypercube 'gpio write 8 1 ; sleep 3 ; gpio write 8 0' &&
    echo "Done."
