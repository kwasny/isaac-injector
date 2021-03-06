#pragma once
#include "stdafx.h" 

FuncSignature Signature_TakePillEvent = {
	"\x83\xfe\x1b\x0f\x87\x00\x00\x00\x00\xff\x24\xb5\x00\x00\x00\x00\xd9\x05"
	"\x00\x00\x00\x00\x51\x8d\x87\x14\x04\x00\x00\xd9\x1c\x24\x50\x8b\xcf\xe8"
	"\x00\x00\x00\x00\x8b\x8d\x68\xfe\xff\xff\x68\x00\x00\x00\x00\x51\x8b\xcf"
	"\xe8\x00\x00\x00\x00\xe9\x00\x00\x00\x00",
	// mask
	"xxxxx????xxx????xx????xxxxxxxxxxxxxx????xxxxxxx????xxxx????x????",
	// size
	strlen(Signature_TakePillEvent.mask)
	//64
};

FuncSignature Signature_HpUpEvent = {
	"\x55\x8b\xec\x83\xec\x0c\x57\x8b\xf8\x8b\x87\x98\x0b\x00\x00\x83\xf8\x0a\x0f\x84"
	"\x00\x00\x00\x00\x83\xf8\x04\x75\x00\x8b\xc7\xe8\x00\x00\x00\x00\x5f\x8b\xe5\x5d"
	"\xc3\x83\x7f\x10\x01\xba\x00\x00\x00\x00\x89\x55\xfc\x75\x00\xba\x00\x00\x00\x00"
	"\x89\x55\xfc\x8b\x87\x50\x0b\x00\x00",
	// mask
	"xxxxxxxxxxxxxxxxxxxx????xxxx?xxx????xxxxxxxxxx????xxxx?x????xxxxxxxxx",
	// size
	strlen(Signature_HpUpEvent.mask)
	//69
};

FuncSignature Signature_AddSoulHeartsEvent = {
	"\x55\x8b\xec\x83\xec\x08\x57\x8b\xf8\x83\xbf\x98\x0b\x00\x00\x0a\x75\x00\x85\xc9"
	"\x7e\x00\xc7\x87\x5c\x0b\x00\x00\x01\x00\x00\x00\x5f\x8b\xe5\x5d\xc3",
	// mask
	"xxxxxxxxxxxxxxxxx?xxx?xxxxxxxxxxxxxxx",
	// size
	strlen(Signature_AddSoulHeartsEvent.mask)
	//37
};

FuncSignature Signature_SpawnEntityEvent = {
	"\x55\x8b\xec\x51\x8b\x4d\x08\x8b\x89\x04\xd8\x10\x00\x56\x57\x8b\xf8\x8b\x45\x0c",
	// mask
	"xxxxxxxxx????xxxxxxx",
	// size
	strlen(Signature_SpawnEntityEvent.mask)
	//61
};

FuncSignature Signature_AddCollectibleEvent = {
	"\x55\x8B\xEC\x83\xE4\xF8\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50"
	"\x83\xEC\x78\xA1\x00\x00\x00\x00\x33\xC4\x89\x44\x24\x70\x53\x56\x57\xA1\x00\x00"
	"\x00\x00\x33\xC4\x50\x8D\x84\x24\x88\x00\x00\x00\x64\xA3\x00\x00\x00\x00\x8B\x75"
	"\x08\x8B\xD9\x89\x5C\x24\x1C\x89\x74\x24\x24\x81\xFE",
	// mask
	"xxxxxxxxx????xx????xxxxx????xxxxxxxxxx????xxxxxxxxxx????xxxxxxxxxxxx",
	// size
	strlen(Signature_AddCollectibleEvent.mask)
	//68
};

FuncSignature Signature_PlayerTeleportEvent = {
	"\x53\xc7\x46\x04\x00\x00\x00\x00\x89\x46\x18\x89\x7e\x10\x89\x4e\x14\xc6\x86\xdc"
	"\x03\x00\x00\x00\x83\xf8\x03",
	// mask
	"xxxxxxxxxxxxxxxxxxx????xxxx",
	// size
	strlen(Signature_PlayerTeleportEvent.mask)
};

