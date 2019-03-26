# Board Setup step by step

This needs to be improved, some stuff is OS X specific - this is just for my own reference right now, contributions welcome.

1. Copy SAMD/version folder from Arduino15 hardware library
2. Delete unwanted boards from boards.txt and variants
3. Rename lines in boards.txt, change names, change VID and PID - this last bit is not legal for distributed products
4. Change name and version in platform.txt
5. Change PID in USBCore.cpp
6. Rename variants directory
7. Rename top directory and compress
8. Remove the '__MACOSX/' directory with 
'''
zip -d your-archive.zip “__MACOSX*”
'''
9. Get sha256 checksum with 
'''
shasum -a 256 file.zip
'''
10. edit json with checksum and zip file size  