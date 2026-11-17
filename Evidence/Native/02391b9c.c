/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass26_0$$<Appear>b__3
void Dino_BusSand_App_UI_UiMotion___c__DisplayClass26_0___Appear_b__3 (Dino_BusSand_App_UI_UiMotion___c__DisplayClass26_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass26_0$$<Appear>b__3
   void Dino_BusSand_App_UI_UiMotion___c__DisplayClass26_0___Appear_b__3
   (Dino_BusSand_App_UI_UiMotion___c__DisplayClass26_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_UiMotion___c__DisplayClass26_0___Appear_b__3_2291b9c(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar4 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c1ce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c1ce = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
      puVar1 = (undefined4 *)(param_1 + 0x24);
      puVar2 = (undefined4 *)(param_1 + 0x28);
      puVar3 = (undefined4 *)(param_1 + 0x2c);
    }
    else {
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      puVar1 = (undefined4 *)(lVar6 + 0x20);
      puVar2 = (undefined4 *)(lVar6 + 0x24);
      puVar3 = (undefined4 *)(lVar6 + 0x28);
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_02391c90;
    UnityEngine_Transform__set_localScale_43d1be0
              (*puVar1,*puVar2,*puVar3,*(long *)(param_1 + 0x18),0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar6 != 0) {
    if ((bRam0000000004fac320 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04d09bf8,0);
      bRam0000000004fac320 = 1;
    }
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
      }
      if (pcRam0000000004fac330 == (code *)0x0) {
        pcRam0000000004fac330 = (code *)FUN_02132f40(&UNK_00e648e1);
      }
                    /* WARNING: Could not recover jumptable at 0x0477adbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fac330)(0x3f800000,lVar7);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02391c90:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

