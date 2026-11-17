/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$ScrollTo
void Dino_BusSand_App_UI_WinStreakPanel__ScrollTo (Dino_BusSand_App_UI_WinStreakPanel_o* __this, float y, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinStreakPanel$$ScrollTo
   void Dino_BusSand_App_UI_WinStreakPanel__ScrollTo (Dino_BusSand_App_UI_WinStreakPanel_o* __this,
   float y, const MethodInfo* method); */

void Dino_BusSand_App_UI_WinStreakPanel__ScrollTo_2338bbc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float in_s3;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x38),0);
    if (1.0 < in_s3) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_02438cb8;
      UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x38),0);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      UnityEngine_RectTransform__get_sizeDelta_43cf9ac(*(long *)(param_1 + 0x40),0);
      if (*(long *)(param_1 + 0x40) != 0) {
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,*(long *)(param_1 + 0x40),0);
        lVar3 = *(long *)(param_1 + 0xa0);
                    /* try { // try from 02438c6c to 02538c73 has its CatchHandler @ 02438e00 */
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        if (lVar3 != 0) {
                    /* try { // try from 02438c8c to 02538c93 has its CatchHandler @ 02438dec */
                    /* try { // try from 02438ca4 to 02538cab has its CatchHandler @ 02438d00 */
          *(undefined8 *)(lVar3 + 0xb8) = **(undefined8 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
          puVar1 = PTR_DAT_04ca9ae8;
          if ((bRam0000000004f9c645 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04ca9ae8);
            bRam0000000004f9c645 = 1;
          }
          uVar4 = *(undefined8 *)(param_1 + 0x48);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
          if ((uVar2 & 1) == 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x40);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
            if ((uVar2 & 1) == 0) {
              if (*(long *)(param_1 + 0x40) != 0) {
                lVar3 = *(long *)(param_1 + 0x48);
                UnityEngine_RectTransform__get_anchoredPosition_43cf828(*(long *)(param_1 + 0x40),0)
                ;
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
      }
    }
  }
LAB_02438cb8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

