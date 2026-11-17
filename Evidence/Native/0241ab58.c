/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel.<>c__DisplayClass15_0$$<OnSure>b__1
void Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass15_0___OnSure_b__1 (Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass15_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel.<>c__DisplayClass15_0$$<OnSure>b__1
   void Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass15_0___OnSure_b__1
   (Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass15_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass15_0___OnSure_b__1_231ab58(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  puVar1 = PTR_DAT_04caba50;
  if ((bRam0000000004f9c587 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9c587 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar5 = *(long *)puVar1;
                    /* try { // try from 0241abc4 to 0251ac6f has its CatchHandler @ 0241abc4
                       catch() { ... } // from try @ 0241abc4 with catch @ 0241abc4
                       catch() { ... } // from try @ 0241ada8 with catch @ 0241abc4
                       catch() { ... } // from try @ 0241adf0 with catch @ 0241abc4
                       catch() { ... } // from try @ 0241aec8 with catch @ 0241abc4 */
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cac430;
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(param_1 + 0x18) == 1) {
    uVar8 = 1;
    if (*(int *)(lVar5 + 0x3c) == 2) {
      uVar8 = 2;
    }
  }
  else {
    uVar8 = 0;
  }
  if ((bRam0000000004f9b861 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420,uVar8,0);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac438);
    FUN_02132f7c(PTR_DAT_04cac430);
    bRam0000000004f9b861 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp___c__DisplayClass93_0___ctor_216b3e4(lVar2,0);
  puVar1 = PTR_DAT_04caba50;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(lVar2 + 0x10) = lVar5;
  thunk_FUN_02134474((long *)(lVar2 + 0x10),lVar5);
  lVar3 = *(long *)puVar1;
  *(undefined4 *)(lVar2 + 0x18) = uVar8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_GameApp__get_CanStartLevel_2165d14();
  if ((uVar4 & 1) != 0) {
    lVar2 = Dino_BusSand_App_GameApp__EnterLevelRoutine_2165eac(lVar5,*(undefined4 *)(lVar2 + 0x18))
    ;
    if (lVar2 == 0) {
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
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar3 = *(long *)(lVar5 + 0x10);
        if (lVar3 != 0) {
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar3,lVar2);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
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
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
  System_Action_bool____ctor_35ee0e8(lVar3,lVar2,*(undefined8 *)PTR_DAT_04cac438,0);
  if ((bRam0000000004f9b87b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac5a8);
    FUN_02132f7c(PTR_DAT_04cac5b0);
    bRam0000000004f9b87b = 1;
  }
  lVar5 = *(long *)(lVar5 + 0x28);
  uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar5 == 0) {
LAB_02265ea8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                    (lVar5,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar7,*(undefined8 *)PTR_DAT_04cac5a8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
  if ((uVar4 & 1) == 0) {
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),0,*(undefined8 *)(lVar3 + 0x28));
    }
  }
  else {
    if (lVar5 == 0) goto LAB_02265ea8;
    *(long *)(lVar5 + 0x38) = lVar3;
    thunk_FUN_02134474((long *)(lVar5 + 0x38),lVar3);
  }
  return;
}

