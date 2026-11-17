/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$OnMaskClick
void Dino_BusSand_App_UI_CommonGetPanel__OnMaskClick (Dino_BusSand_App_UI_CommonGetPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$OnMaskClick
   void Dino_BusSand_App_UI_CommonGetPanel__OnMaskClick (Dino_BusSand_App_UI_CommonGetPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonGetPanel__OnMaskClick_22ae3a4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000004f9c2bc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cb5f90);
    FUN_02132f7c(PTR_DAT_04cb5f98);
    bRam0000000004f9c2bc = 1;
  }
  if (((*(char *)(param_1 + 0x48) != '\0') || (*(char *)(param_1 + 0x49) != '\0')) ||
     (*(char *)(param_1 + 0x2c) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
  lVar5 = *plVar2;
  *plVar2 = 0;
  thunk_FUN_02134474(plVar2,0);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
  }
  uVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb5f98,0);
  if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
  }
  uVar3 = Dino_BusSand_App_UI_CommerceUi__Anim_22ac584(uVar3);
  Dino_BusSand_App_UI_CommerceUi__Play_22a8904(uVar3,*(undefined8 *)PTR_DAT_04cb5f90);
  lVar5 = Dino_BusSand_App_UI_CommonGetPanel__CloseAfter_22aee18(param_1);
  uVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    if (lVar5 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar4 = thunk_FUN_0216e89c();
      uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar4,uVar3,0);
    }
    else {
      uVar1 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar1 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (param_1 != 0) {
          lVar6 = *(long *)(param_1 + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar6,lVar5);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar4 = thunk_FUN_0216e89c();
      uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar4,uVar3,0);
    }
    uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar4,uVar3);
  }
  return;
}

