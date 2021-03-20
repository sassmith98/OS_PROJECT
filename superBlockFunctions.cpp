//
// Created by csis on 3/20/21.
//

#include "superBlockFunctions.h"

using namespace std;

int writeSuperBlock(vdiFile* f, BootSector boot, unsigned int vdiMap[], ext2_super_block & superBlock){
    unsigned int superBlockLocation = computeLocation(1024, f, boot, vdiMap);
    if (lseek(f -> file, superBlockLocation, SEEK_SET) < 0){
        cout << "Cannot seek to the superblock" << endl;
        return 1;
    }
    if (write(f -> file, & superBlock, sizeof(superBlock)) != 1024){
        cout << "Superblock was not written properly" << endl;
        return 1;
    }
    return 0;
}