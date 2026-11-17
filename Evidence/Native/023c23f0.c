/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel.<CloseAfterAnim>d__27$$MoveNext
bool Dino_BusSand_App_UI_ContinueBottomPanel__CloseAfterAnim_d__27__MoveNext (Dino_BusSand_App_UI_ContinueBottomPanel__CloseAfterAnim_d__27_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel.<CloseAfterAnim>d__27$$MoveNext
   bool Dino_BusSand_App_UI_ContinueBottomPanel__CloseAfterAnim_d__27__MoveNext
   (Dino_BusSand_App_UI_ContinueBottomPanel__CloseAfterAnim_d__27_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_ContinueBottomPanel__CloseAfterAnim_d__27__MoveNext_22c23f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((bRam0000000004f9c33d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cb6738);
    FUN_02132f7c(PTR_DAT_04cb6740);
    bRam0000000004f9c33d = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_023c259c;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
LAB_023c259c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar1 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar3,*(undefined8 *)PTR_DAT_04cb6738,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar1,0,0);
    uVar4 = 0;
    if ((uVar2 & 1) != 0) {
      if (lVar1 == 0) goto LAB_023c259c;
      uVar4 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar1,*(undefined8 *)PTR_DAT_04cada30);
    }
    if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar5 = (float)Dino_BusSand_App_UI_CommerceUi__Play_22a8904
                             (uVar4,*(undefined8 *)PTR_DAT_04cb6740,0);
    if (0.0 < fVar5) {
      uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar5,uVar4,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  if (*(char *)(lVar3 + 0x2c) == '\0') {
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar3,0);
  }
  return 0;
}

