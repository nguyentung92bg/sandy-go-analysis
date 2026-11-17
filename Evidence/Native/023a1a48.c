/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass30_0$$<Count>b__1
void Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0___Count_b__1 (Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiMotion.<>c__DisplayClass30_0$$<Count>b__1
   void Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0___Count_b__1
   (Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_UiMotion___c__DisplayClass30_0___Count_b__1_22a1a48
               (undefined4 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dStack_28;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c261 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c261 = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  puVar2 = PTR_DAT_04caa200;
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar7 = (float)Dino_BusSand_App_UI_UiMotion__OutCubic_2287f20(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar9 = (double)(lVar1 - lVar4) * (double)fVar7;
  dVar8 = (double)FUN_049b52f0(dVar9,&dStack_28);
  if (0.0 <= dVar9) {
    if (dVar8 != 0.5) {
      dStack_28 = (double)(long)(dVar9 + 0.5);
      goto LAB_023a1b84;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar8 != -0.5) {
      dStack_28 = (double)(long)(dVar9 + -0.5);
      goto LAB_023a1b84;
    }
    dVar8 = -1.0;
  }
  if (((long)dStack_28 & 1U) != 0) {
    dStack_28 = dStack_28 + dVar8;
  }
LAB_023a1b84:
  lVar1 = -0x8000000000000000;
  if (dStack_28 != INFINITY) {
    lVar1 = (long)dStack_28;
  }
  lVar1 = lVar1 + lVar4;
  if (lVar1 == *(long *)(param_2 + 0x28)) {
    return;
  }
  lVar4 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x28) = lVar1;
  if (lVar4 != 0) {
    plVar6 = *(long **)(param_2 + 0x10);
    uVar5 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),lVar1,*(undefined8 *)(lVar4 + 0x28));
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x518))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x520));
      lVar4 = *(long *)(param_2 + 0x38);
      if (lVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x023a1c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 0x18))
                (param_1,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

