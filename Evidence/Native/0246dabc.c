/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass14_0$$<OnOpen>b__36
void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_0___OnOpen_b__36 (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass14_0$$<OnOpen>b__36
   void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_0___OnOpen_b__36
   (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass14_0___OnOpen_b__36_236dabc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
                    /* catch() { ... } // from try @ 0246d880 with catch @ 0246dabc */
  puVar2 = PTR_DAT_04cb9568;
                    /* catch() { ... } // from try @ 0246d874 with catch @ 0246dac0 */
                    /* catch() { ... } // from try @ 0246d894 with catch @ 0246dac4 */
                    /* catch() { ... } // from try @ 0246d928 with catch @ 0246dac8 */
                    /* catch() { ... } // from try @ 0246d858 with catch @ 0246dacc */
                    /* catch() { ... } // from try @ 0246da80 with catch @ 0246dad0 */
                    /* catch() { ... } // from try @ 0246d844 with catch @ 0246dad4 */
                    /* catch() { ... } // from try @ 0246d850 with catch @ 0246dad8 */
  if ((bRam0000000004f9c7b4 & 1) == 0) {
                    /* catch() { ... } // from try @ 0246d9cc with catch @ 0246dadc */
                    /* catch() { ... } // from try @ 0246d814 with catch @ 0246dae0 */
                    /* catch() { ... } // from try @ 0246d7b0 with catch @ 0246dae4 */
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c7b4 = 1;
  }
  Dino_BusSand_Cheat_AutoQaPanel__Open_2357cf4(0);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0246db00 to 0256db03 has its CatchHandler @ 0246db0c */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb9568;
                    /* catch() { ... } // from try @ 0246db00 with catch @ 0246db0c */
                    /* try { // try from 0246db10 to 0256db17 has its CatchHandler @ 0246db20 */
  uVar6 = 0;
                    /* try { // try from 0246db18 to 0256db23 has its CatchHandler @ 0246d580 */
  if ((bRam0000000004f9c688 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568,0);
    FUN_02132f7c(PTR_DAT_04cb9598);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb95a0);
    bRam0000000004f9c688 = 1;
    uVar6 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar6 = extraout_x1_00;
  }
  if (cRam0000000004f9c714 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb9568,uVar6);
    cRam0000000004f9c714 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x10) != '\0') {
    return;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar7 = *(long *)puVar1;
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)PTR_DAT_04cb95a0,0);
    if (lVar3 == 0) goto LAB_0244130c;
    uVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar3,*(undefined8 *)PTR_DAT_04cb9598);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
      lVar3 = *(long *)puVar2;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28);
    *puVar5 = uVar6;
    thunk_FUN_02134474(puVar5,uVar6);
    lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    if (lVar3 == 0) goto LAB_0244130c;
    uVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
    }
    UnityEngine_Object__DontDestroyOnLoad_43c8450(uVar6,0);
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (lVar3 != 0) {
    lVar7 = Dino_BusSand_Cheat_AutoQa__RunAll_2341310(lVar3,uVar8);
    if (lVar7 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar6 = thunk_FUN_0216e89c();
      uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar6,uVar8,0);
    }
    else {
      uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar4 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar9 = *(long *)(lVar3 + 0x10);
        if (lVar9 != 0) {
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar9,lVar7);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar6 = thunk_FUN_0216e89c();
      uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar6,uVar8,0);
    }
    uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,uVar8);
  }
LAB_0244130c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