FuncSignature Signature_ShootTearsEvent = {
	"\x55\x8b\xec\x6a\xff\x68\x00\x00\x00\x00\x64\xa1\x00\x00\x00\x00\x50\x83\xec\x40\x53\x56"
	"\x57\xa1\x00\x00\x00\x00\x33\xc5\x50\x8d\x45\xf4\x64\xa3\x00\x00\x00\x00\x8b\xf1\x8b\xda"
	"\x33\xff\x89\x7d\xb4\x89\x7d\xb8\x89\x7d\xbc\x8b\x45\x0c\x89\x7d\xfc",
	// mask
	"xxxxxx????xx????xxxxxxxx????xxxxxxxx????xxxxxxxxxxxxxxxxxxxxx",
	// size
	strlen(Signature_ShootTearsEvent.mask)
};

// Player Manager

FuncSignature Signature_PlayerManager = {
	"\x8b\x0d\x00\x00\x00\x00\x8b\x81\x30\x8a\x00\x00\x2b\x81\x2c\x8a\x00\x00\xc1\xf8\x02\xc3",
	// mask
	"xx????xx????xx????xxxx",
	// size
	strlen(Signature_PlayerManager.mask)
};

// Functions

FuncSignature Signature_IsaacRandomFunc = {
	"\xa1\x00\x00\x00\x00\x3d\x00\x00\x00\x00\x0f\x8c\x00\x00\x00\x00\x3d\x00\x00\x00\x00\x75"
	"\x00\xb8\x00\x00\x00\x00\xe8\x00\x00\x00\x00\x33\xc9\xeb\x00\x8d\xa4\x24\x00\x00\x00\x00"
	"\x8d\x64\x24\x00\x8b\x04\x8d\x00\x00\x00\x00\x33\x04\x8d\x00\x00\x00\x00\x41\x25\x00\x00"
	"\x00\x00\x33\x04\x8d\x00\x00\x00\x00\x8b\xd0\xd1\xe8\x83\xe2\x01\x33\x04\x95\x00\x00\x00"
	"\x00\x33\x04\x8d\x00\x00\x00\x00\x89\x04\x8d\x00\x00\x00\x00\x81\xf9\x00\x00\x00\x00\x7c"
	"\x00\x81\xf9\x00\x00\x00\x00\x7d\x00\x8d\x0c\x8d\x00\x00\x00\x00\x8b\xff",
	// mask
	"x????x????xx????x????x?x????x????xxx?xxxxxxxxxxxxxx????xxx????xx????xxx????xxxxxxxxxx???"
	"?xxx????xxx????xx????x?xx????x?xxx????xx",
	// size
	strlen(Signature_IsaacRandomFunc.mask)
};

FuncSignature Signature_GoodPillEffectFunc = {
	"\xA1\x00\x00\x00\x00\x56\xBE\x0C\x01\x00\x00\x85\xC0\x74\x00\x83\xB8\x00\x00\x00\x00\x07\x75\x00\xBE\x25\x00\x00\x00",
	// mask
	"x????xxxxxxxxx?xx????xx?xxxxx",
	// size            ??
	strlen(Signature_GoodPillEffectFunc.mask)
};

FuncSignature Signature_BadPillEffectFunc = {
	"\xA1\x00\x00\x00\x00\x56\xBE\x0B\x01\x00\x00\x85\xC0\x74\x00\x83\xB8\x00\x00\x00\x00\x07\x75\x00\xBE\x25\x00\x00\x00",
	// mask
	"x????xxxxxxxxx?xx????xx?xxxxx",
	// size            ??
	strlen(Signature_BadPillEffectFunc.mask)
};

FuncSignature Signature_InitTearFunc = {
	"\x55\x8b\xec\x51\xd9\xee\xc6\x06\x01\xd9\x56\x04\xd9\x56\x08\xd9\x56\x0c\xd9\xe8\xd9\x56"
	"\x10\xd9\x56\x14\xe8\x00\x00\x00\x00\x89\x45\xfc\xdb\x45\xfc\x85\xc0\x79\x00\xd8\x05\x00"
	"\x00\x00\x00",
	// mask
	"xxxxxxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxx?xx????",
	// size
	strlen(Signature_InitTearFunc.mask)
};

