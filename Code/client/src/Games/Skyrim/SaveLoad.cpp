#if defined(TP_SKYRIM)

#include <Games/Skyrim/SaveLoad.h>

void BGSSaveLoadManager::Save(SaveData* apData)
{
    apData->flags |= 4;

    const char* cSaveName = "";
    if (apData->saveName)
        cSaveName = apData->saveName;


}

#endif
