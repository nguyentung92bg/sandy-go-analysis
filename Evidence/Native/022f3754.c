/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OnStartClick
void Dino_BusSand_App_UI_YachtRacingStartPanel__OnStartClick (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel$$OnStartClick
   void Dino_BusSand_App_UI_YachtRacingStartPanel__OnStartClick
   (Dino_BusSand_App_UI_YachtRacingStartPanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingStartPanel__OnStartClick_21f3754(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000004f9bc2f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1528);
    FUN_02132f7c(PTR_DAT_04cae408);
    bRam0000000004f9bc2f = 1;
  }
  if ((((*(char *)(param_1 + 0x60) != '\0') || (*(char *)(param_1 + 0x61) != '\0')) ||
      (*(char *)(param_1 + 0x2c) != '\0')) ||
     ((lVar1 = Dino_BusSand_App_Meta_YachtRacingFeature__get_I_225aad4(0), lVar1 == 0 ||
      (*(long *)(param_1 + 0x40) == 0)))) {
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (*(long *)(param_1 + 0x50) != 0) {
    Dino_BusSand_App_UI_YachtRacingRewardTips__Hide_21ed9b4();
  }
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cae408,1,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cb1528,0,0);
  uVar2 = Dino_BusSand_App_Meta_YachtRacingFeature__StartRace_225c508(lVar1,0);
  lVar1 = Dino_BusSand_App_UI_YachtRacingStartPanel__StartFlow_21f38e0(param_1,uVar2);
  uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    if (lVar1 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar4 = thunk_FUN_0216e89c();
      uVar2 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar4,uVar2,0);
    }
    else {
      uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar3 & 1) != 0) {
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
          (*pcRam0000000004fa8560)(lVar5,lVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar4 = thunk_FUN_0216e89c();
      uVar2 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar4,uVar2,0);
    }
    uVar2 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar4,uVar2);
  }
  return;
}

