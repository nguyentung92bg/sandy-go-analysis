/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass93_0$$<EnterLevel>b__0
void Dino_BusSand_App_GameApp___c__DisplayClass93_0___EnterLevel_b__0 (Dino_BusSand_App_GameApp___c__DisplayClass93_0_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp.<>c__DisplayClass93_0$$<EnterLevel>b__0
   void Dino_BusSand_App_GameApp___c__DisplayClass93_0___EnterLevel_b__0
   (Dino_BusSand_App_GameApp___c__DisplayClass93_0_o* __this, bool ok, const MethodInfo* method); */

void Dino_BusSand_App_GameApp___c__DisplayClass93_0___EnterLevel_b__0_216b3ec
               (long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((bRam0000000004f9b8a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac670);
    FUN_02132f7c(PTR_DAT_04cac680);
    FUN_02132f7c(PTR_DAT_04cac688);
    bRam0000000004f9b8a3 = 1;
  }
  puVar2 = PTR_DAT_04cac430;
  lVar6 = *(long *)(param_1 + 0x10);
  if ((param_2 & 1) == 0) {
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x38) != '\0') {
        if (*(long *)(lVar6 + 0x20) == 0) goto LAB_0226b4d8;
        if (*(int *)(*(long *)(lVar6 + 0x20) + 0x20) != 2) {
          lVar6 = *(long *)(lVar6 + 0x28);
          uVar8 = FUN_02133100(*(undefined8 *)PTR_DAT_04cac670,&stack0xffffffffffffffdc);
          if (lVar6 == 0) goto LAB_0226b4d8;
          Dino_BusSand_App_UI_UIManager__Open_object__2945314
                    (lVar6,*(undefined8 *)PTR_DAT_04cac688,2,uVar8,*(undefined8 *)PTR_DAT_04cac680);
        }
      }
      return;
    }
  }
  else if (lVar6 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    if ((bRam0000000004f9b861 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cac420,uVar1,0);
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
    *(long *)(lVar3 + 0x10) = lVar6;
    thunk_FUN_02134474((long *)(lVar3 + 0x10),lVar6);
    lVar4 = *(long *)puVar2;
    *(undefined4 *)(lVar3 + 0x18) = uVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_GameApp__get_CanStartLevel_2165d14();
    if ((uVar5 & 1) != 0) {
      lVar3 = Dino_BusSand_App_GameApp__EnterLevelRoutine_2165eac
                        (lVar6,*(undefined4 *)(lVar3 + 0x18));
      if (lVar3 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar7 = thunk_FUN_0216e89c();
        uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar7,uVar8,0);
      }
      else {
        uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar5 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (lVar6 != 0) {
            lVar4 = *(long *)(lVar6 + 0x10);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar4,lVar3);
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
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
    System_Action_bool____ctor_35ee0e8(lVar4,lVar3,*(undefined8 *)PTR_DAT_04cac438,0);
    if ((bRam0000000004f9b87b & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cac5a8);
      FUN_02132f7c(PTR_DAT_04cac5b0);
      bRam0000000004f9b87b = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x28);
    uVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
    puVar2 = PTR_DAT_04ca9ae8;
    if (lVar6 != 0) {
      lVar6 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                        (lVar6,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar8,
                         *(undefined8 *)PTR_DAT_04cac5a8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
      if ((uVar5 & 1) == 0) {
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),0,*(undefined8 *)(lVar4 + 0x28))
          ;
        }
      }
      else {
        if (lVar6 == 0) goto LAB_02265ea8;
        *(long *)(lVar6 + 0x38) = lVar4;
        thunk_FUN_02134474((long *)(lVar6 + 0x38),lVar4);
      }
      return;
    }
LAB_02265ea8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0226b4d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

