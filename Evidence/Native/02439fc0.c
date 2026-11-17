/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$<BuildTower>b__35_1
void Dino_BusSand_App_UI_WinStreakPanel___BuildTower_b__35_1 (Dino_BusSand_App_UI_WinStreakPanel_o* __this, UnityEngine_Vector2_o __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$<BuildTower>b__35_1
   void Dino_BusSand_App_UI_WinStreakPanel___BuildTower_b__35_1
   (Dino_BusSand_App_UI_WinStreakPanel_o* __this, UnityEngine_Vector2_o __, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_WinStreakPanel___BuildTower_b__35_1_2339fc0
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c654 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c654 = 1;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_3 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(param_3 + 0x40),0);
    if (40.0 < ABS(param_2 - *(float *)(param_3 + 0x98))) {
      Dino_BusSand_App_UI_WinStreakPanel__HideTooltip_233923c(param_3);
    }
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c645 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c645 = 1;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_3 + 0x40) != 0) {
        lVar3 = *(long *)(param_3 + 0x48);
        UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(param_3 + 0x40),0);
        if (lVar3 != 0) {
          if ((bRam0000000004fa8a88 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7bc8,0);
            bRam0000000004fa8a88 = 1;
          }
          if (lVar3 != 0) {
            lVar3 = *(long *)(lVar3 + 0x10);
            if (lVar3 != 0) {
              if (pcRam0000000004fa8ad0 == (code *)0x0) {
                pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
              }
              (*pcRam0000000004fa8ad0)(lVar3,&stack0xffffffffffffffe8);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