FuncSignature Signature_ChangeRoomEvent = {
	"\x55\x8b\xec\x6a\xff\x68\x00\x00\x00\x00\x64\xa1\x00\x00\x00\x00\x50\x83\xec\x44\x53\x56"
	"\x57\xa1\x00\x00\x00\x00\x33\xc5\x50\x8d\x45\xf4\x64\xa3\x00\x00\x00\x00\x8b\x7d\x08\x8b"
	"\x87\x98\x5d\x00\x00\x50\xe8\x00\x00\x00\x00\xa1\x00\x00\x00\x00\x80\x78\x0c\x00\x8d\x58"
	"\x0c\x74\x00\xc6\x03\x00\x8b\xf0",
	// mask
	"xxxxxx????xx????xxxxxxxx????xxxxxxxx????xxxxx????xx????x????xxxxxxxx?xxxxx",
	// size
	strlen(Signature_ChangeRoomEvent.mask)
};

FuncSignature Signature_VFSLoadFile = {
	"\x55\x8b\xec\x6a\xff\x68\x00\x00\x00\x00\x64\xa1\x00\x00\x00\x00\x50\x56\x57\xa1\x00\x00"
	"\x00\x00\x33\xc5\x50\x8d\x45\xf4\x64\xa3\x00\x00\x00\x00\x6a\x24",
	// mask
	"xxxxxx????xx????xxxx????xxxxxxxx????xx",
	// size
	strlen(Signature_VFSLoadFile.mask)
};

FuncSignature Signature_GameUpdate = {
	"\x55\x8b\xec\x51\x53\x56\x8b\x35\x00\x00\x00\x00\x57",
	// mask
	"xxxxxxxx????x",
	// size
	strlen(Signature_GameUpdate.mask)
};

FuncSignature Signature_PlayerUpdate = {
	"\x55\x8b\xec\x83\xe4\xf8\x6a\xff\x68\x00\x00\x00\x00\x64\xa1\x00\x00\x00\x00\x50\x81\xec"
	"\x00\x00\x00\x00\xa1\x00\x00\x00\x00\x33\xc4\x89\x84\x24\x48\x01\x00\x00\x53\x56\x57\xa1"
	"\x00\x00\x00\x00\x33\xc4\x50",
	// mask
	"xxxxxxxxx????xx????xxx????x????xxxxxxxxxxxxx????xxx",
	// size
	strlen(Signature_PlayerUpdate.mask)
};

/* Start of function
FuncSignature Signature_UseCardEvent = {
	"\x55\x8b\xec\x6a\xff\x68\x00\x00\x00\x00\x64\xa1\x00\x00\x00\x00\x50\x81\xec\x00\x00\x00"
	"\x00\x53\x56\x57\xa1\x00\x00\x00\x00\x33\xc5\x50\x8d\x45\xf4\x64\xa3\x00\x00\x00\x00\x8b"
	"\xf1\x8b\x5d\x08\x83\xfe\x24\x74\x00\x68\x00\x00\x00\x00\x56\x8b\xcb\xe8\x00\x00\x00\x00"
	"\x8b\xc6\x03\xc0\x8d\xbc\xc3\x04\x2d\x00\x00\x8d\x46\xff\x83\xf8\x27\x0f\x87\x00\x00\x00"
	"\x00\xff\x24\x85\x00\x00\x00\x00\x8b\x83\x70\x0b\x00\x00\x85\xc0\x75\x00\xb8\x00\x00\x00",
	// mask
	"xxxxxx????xx????xxx????xxxx????xxxxxxxx????xxxxxxxxx?x????xxxx????xxxxxxxxxxxxxxxxxxx????xxx????xxxxxxxxx?x???",
	// size
	strlen(Signature_UseCardEvent.mask)
};*/

// Before switch()
FuncSignature Signature_UseCardEvent = {
	"\x83\xfb\x24\x74\x00\x68\x00\x00\x00\x00\x53\x8b\xcf\xe8\x00\x00\x00\x00",
	// mask
	"xxxx?x????xxxx????",
	// size
	strlen(Signature_UseCardEvent.mask)
};

FuncSignature Signature_GotoFloorEvent = {
	"\x51\x56\x57\x8b\x3d\x00\x00\x00\x00\x50\x51\x8d\xb7\xd8\x89\x00\x00\xe8\x00\x00\x00\x00"
	"\x8b\x97\x30\x8a\x00\x00\x2b\x97\x2c\x8a\x00\x00\x33\xf6\xc1\xfa\x02\x85\xd2",
	// mask
	"xxxxx????xxxx????x????xx????xx????xxxxxxx",
	// size
	strlen(Signature_GotoFloorEvent.mask)
};

