/* IL2CPP: Dino.BusSand.Core.Road$$CreateBus
Dino_BusSand_Core_RoadBus_o* Dino_BusSand_Core_Road__CreateBus (Dino_BusSand_Core_Road_o* __this, int32_t truckId, uint8_t color, int32_t kind, int32_t capacityGrains, int32_t chain, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$CreateBus
   Dino_BusSand_Core_RoadBus_o* Dino_BusSand_Core_Road__CreateBus (Dino_BusSand_Core_Road_o* __this,
   int32_t truckId, uint8_t color, int32_t kind, int32_t capacityGrains, int32_t chain, const
   MethodInfo* method); */

long Dino_BusSand_Core_Road__CreateBus_24129e8
               (long param_1,undefined4 param_2,undefined1 param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = PTR_DAT_04cbe610;
  if ((bRam0000000004f9cb5c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe610);
    bRam0000000004f9cb5c = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  *(undefined4 *)(lVar5 + 0x60) = 0xffffffff;
  System_Object___ctor_4870e5c(lVar5,0);
  lVar6 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar5 + 0x10) = param_2;
  *(undefined1 *)(lVar5 + 0x14) = param_3;
  *(int *)(lVar5 + 0x18) = param_4;
  *(undefined4 *)(lVar5 + 0x20) = param_5;
  *(undefined4 *)(lVar5 + 0x5c) = param_6;
  if (lVar6 != 0) {
    iVar1 = 0x187b8;
    if (param_4 != 1) {
      iVar1 = 0x1f18e;
    }
    iVar2 = 0x13338;
    if (param_4 != 0) {
      iVar2 = iVar1;
    }
    auVar3 = SEXT816((long)iVar2 * (long)*(int *)(lVar6 + 0x10) + 0x3a92) *
             SEXT816(0x45eedbb3a5b7215d);
    *(int *)(lVar5 + 0x1c) = (int)(auVar3._8_8_ >> 0xd) - (auVar3._12_4_ >> 0x1f);
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

