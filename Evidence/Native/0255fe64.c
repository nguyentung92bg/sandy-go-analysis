/* IL2CPP: Dino.GameCommon.CurrencyChangedEvent$$.ctor
void Dino_GameCommon_CurrencyChangedEvent___ctor (Dino_GameCommon_CurrencyChangedEvent_o __this, int32_t previous, int32_t current, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.GameCommon.CurrencyChangedEvent$$.ctor
   void Dino_GameCommon_CurrencyChangedEvent___ctor (Dino_GameCommon_CurrencyChangedEvent_o __this,
   int32_t previous, int32_t current, System_String_o* placement, const MethodInfo* method); */

void Dino_GameCommon_CurrencyChangedEvent___ctor_245fe64
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  puVar1 = (undefined8 *)(param_1 + 2);
  *puVar1 = param_4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

