START esptool.exe --chip esp32 --port COM3 --baud 921600 --before default_reset --after hard_reset write_flash -z --flash_mode dio --flash_freq 40m --flash_size detect 0xe000 boot_app0.bin 0x1000 bootloader_dio_40m.bin 0x10000 firmware.bin 0x8000 partitions.bin 

PAUSE