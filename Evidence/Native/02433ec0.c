/* IL2CPP: Dino.BusSand.App.UI.RewardStagePanel$$Slots
UnityEngine_Vector2_array* Dino_BusSand_App_UI_RewardStagePanel__Slots (int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RewardStagePanel$$Slots
   UnityEngine_Vector2_array* Dino_BusSand_App_UI_RewardStagePanel__Slots (int32_t n, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_RewardStagePanel__Slots_2333ec0(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  if ((bRam0000000004f9c631 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caed88);
    bRam0000000004f9c631 = 1;
  }
  if (param_1 < 3) {
    if (param_1 == 1) {
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,1);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined8 *)(lVar4 + 0x20) = _UNK_00e6a160;
          return;
        }
        goto LAB_02434100;
      }
      goto LAB_02434104;
    }
    if (param_1 == 2) {
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,2);
      if (lVar4 == 0) goto LAB_02434104;
      if ((*(int *)(lVar4 + 0x18) != 0) &&
         (*(undefined8 *)(lVar4 + 0x20) = _UNK_00e6a728, *(int *)(lVar4 + 0x18) != 1)) {
        *(undefined8 *)(lVar4 + 0x28) = _UNK_00e6a450;
        return;
      }
      goto LAB_02434100;
    }
  }
  else {
    if (param_1 == 3) {
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,3);
      if (lVar4 == 0) goto LAB_02434104;
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (((uVar2 != 0) && (*(undefined8 *)(lVar4 + 0x20) = _UNK_00e6a7c0, uVar2 != 1)) &&
         (*(undefined8 *)(lVar4 + 0x28) = _UNK_00e69728, 2 < uVar2)) {
        *(undefined8 *)(lVar4 + 0x30) = _UNK_00e6a3e8;
        return;
      }
LAB_02434100:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (param_1 == 4) {
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,4);
      if (lVar4 == 0) goto LAB_02434104;
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (((uVar2 != 0) && (*(undefined8 *)(lVar4 + 0x20) = _UNK_00e69f60, uVar2 != 1)) &&
         ((*(undefined8 *)(lVar4 + 0x28) = _UNK_00e69610, 2 < uVar2 &&
          (*(undefined8 *)(lVar4 + 0x30) = _UNK_00e698e0, uVar2 != 3)))) {
        *(undefined8 *)(lVar4 + 0x38) = _UNK_00e698e8;
        return;
      }
      goto LAB_02434100;
    }
  }
  if (5 < param_1) {
    param_1 = 6;
  }
  lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caed88,param_1);
  if (lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar5 = 0;
      uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      puVar6 = (undefined4 *)(lVar4 + 0x24);
      do {
        if (uVar7 <= uVar5) goto LAB_02434100;
        bVar3 = uVar5 < 3;
        iVar1 = (int)uVar5;
        if (!bVar3) {
          iVar1 = (int)uVar5 + (int)((uVar5 & 0xffffffff) / 3) * -3;
        }
        uVar5 = uVar5 + 1;
        uVar8 = *(undefined4 *)(&UNK_00e69a30 + (ulong)bVar3 * 4);
        puVar6[-1] = (float)iVar1 * 300.0 + 240.0;
        *puVar6 = uVar8;
        puVar6 = puVar6 + 2;
        uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    return;
  }
LAB_02434104:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

