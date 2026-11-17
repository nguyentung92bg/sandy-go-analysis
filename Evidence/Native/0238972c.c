/* IL2CPP: Dino.BusSand.App.UI.UiKit$$StopBreathing
void Dino_BusSand_App_UI_UiKit__StopBreathing (UnityEngine_Transform_o* button, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$StopBreathing
   void Dino_BusSand_App_UI_UiKit__StopBreathing (UnityEngine_Transform_o* button, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_UiKit__StopBreathing_228972c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar5;
  
  if ((bRam0000000004f9c19b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb50d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb50e0);
    bRam0000000004f9c19b = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    lVar2 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cb50e0,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
    lVar5 = 0;
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) goto LAB_02389834;
      lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar2,*(undefined8 *)PTR_DAT_04cb50d8);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar1 = PTR_DAT_04ca9ae8;
      uVar4 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar4 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar4 = extraout_x1_00;
      }
      puVar1 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar4);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar4 = 0;
      if (lVar5 != 0) {
        uVar4 = *(undefined8 *)(lVar5 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8680)(0,uVar4);
      return;
    }
    return;
  }
LAB_02389834:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

