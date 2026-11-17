/* IL2CPP: Dino.BusSand.App.GameApp$$EnterChallenge
void Dino_BusSand_App_GameApp__EnterChallenge (Dino_BusSand_App_GameApp_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$EnterChallenge
   void Dino_BusSand_App_GameApp__EnterChallenge (Dino_BusSand_App_GameApp_o* __this, int32_t level,
   const MethodInfo* method); */

void Dino_BusSand_App_GameApp__EnterChallenge_21642cc(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04cac408;
  if ((bRam0000000004f9b84b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac410);
    FUN_02132f7c(PTR_DAT_04cac408);
    bRam0000000004f9b84b = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp___c__DisplayClass53_0___ctor_216adb8(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(lVar2 + 0x10) = param_1;
  thunk_FUN_02134474((long *)(lVar2 + 0x10),param_1);
  *(int *)(lVar2 + 0x18) = param_2;
  puVar1 = PTR_DAT_04cac410;
  if (0 < param_2) {
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar3,lVar2,*(undefined8 *)puVar1,0);
    uVar4 = Dino_BusSand_App_GameApp__HasHeartOrRefill_21643c8(param_1,uVar3);
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar2 + 0x18);
      puVar1 = PTR_DAT_04cac430;
      if ((bRam0000000004f9b861 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac420);
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
      *(long *)(lVar2 + 0x10) = param_1;
      thunk_FUN_02134474((long *)(lVar2 + 0x10),param_1);
      lVar5 = *(long *)puVar1;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_App_GameApp__get_CanStartLevel_2165d14();
      if ((uVar4 & 1) != 0) {
        lVar2 = Dino_BusSand_App_GameApp__EnterLevelRoutine_2165eac
                          (param_1,*(undefined4 *)(lVar2 + 0x18));
        if (lVar2 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar6 = thunk_FUN_0216e89c();
          uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar6,uVar3,0);
        }
        else {
          uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar4 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (param_1 != 0) {
              lVar5 = *(long *)(param_1 + 0x10);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
              }
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar5,lVar2);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar6 = thunk_FUN_0216e89c();
          uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar6,uVar3,0);
        }
        uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar6,uVar3);
      }
      lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
      System_Action_bool____ctor_35ee0e8(lVar5,lVar2,*(undefined8 *)PTR_DAT_04cac438,0);
      if ((bRam0000000004f9b87b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cac5a8);
        FUN_02132f7c(PTR_DAT_04cac5b0);
        bRam0000000004f9b87b = 1;
      }
      lVar2 = *(long *)(param_1 + 0x28);
      uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
      puVar1 = PTR_DAT_04ca9ae8;
      if (lVar2 != 0) {
        lVar2 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar2,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar3,
                           *(undefined8 *)PTR_DAT_04cac5a8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
        if ((uVar4 & 1) == 0) {
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),0,*(undefined8 *)(lVar5 + 0x28));
          }
        }
        else {
          if (lVar2 == 0) goto LAB_02265ea8;
          *(long *)(lVar2 + 0x38) = lVar5;
          thunk_FUN_02134474((long *)(lVar2 + 0x38),lVar5);
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