FuncSignature Signature_AddBlackHeartsEvent = {
	"\x55\x8b\xec\x51\x83\xbb\x98\x0b\x00\x00\x0a\x56\x57\x0f\x84\x00\x00\x00\x00\x8b\xb3\x5c"
	"\x0b\x00\x00\x8b\xd6\x81\xe2\x00\x00\x00\x00\x79\x00\x4a\x83\xca\xfe\x42\x74\x00\x46",
	// mask
	"xxxxxxxxxxxxxxx????xxxxxxxxxx????x?xxxxxx?x",
	// size
	strlen(Signature_AddBlackHeartsEvent.mask)
};

FuncSignature Signature_FreezeEntity = {
	"\x55\x8b\xec\x83\xec\x38\xa1\x00\x00\x00\x00\x33\xc5\x89\x45\xfc\x57\x8b\xf9\x8b\x47\x0c"
	"\x83\xc0\xed\x3d\x00\x00\x00\x00\x77\x00\x0f\xb6\x80\xc0\x52\x44\x00\xff\x24\x85\x00\x00"
	"\x00\x00\x8b\x87\x64\x04\x00\x00\x85\xc0\x74\x00\xeb\x00\x8d\x9b\x00\x00\x00\x00\x8b\xc8"
	"\x8b\x81\x64\x04\x00\x00\x85\xc0\x75\x00\x8b\xf9\x85\xd2\x0f\x84\x00\x00\x00\x00\xf6\x87"
	"\x08\x03\x00\x00\x01\x0f\x85\x00\x00\x00\x00\x83\xbf\xf4\x03\x00\x00\x00\x0f\x8f\x00\x00"
	"\x00\x00\x8d\x87\xd4\x03\x00\x00\x85\xd2\x7e\x00\x8b\x08\x03\xca\x89\x4d\xc8\x83\xf9\x78"
	"\xc7\x45\xcc\x78\x00\x00\x00\x8d\x4d\xc8\x7c\x00\x8d\x4d\xcc",
	// mask
	"xxxxxxx????xxxxxxxxxxxxxxx????x?xxx????xxx????xxxxxxxxx?x?xxxxxxxxxxxxxxxxx?xxxxxx????xxxxxxxxx????xxxxxxxxx????xxxxxxxxx?xxxxxxxxxxxxxxxxxxxxx?xxx",
	// size
	strlen(Signature_FreezeEntity.mask)
};

FuncSignature Signature_FearEntity = {
	"\x55\x8b\xec\x83\xec\x38\xa1\x00\x00\x00\x00\x33\xc5\x89\x45\xfc\x57\x8b\xf9\x8b\x47\x0c"
	"\x83\xc0\xed\x3d\x00\x00\x00\x00\x77\x00\x0f\xb6\x80\x28\x60\x44\x00\xff\x24\x85\x00\x00"
	"\x00\x00\x8b\x87\x64\x04\x00\x00\x85\xc0\x74\x00\xeb\x00\x8d\x9b\x00\x00\x00\x00\x8b\xc8"
	"\x8b\x81\x64\x04\x00\x00\x85\xc0\x75\x00\x8b\xf9\x85\xd2\x0f\x84\x00\x00\x00\x00\xf6\x87"
	"\x08\x03\x00\x00\x01\x0f\x85\x00\x00\x00\x00\x83\xbf\xf4\x03\x00\x00\x00\x0f\x8f\x00\x00"
	"\x00\x00\x56\x8d\xb7\xec\x03\x00\x00\x85\xd2\x7e\x00\x8b\x06\x03\xc2\x89\x45\xc8\x83\xf8"
	"\x78\xc7\x45\xcc\x78\x00\x00\x00\x8d\x45\xc8\x7c\x00\x8d\x45\xcc",
	// mask
	"xxxxxxx????xxxxxxxxxxxxxxx????x?xxx????xxx????xxxxxxxxx?x?xxxxxxxxxxxxxxxxx?xxxxxx????xxxxxxxxx????xxxxxxxxx????xxxxxxxxxx?xxxxxxxxxxxxxxxxxxxxx?xxx",
	// size
	strlen(Signature_FearEntity.mask)
};

