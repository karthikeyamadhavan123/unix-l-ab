dd if=/dev/sda of=/dev/sdb
dd if=/dev/sda of=/dev/sdb conv=noerror, sync
dd =f=/dev/hda1 of=~/partition.img
dd if=/dev/hda of=~/hdadisk.img
dd if=hdadisk.img of=/dev/hdb
dd if=/dev/cdrom of=tgsservice.iso bs=2048
