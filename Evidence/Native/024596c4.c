/* IL2CPP: Dino.BusSand.Cheat.AutoQaPanel.<>c$$<OnOpen>b__6_0
void Dino_BusSand_Cheat_AutoQaPanel___c___OnOpen_b__6_0 (Dino_BusSand_Cheat_AutoQaPanel___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQaPanel.<>c$$<OnOpen>b__6_0
   void Dino_BusSand_Cheat_AutoQaPanel___c___OnOpen_b__6_0 (Dino_BusSand_Cheat_AutoQaPanel___c_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQaPanel___c___OnOpen_b__6_0_23596c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04cb9568;
  if ((bRam0000000004f9c71f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    bRam0000000004f9c71f = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb9568;
  uVar7 = 0;
  if ((bRam0000000004f9c688 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568,0);
    FUN_02132f7c(PTR_DAT_04cb9598);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb95a0);
    bRam0000000004f9c688 = 1;
    uVar7 = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar7 = extraout_x1_00;
  }
  if (cRam0000000004f9c714 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb9568,uVar7);
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
  uVar7 = Dino_BusSand_Cheat_AutoQa__get_App_2340ed4();
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar8 = *(long *)puVar1;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)PTR_DAT_04cb95a0,0);
    if (lVar3 == 0) goto LAB_0244130c;
    uVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar3,*(undefined8 *)PTR_DAT_04cb9598);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
      lVar3 = *(long *)puVar2;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28);
    *puVar5 = uVar7;
    thunk_FUN_02134474(puVar5,uVar7);
    lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    if (lVar3 == 0) goto LAB_0244130c;
    uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
    }
    UnityEngine_Object__DontDestroyOnLoad_43c8450(uVar7,0);
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x28);
  if (lVar3 != 0) {
    lVar8 = Dino_BusSand_Cheat_AutoQa__RunAll_2341310(lVar3,0);
    if (lVar8 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar6 = thunk_FUN_0216e89c();
      uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar6,uVar7,0);
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
          (*pcRam0000000004fa8560)(lVar9,lVar8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar6 = thunk_FUN_0216e89c();
      uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar6,uVar7,0);
    }
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,uVar7);
  }
LAB_0244130c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

