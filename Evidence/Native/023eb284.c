/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Play
void Dino_BusSand_App_UI_HomePanel__Play (Dino_BusSand_App_UI_HomePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Play
   void Dino_BusSand_App_UI_HomePanel__Play (Dino_BusSand_App_UI_HomePanel_o* __this, const
   MethodInfo* method); */

ulong Dino_BusSand_App_UI_HomePanel__Play_22eb284(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  
  uVar6 = param_1;
  if ((bRam0000000004f9c43e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cb7470);
    FUN_02132f7c(PTR_DAT_04cb75b0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    uVar6 = FUN_02132f7c(PTR_DAT_04cac1e8);
    bRam0000000004f9c43e = 1;
  }
  puVar1 = PTR_DAT_04caba50;
  if (*(char *)(param_1 + 0x60) != '\0') {
    return uVar6;
  }
  if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04caa458;
  lVar7 = **(long **)(lVar7 + 0xb8);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
  System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)PTR_DAT_04cb7470,0);
  if (lVar7 != 0) {
    uVar6 = Dino_BusSand_App_GameApp__HasHeartOrRefill_21643c8(lVar7,uVar8,0);
    puVar3 = PTR_DAT_04cac458;
    if ((uVar6 & 1) == 0) {
      return uVar6;
    }
    lVar7 = *(long *)PTR_DAT_04cac458;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 4) == '\0') {
      if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848(0);
      puVar1 = PTR_DAT_04ca9ae8;
      if ((uVar6 & 1) != 0) {
        return uVar6;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      *(undefined1 *)(param_1 + 0x60) = 1;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
      fVar10 = 0.0;
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_023eb57c;
        fVar10 = (float)Dino_BusSand_App_UI_HomeAtelier__Dive_22da670(*(long *)(param_1 + 0x50),0);
      }
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Action___ctor_47b5ed0(lVar7,param_1,*(undefined8 *)PTR_DAT_04cb75b0,0);
      if (fVar10 <= 0.0) {
        if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023eb578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(lVar7 + 0x18))
                            (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
          return uVar6;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar7 = Dino_BusSand_App_Tween__Delayed_2161264(fVar10,lVar7,0);
        if ((lVar7 != 0) &&
           (uVar6 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar7,1,0), uVar6 != 0)) {
          *(ulong *)(uVar6 + 0x18) = param_1;
          thunk_FUN_02134474((ulong *)(uVar6 + 0x18),param_1,0);
          return uVar6;
        }
      }
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_04cac458;
      lVar7 = **(long **)(lVar7 + 0xb8);
      if (lVar7 != 0) {
        if ((bRam0000000004f9b879 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cac458,0);
          FUN_02132f7c(PTR_DAT_04cac670);
          FUN_02132f7c(PTR_DAT_04cac680);
          FUN_02132f7c(PTR_DAT_04cac688);
          bRam0000000004f9b879 = 1;
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar1;
        }
        puVar1 = PTR_DAT_04cac430;
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 4) != '\0') {
          lVar7 = *(long *)(lVar7 + 0x28);
          uVar8 = FUN_02133100(*(undefined8 *)PTR_DAT_04cac670,&stack0xffffffffffffffdc);
          if (lVar7 != 0) {
            uVar6 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                              (lVar7,*(undefined8 *)PTR_DAT_04cac688,2,uVar8,
                               *(undefined8 *)PTR_DAT_04cac680);
            return uVar6;
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
        lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        Dino_BusSand_App_GameApp___c__DisplayClass93_0___ctor_216b3e4(lVar5,0);
        puVar1 = PTR_DAT_04caba50;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(long *)(lVar5 + 0x10) = lVar7;
        thunk_FUN_02134474((long *)(lVar5 + 0x10),lVar7);
        lVar4 = *(long *)puVar1;
        *(undefined4 *)(lVar5 + 0x18) = 0;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = Dino_BusSand_App_GameApp__get_CanStartLevel_2165d14();
        if ((uVar6 & 1) != 0) {
          lVar5 = Dino_BusSand_App_GameApp__EnterLevelRoutine_2165eac
                            (lVar7,*(undefined4 *)(lVar5 + 0x18));
          if (lVar5 == 0) {
            thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
            uVar9 = thunk_FUN_0216e89c();
            uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
            System_NullReferenceException___ctor_483267c(uVar9,uVar8,0);
          }
          else {
            uVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
            if ((uVar6 & 1) != 0) {
              if ((bRam0000000004fa84ef & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cf7890);
                bRam0000000004fa84ef = 1;
              }
              if (lVar7 != 0) {
                lVar4 = *(long *)(lVar7 + 0x10);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
                }
                if (pcRam0000000004fa8560 == (code *)0x0) {
                  pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar6 = (*pcRam0000000004fa8560)(lVar4,lVar5);
                return uVar6;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            thunk_FUN_021985a8(PTR_DAT_04caa3a8);
            uVar9 = thunk_FUN_0216e89c();
            uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
            System_ArgumentException___ctor_47b660c(uVar9,uVar8,0);
          }
          uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar9,uVar8);
        }
        lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
        System_Action_bool____ctor_35ee0e8(lVar4,lVar5,*(undefined8 *)PTR_DAT_04cac438,0);
        if ((bRam0000000004f9b87b & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          FUN_02132f7c(PTR_DAT_04cac5a8);
          FUN_02132f7c(PTR_DAT_04cac5b0);
          bRam0000000004f9b87b = 1;
        }
        lVar7 = *(long *)(lVar7 + 0x28);
        uVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
        puVar1 = PTR_DAT_04ca9ae8;
        if (lVar7 != 0) {
          lVar7 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                            (lVar7,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar8,
                             *(undefined8 *)PTR_DAT_04cac5a8);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
          if ((uVar6 & 1) == 0) {
            if (lVar4 != 0) {
              uVar6 = (**(code **)(lVar4 + 0x18))
                                (*(undefined8 *)(lVar4 + 0x40),0,*(undefined8 *)(lVar4 + 0x28));
            }
          }
          else {
            if (lVar7 == 0) goto LAB_02265ea8;
            *(long *)(lVar7 + 0x38) = lVar4;
            uVar6 = thunk_FUN_02134474((long *)(lVar7 + 0x38),lVar4);
          }
          return uVar6;
        }
LAB_02265ea8:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_023eb57c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