FuncSignature Signature_ConfuseEntity = {
	"\x55\x8b\xec\x83\xec\x38\xa1\x00\x00\x00\x00\x33\xc5\x89\x45\xfc\x57\x8b\xf9\x8b\x47\x0c"
	"\x83\xc0\xed\x3d\x00\x00\x00\x00\x77\x00\x0f\xb6\x80\xd0\x5b\x44\x00\xff\x24\x85\x00\x00"
	"\x00\x00\x8b\x87\x64\x04\x00\x00\x85\xc0\x74\x00\xeb\x00\x8d\x9b\x00\x00\x00\x00\x8b\xc8"
	"\x8b\x81\x64\x04\x00\x00\x85\xc0\x75\x00\x8b\xf9\x85\xd2\x0f\x8e\x00\x00\x00\x00\xf6\x87"
	"\x08\x03\x00\x00\x01\x0f\x85\x00\x00\x00\x00\x83\xbf\xf4\x03\x00\x00\x00\x0f\x8f\x00\x00"
	"\x00\x00\x8b\x87\xe4\x03\x00\x00\x03\xc2\x89\x45\xc8\x83\xf8\x78\xc7\x45\xcc\x78\x00\x00"
	"\x00\x8d\x45\xc8\x7c\x00\x8d\x45\xcc",
	// mask
	"xxxxxxx????xxxxxxxxxxxxxxx????x?xxx????xxx????xxxxxxxxx?x?xxxxxxxxxxxxxxxxx?xxxxxx????xxxxxxxxx????xxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxx?xxx",
	// size
	strlen(Signature_ConfuseEntity.mask)
};

FuncSignature Signature_CharmEntity = {
	"\x55\x8b\xec\x83\xec\x38\xa1\x00\x00\x00\x00\x33\xc5\x89\x45\xfc\x57\x8b\xf9\x8b\x47\x0c"
	"\x83\xc0\xed\x3d\x00\x00\x00\x00\x77\x00\x0f\xb6\x80\x6c\x59\x44\x00\xff\x24\x85\x00\x00"
	"\x00\x00\x8b\x87\x64\x04\x00\x00\x85\xc0\x74\x00\xeb\x00\x8d\x9b\x00\x00\x00\x00\x8b\xc8"
	"\x8b\x81\x64\x04\x00\x00\x85\xc0\x75\x00\x8b\xf9\xf6\x87\x08\x03\x00\x00\x01\x0f\x85\x00"
	"\x00\x00\x00\x83\xbf\xf4\x03\x00\x00\x00\x0f\x8f\x00\x00\x00\x00\x8b\x87\xe0\x03\x00\x00"
	"\x03\x45\x08\xc7\x45\xcc\x78\x00\x00\x00\x89\x45\xc8\x83\xf8\x78\x8d\x45\xc8\x7c\x00\x8d"
	"\x45\xcc",
	// mask
	"xxxxxxx????xxxxxxxxxxxxxxx????x?xxx????xxx????xxxxxxxxx?x?xxxxxxxxxxxxxxxxx?xxxxxxxxxxx????xxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxx?xxx",
	// size
	strlen(Signature_CharmEntity.mask)
};

FuncSignature Signature_StoreItemStructEvent = {
	"\x89\x3c\x81\xe9\x00\x00\x00\x00\x8b\xc6\x85\xf6\x75\x00\xb8\x00\x00\x00\x00\xb9\x00\x00\x00\x00\x8d\x9b\x00\x00\x00\x00\x8a\x10\x3a\x11\x75\x00\x84\xd2",
	// mask
	"xxxx????xxxxx?x????x????xxxxxxxxxxx?xx",
	// size
	strlen(Signature_StoreItemStructEvent.mask)
};

FuncSignature Signature_CollideWithEntityEvent = {
	"\x55\x8b\xec\x83\xe4\xf8\x6a\xff\x68\x00\x00\x00\x00\x64\xa1\x00\x00\x00\x00\x50\x81\xec\x00\x00\x00\x00\xa1\x00\x00\x00\x00\x33\xc4\x89\x84\x24\x20\x01\x00\x00\x53\x56\x57\xa1\x00\x00\x00\x00\x33\xc4\x50",
	// mask
	"xxxxxxxxx????xx????xxx????x????xxxxxxxxxxxxx????xxx",
	// size
	strlen(Signature_CollideWithEntityEvent.mask)
};

