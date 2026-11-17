/* IL2CPP: Dino.BusSand.App.UI.FailPanel.<>c__DisplayClass19_0$$<BuildPeek>b__0
void Dino_BusSand_App_UI_FailPanel___c__DisplayClass19_0___BuildPeek_b__0 (Dino_BusSand_App_UI_FailPanel___c__DisplayClass19_0_o* __this, bool held, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.FailPanel.<>c__DisplayClass19_0$$<BuildPeek>b__0
   void Dino_BusSand_App_UI_FailPanel___c__DisplayClass19_0___BuildPeek_b__0
   (Dino_BusSand_App_UI_FailPanel___c__DisplayClass19_0_o* __this, bool held, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_FailPanel___c__DisplayClass19_0___BuildPeek_b__0_2318210
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  
  puVar1 = PTR_DAT_04cb8518;
  if ((bRam0000000004f9c577 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb8520);
    FUN_02132f7c(PTR_DAT_04cb8518);
    bRam0000000004f9c577 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar1 = PTR_DAT_04cac1e8;
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = param_1;
    thunk_FUN_02134474((long *)(lVar4 + 0x18),param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Tween__KillAll_2161a90(uVar6,0);
    puVar3 = PTR_DAT_04cb8520;
    puVar2 = PTR_DAT_04cac208;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar7 = UnityEngine_CanvasGroup__get_alpha_467ac88(*(long *)(param_1 + 0x10),0);
      uVar6 = *(undefined8 *)puVar2;
      uVar9 = _UNK_00e205f8;
      if ((param_2 & 1) == 0) {
        uVar9 = 0x3f800000;
      }
      *(undefined4 *)(lVar4 + 0x10) = uVar7;
      *(undefined4 *)(lVar4 + 0x14) = uVar9;
      uVar6 = thunk_FUN_0216e89c(uVar6);
      System_Action_float____ctor_35f1448(uVar6,lVar4,*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar4 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e208cc,uVar6,0);
      if ((lVar4 != 0) &&
         (lVar4 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar4,1,0), lVar4 != 0)) {
        Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar4,*(undefined8 *)(param_1 + 0x10),0);
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 0x40), plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 0x40), plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
            plVar5 = *(long **)(param_1 + 0x20);
            if (plVar5 != (long *)0x0) {
              fVar8 = 0.0;
              if ((param_2 & 1) == 0) {
                fVar8 = 1.0;
              }
              if (*(float *)((long)plVar5 + 0x154) == fVar8) {
                return;
              }
              *(float *)((long)plVar5 + 0x154) = fVar8;
              uVar6 = *(undefined8 *)(*plVar5 + 0x300);
              UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x2f8);
              *(undefined1 *)(plVar5 + 0x76) = 1;
                    /* WARNING: Could not recover jumptable at 0x043cbae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(plVar5,uVar6);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

