/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$OnPlayClick
void Dino_BusSand_App_UI_MainHudPanel__OnPlayClick (Dino_BusSand_App_UI_MainHudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel$$OnPlayClick
   void Dino_BusSand_App_UI_MainHudPanel__OnPlayClick (Dino_BusSand_App_UI_MainHudPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_MainHudPanel__OnPlayClick_22fd044(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  
  if ((bRam0000000004f9c4b1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c4b1 = 1;
  }
  fVar9 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  puVar1 = PTR_DAT_04caba50;
  if (0.5 <= fVar9 - *(float *)(param_1 + 0x3c)) {
    uVar10 = UnityEngine_Time__get_unscaledTime_43cd610(0);
    *(undefined4 *)(param_1 + 0x3c) = uVar10;
    Dino_BusSand_App_UI_MainHudPanel__FinishPendingReward_22fc9f0(param_1);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    puVar2 = PTR_DAT_04ca9ae8;
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar1;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_04cac458;
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((bRam0000000004f9b879 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac458,0);
        FUN_02132f7c(PTR_DAT_04cac670);
        FUN_02132f7c(PTR_DAT_04cac680);
        FUN_02132f7c(PTR_DAT_04cac688);
        bRam0000000004f9b879 = 1;
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_04cac430;
      if (*(char *)(*(long *)(lVar4 + 0xb8) + 4) != '\0') {
        lVar5 = *(long *)(lVar5 + 0x28);
        uVar8 = FUN_02133100(*(undefined8 *)PTR_DAT_04cac670,&stack0xffffffffffffffdc);
        if (lVar5 != 0) {
          Dino_BusSand_App_UI_UIManager__Open_object__2945314
                    (lVar5,*(undefined8 *)PTR_DAT_04cac688,2,uVar8,*(undefined8 *)PTR_DAT_04cac680);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if ((bRam0000000004f9b861 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cac420);
        FUN_02132f7c(PTR_DAT_04caba50);
        FUN_02132f7c(PTR_DAT_04cac438);
        FUN_02132f7c(PTR_DAT_04cac430);
        bRam0000000004f9b861 = 1;
      }
      lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      Dino_BusSand_App_GameApp___c__DisplayClass93_0___ctor_216b3e4(lVar4,0);
      puVar1 = PTR_DAT_04caba50;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(long *)(lVar4 + 0x10) = lVar5;
      thunk_FUN_02134474((long *)(lVar4 + 0x10),lVar5);
      lVar3 = *(long *)puVar1;
      *(undefined4 *)(lVar4 + 0x18) = 0;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_GameApp__get_CanStartLevel_2165d14();
      if ((uVar6 & 1) != 0) {
        lVar4 = Dino_BusSand_App_GameApp__EnterLevelRoutine_2165eac
                          (lVar5,*(undefined4 *)(lVar4 + 0x18));
        if (lVar4 == 0) {
          thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
          uVar7 = thunk_FUN_0216e89c();
          uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
          System_NullReferenceException___ctor_483267c(uVar7,uVar8,0);
        }
        else {
          uVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
          if ((uVar6 & 1) != 0) {
            if ((bRam0000000004fa84ef & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cf7890);
              bRam0000000004fa84ef = 1;
            }
            if (lVar5 != 0) {
              lVar3 = *(long *)(lVar5 + 0x10);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
              }
              if (pcRam0000000004fa8560 == (code *)0x0) {
                pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
              }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004fa8560)(lVar3,lVar4);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          thunk_FUN_021985a8(PTR_DAT_04caa3a8);
          uVar7 = thunk_FUN_0216e89c();
          uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
          System_ArgumentException___ctor_47b660c(uVar7,uVar8,0);
        }
        uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar7,uVar8);
      }
      lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
      System_Action_bool____ctor_35ee0e8(lVar3,lVar4,*(undefined8 *)PTR_DAT_04cac438,0);
      if ((bRam0000000004f9b87b & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cac5a8);
        FUN_02132f7c(PTR_DAT_04cac5b0);
        bRam0000000004f9b87b = 1;
      }
      lVar5 = *(long *)(lVar5 + 0x28);
      uVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
      puVar1 = PTR_DAT_04ca9ae8;
      if (lVar5 != 0) {
        lVar5 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                          (lVar5,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar8,
                           *(undefined8 *)PTR_DAT_04cac5a8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        if ((uVar6 & 1) == 0) {
          if (lVar3 != 0) {
            (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(lVar3 + 0x40),0,*(undefined8 *)(lVar3 + 0x28));
          }
        }
        else {
          if (lVar5 == 0) goto LAB_02265ea8;
          *(long *)(lVar5 + 0x38) = lVar3;
          thunk_FUN_02134474((long *)(lVar5 + 0x38),lVar3);
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

