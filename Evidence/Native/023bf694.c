/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$HaveContinueAniClose
int32_t Dino_BusSand_App_UI_ContinueBottomPanel__HaveContinueAniClose (bool triggerCloseBottom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$HaveContinueAniClose
   int32_t Dino_BusSand_App_UI_ContinueBottomPanel__HaveContinueAniClose (bool triggerCloseBottom,
   const MethodInfo* method); */

int Dino_BusSand_App_UI_ContinueBottomPanel__HaveContinueAniClose_22bf694(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000004f9c328 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb65b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb65c0);
    bRam0000000004f9c328 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  lVar5 = 0;
  if ((uVar4 & 1) != 0) {
    if (lVar6 == 0) goto LAB_023bf7cc;
    lVar5 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                      (lVar6,*(undefined8 *)PTR_DAT_04cb65c0);
  }
  puVar3 = PTR_DAT_04cb65b8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
  iVar1 = -(uint)((*(int **)(*(long *)puVar3 + 0xb8))[1] + -1 != **(int **)(*(long *)puVar3 + 0xb8))
  ;
  if ((uVar4 & 1) == 0) {
    iVar1 = 1;
  }
  if ((iVar1 == 0) && ((param_1 & 1) != 0)) {
    if (lVar5 == 0) {
LAB_023bf7cc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_ContinueBottomPanel__CloseAnimated_22bf7e8(lVar5);
  }
  return iVar1;
}

