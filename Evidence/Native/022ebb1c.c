/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$AdaptBackTop
void Dino_BusSand_App_UI_YachtRacingPanel__AdaptBackTop (Dino_BusSand_App_UI_YachtRacingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingPanel$$AdaptBackTop
   void Dino_BusSand_App_UI_YachtRacingPanel__AdaptBackTop (Dino_BusSand_App_UI_YachtRacingPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingPanel__AdaptBackTop_21ebb1c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float in_s3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bbf5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb10d0);
    bRam0000000004f9bbf5 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022ebbb0 to 023ebbb7 has its CatchHandler @ 022ebc14 */
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
                    /* try { // try from 022ebbb8 to 023ebc43 has its CatchHandler @ 022ebb18 */
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x60) != 0) {
        UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x60),0);
        if (in_s3 <= 1.0) {
          return;
        }
        if (*(long *)(param_1 + 0x68) != 0) {
          uVar5 = UnityEngine_RectTransform__get_offsetMax_43cff78(*(long *)(param_1 + 0x68),0);
          if (*(long *)(param_1 + 0x68) != 0) {
            UnityEngine_RectTransform__set_offsetMax_43d0018
                      (uVar5,(in_s3 / 1920.0) * -788.0,*(long *)(param_1 + 0x68),0);
                    /* catch() { ... } // from try @ 022ebbb0 with catch @ 022ebc14 */
            plVar3 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                                       (param_1,*(undefined8 *)PTR_DAT_04cb10d0,0);
            if (plVar3 == (long *)0x0) {
              plVar3 = (long *)0x0;
            }
            else {
                    /* try { // try from 022ebc44 to 023ebcdb has its CatchHandler @ 022ebc44
                       catch() { ... } // from try @ 022ebc44 with catch @ 022ebc44
                       catch() { ... } // from try @ 022ebce4 with catch @ 022ebc44 */
              if (*plVar3 != *(long *)PTR_DAT_04cabdb0) {
                plVar3 = (long *)0x0;
              }
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar2 = UnityEngine_Object__op_Inequality_43c8dec(plVar3,0,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            if (plVar3 != (long *)0x0) {
              if ((bRam0000000004fa8a88 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7bc8,0);
                bRam0000000004fa8a88 = 1;
              }
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar4 = plVar3[2];
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
              }
              if (pcRam0000000004fa8ad0 == (code *)0x0) {
                pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
              }
              (*pcRam0000000004fa8ad0)(lVar4,&stack0xffffffffffffffe8);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

