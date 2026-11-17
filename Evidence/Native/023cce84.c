/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$Finish
void Dino_BusSand_App_UI_GuidePanel__Finish (Dino_BusSand_App_UI_GuidePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$Finish
   void Dino_BusSand_App_UI_GuidePanel__Finish (Dino_BusSand_App_UI_GuidePanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__Finish_22cce84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((bRam0000000004f9c388 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb6af0);
    FUN_02132f7c(PTR_DAT_04cb6af8);
    bRam0000000004f9c388 = 1;
  }
  puVar2 = PTR_DAT_04cb6af8;
  if (*(int *)(param_1 + 0x4c) == 3) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 3;
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cac1e8;
  puVar7 = *(undefined8 **)(lVar3 + 0xb8);
  lVar8 = puVar7[1];
  if (lVar8 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(lVar8,uVar9,*(undefined8 *)PTR_DAT_04cb6af0,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar8;
    thunk_FUN_02134474(plVar4,lVar8);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Tween__Delayed_2161264(_UNK_00e208cc,lVar8,0);
  if (lVar3 != 0) {
    Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar3,1,0);
    lVar3 = Dino_BusSand_App_UI_GuidePanel__FinishRoutine_22cd5b4(param_1);
    if (lVar3 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar6 = thunk_FUN_0216e89c();
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar6,uVar9,0);
    }
    else {
      uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar5 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (param_1 != 0) {
          lVar8 = *(long *)(param_1 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar8,lVar3);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar6 = thunk_FUN_0216e89c();
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar6,uVar9,0);
    }
    uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,uVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

