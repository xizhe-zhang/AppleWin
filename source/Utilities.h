#pragma once

#include "Disk.h"
#include "Harddisk.h"


void LoadConfiguration();
void InsertFloppyDisks(const UINT slot, LPCSTR szImageName_drive[NUM_DRIVES], bool driveConnected[NUM_DRIVES], bool& bBoot);
void InsertHardDisks(LPCSTR szImageName_harddisk[NUM_HARDDISKS], bool& bBoot);
void UnplugHardDiskControllerCard(void);
void GetAppleWindowTitle();

void CtrlReset();
void ResetMachineState();