FuncSignature Signature_UpdateRoomFunc = {
	"\x55\x8b\xec\x83\xec\x30\x53\x56\x57\x8b\x7d\x08\x8b\x87\x98\x5d\x00\x00\x8b\x8f\x9c\x5d\x00\x00\x05\x24\x07\x00\x00",
	// mask
	"xxxxxxxxxxxxxx????xx????xxxxx",
	// size
	strlen(Signature_UpdateRoomFunc.mask)
};

FuncSignature Signature_ChangePickupEntityFunc = {
	"\x55\x8b\xec\x6a\xff\x68\x00\x00\x00\x00\x64\xa1\x00\x00\x00\x00\x50\x83\xec\x78\xa1\x00\x00\x00\x00\x33\xc5\x89\x45\xf0\x56\x57\x50",
	// mask
	"xxxxxx????xx????xxxxx????xxxxxxxx",
	// size
	strlen(Signature_ChangePickupEntityFunc.mask)
};

FuncSignature Signature_GiveEternalHeartFunc = {
	"\x55\x8b\xec\x83\xec\x08\x83\xbe\x98\x0b\x00\x00\x0a\x53\x57",
	// mask
	"xxxxxxxx????xxx",
	// size
	strlen(Signature_GiveEternalHeartFunc.mask)
};

FuncSignature Signature_PoisonCloudFunc = {
	"\x55\x8b\xec\x6a\xff\x68\x00\x00\x00\x00\x64\xa1\x00\x00\x00\x00\x50\x83\xec\x34\x53\x56\x57",
	// mask
	"xxxxxx????xx????xxxxxxx",
	// size
	strlen(Signature_PoisonCloudFunc.mask)
};

FuncSignature Signature_IsEnemyFunc = {
	"\x8b\x48\x0c\x83\xf9\x0a\x7c\x00\x81\xf9\x00\x00\x00\x00\x7d\x00\x8b\x88\x28\x03\x00\x00\x83"
	"\xf9\x01\x74\x00\x85\xc9\x74\x00\x80\xb8\x60\x04\x00\x00\x00\x75\x00\x80\xb8\x0f\x03\x00\x00"
	"\x00\x75\x00\x8b\x80\x08\x03\x00\x00\xc1\xe8\x04\xa8\x01",
	// mask
	"xxxxxxx?xx????x?xxxxxxxxxx?xxx?xxxxxxxx?xxxxxxxx?xxxxxxxxxxx",
	// size
	strlen(Signature_IsEnemyFunc.mask)
};

FuncSignature Signature_SpawnBlueFliesFunc = {
	"\x55\x8b\xec\x51\x53\x56\x8b\x75\x08\x01\x8e\x78\x0b\x00\x00\x8b\xd8\x33\xc0\x85\xc9",
	// mask
	"xxxxxxxxxxx????xxxxxx",
	// size
	strlen(Signature_SpawnBlueFliesFunc.mask)
};

FuncSignature Signature_PlayerGetHitEvent = {
	"\x55\x8b\xec\x83\xe4\xf8\x6a\xff\x68\x00\x00\x00\x00\x64\xa1\x00\x00\x00\x00\x50\x83"
	"\xec\x70\xa1\x00\x00\x00\x00\x33\xc4\x89\x44\x24\x68\x53\x56\x57\xa1\x00\x00\x00\x00"
	"\x33\xc4\x50\x8d\x84\x24\x80\x00\x00\x00\x64\xa3\x00\x00\x00\x00\x8b\x45\x10\x8b\xd9",
	// mask
	"xxxxxxxxx????xx????xxxxx????xxxxxxxxxx????xxxxxxxxxxxx????xxxxx",
	// size
	strlen(Signature_PlayerGetHitEvent.mask)
};

FuncSignature Signature_PlayerAddCostume = {
	"\x55\x8b\xec\x6a\xff\x68\x00\x00\x00\x00\x64\xa1\x00\x00\x00\x00\x50\x81\xec\x00\x00"
	"\x00\x00\xa1\x00\x00\x00\x00\x33\xc5\x89\x45\xf0\x53\x56\x57\x50\x8d\x45\xf4\x64\xa3"
	"\x00\x00\x00\x00\x8b\xf9\x83\x7f\x10\x01\x8b\xf2",
	// mask
	"xxxxxx????xx????xxx????x????xxxxxxxxxxxxxx????xxxxxxxx",
	// size
	strlen(Signature_PlayerAddCostume.mask)
};