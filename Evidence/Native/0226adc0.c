/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass53_0$$<EnterChallenge>b__0
void Dino_BusSand_App_GameApp___c__DisplayClass53_0___EnterChallenge_b__0 (Dino_BusSand_App_GameApp___c__DisplayClass53_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass53_0$$<EnterChallenge>b__0
   void Dino_BusSand_App_GameApp___c__DisplayClass53_0___EnterChallenge_b__0
   (Dino_BusSand_App_GameApp___c__DisplayClass53_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_GameApp___c__DisplayClass53_0___EnterChallenge_b__0_216adc0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04cac408;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((bRam0000000004f9b84b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458,iVar1,0);
    FUN_02132f7c(PTR_DAT_04cac410);
    FUN_02132f7c(PTR_DAT_04cac408);
    bRam0000000004f9b84b = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_App_GameApp___c__DisplayClass53_0___ctor_216adb8(lVar3,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(lVar3 + 0x10) = lVar7;
  thunk_FUN_02134474((long *)(lVar3 + 0x10),lVar7);
  *(int *)(lVar3 + 0x18) = iVar1;
  puVar2 = PTR_DAT_04cac410;
  if (0 < iVar1) {
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar4,lVar3,*(undefined8 *)puVar2,0);
    uVar5 = Dino_BusSand_App_GameApp__HasHeartOrRefill_21643c8(lVar7,uVar4);
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)(lVar3 + 0x18);
      puVar2 = PTR_DAT_04cac430;
      if ((bRam0000000004f9b861 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac420);
        FUN_02132f7c(PTR_DAT_04caba50);
        FUN_02132f7c(PTR_DAT_04cac438);
        FUN_02132f7c(PTR_DAT_04cac430);
        bRam0000000004f9b861 = 1;
      }
      lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      Dino_BusSand_App_GameApp___c__DisplayClass93_0___ctor_216b3e4(lVar3,0);
      puVar2 = PTR_DAT_04caba50;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(long *)(lVar3 + 0x10) = lVar7;
      thunk_FUN_02134474((long *)(lVar3 + 0x10),lVar7);
      lVar6 = *(long *)puVar2;
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_GameApp__get_CanStartLevel_2165d14();
      if ((uVar5 & 1) != 0) {
        lVar3 = Dino_BusSand_App_GameApp__EnterLevelRoutine_2165eac
                          (lVar7,*(undefined4 *)(lVar3 + 0x18));
        if (lVar3 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar8 = thunk_FUN_0216e89c();
          uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar8,uVar4,0);
        }
        else {
          uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar5 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (lVar7 != 0) {
              lVar6 = *(long *)(lVar7 + 0x10);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
              }
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar6,lVar3);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar8 = thunk_FUN_0216e89c();
          uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar8,uVar4,0);
        }
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar8,uVar4);
      }
      lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
      System_Action_bool____ctor_35ee0e8(lVar6,lVar3,*(undefined8 *)PTR_DAT_04cac438,0);
      if ((bRam0000000004f9b87b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cac5a8);
        FUN_02132f7c(PTR_DAT_04cac5b0);
        bRam0000000004f9b87b = 1;
      }
      lVar7 = *(long *)(lVar7 + 0x28);
      uVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
      puVar2 = PTR_DAT_04ca9ae8;
      if (lVar7 != 0) {
        lVar7 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar7,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar4,
                           *(undefined8 *)PTR_DAT_04cac5a8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        if ((uVar5 & 1) == 0) {
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),0,*(undefined8 *)(lVar6 + 0x28));
          }
        }
        else {
          if (lVar7 == 0) goto LAB_02265ea8;
          *(long *)(lVar7 + 0x38) = lVar6;
          thunk_FUN_02134474((long *)(lVar7 + 0x38),lVar6);
        }
        return;
      }
LAB_02265ea8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

