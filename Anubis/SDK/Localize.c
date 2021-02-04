#include "../Interfaces.h"
#include "Localize.h"

PCWSTR Localize_find(PCSTR tokenName)
{
    return CALL_VIRTUAL_METHOD(PCWSTR(__fastcall*)(PVOID, PVOID, PCSTR), Interfaces()->localize, 12, tokenName);
}
