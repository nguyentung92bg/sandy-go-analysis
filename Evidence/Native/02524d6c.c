/* IL2CPP: Dino.BusSand.Core.StageEngine$$WillCollectSoon
bool Dino_BusSand_Core_StageEngine__WillCollectSoon (Dino_BusSand_Core_StageEngine_o* __this, int32_t truckId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$WillCollectSoon
   bool Dino_BusSand_Core_StageEngine__WillCollectSoon (Dino_BusSand_Core_StageEngine_o* __this,
   int32_t truckId, const MethodInfo* method); */

uint Dino_BusSand_Core_StageEngine__WillCollectSoon_2424d6c(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uStack_28;
  
  if ((bRam0000000004f9cb9f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9d8);
    bRam0000000004f9cb9f = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar2 = System_Collections_Generic_Dictionary_int__TruckPayload___TryGetValue_3446abc
                      (*(long *)(param_1 + 0x50),param_2,&uStack_28,*(undefined8 *)PTR_DAT_04cab9d8)
    ;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_02524dfc;
      uVar1 = Dino_BusSand_Core_Road__AnyColorInBottomBand_2416850
                        (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),uStack_28 & 0xff,
                         0);
    }
    return uVar1 & 1;
  }
LAB_02524dfc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

