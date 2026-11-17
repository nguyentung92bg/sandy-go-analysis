/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$PlayReachAnim
void Dino_BusSand_App_UI_ClimbTowerItemView__PlayReachAnim (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, int32_t continueWinCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$PlayReachAnim
   void Dino_BusSand_App_UI_ClimbTowerItemView__PlayReachAnim
   (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, int32_t continueWinCount, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_ClimbTowerItemView__PlayReachAnim_21a33a8(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  
  if ((bRam0000000004f9ba26 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cab230);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae930);
    FUN_02132f7c(PTR_DAT_04cae938);
    FUN_02132f7c(PTR_DAT_04cae898);
    FUN_02132f7c(PTR_DAT_04cae940);
    FUN_02132f7c(PTR_DAT_04cae948);
    bRam0000000004f9ba26 = 1;
  }
  if (((*(char *)(param_1 + 0x41) != '\0') || (*(int *)(param_1 + 0x34) != param_2)) ||
     (*(int *)(param_1 + 0x3c) == 1)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x41) = 1;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsSpecial_2229b68
                      (*(long *)(param_1 + 0x28),param_2,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                        (param_1,*(undefined8 *)PTR_DAT_04cada30);
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac7b8);
      }
      Dino_BusSand_App_UI_CommerceUi__Play_22a8904(uVar3,*(undefined8 *)PTR_DAT_04cae930,0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      Dino_BusSand_App_Meta_ClimbTowerFeature__RecordRise_222b0cc
                (*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),0);
      puVar1 = PTR_DAT_04cae898;
      uVar3 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c
                        (param_1,*(undefined8 *)PTR_DAT_04cae898);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
      uVar3 = 0;
      if ((uVar2 & 1) != 0) {
        lVar4 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(param_1,*(undefined8 *)puVar1);
        if (lVar4 == 0) goto LAB_022a3628;
        uVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                          (lVar4,*(undefined8 *)PTR_DAT_04cada30);
      }
      if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar7 = (float)Dino_BusSand_App_UI_CommerceUi__Play_22a8904
                               (uVar3,*(undefined8 *)PTR_DAT_04cae940,0);
      if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae938,0);
      if (*(int *)(*(long *)PTR_DAT_04cab230 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Haptics__Vibrate_214dd74(*(undefined8 *)PTR_DAT_04cae948,0);
      if (fVar7 <= 0.0) {
        fVar7 = 1.5;
      }
      lVar4 = Dino_BusSand_App_UI_ClimbTowerItemView__AfterReach_21a362c(fVar7,param_1);
      if (lVar4 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar5 = thunk_FUN_0216e89c();
        uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar5,uVar3,0);
      }
      else {
        uVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar2 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != 0) {
            lVar6 = *(long *)(param_1 + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar6,lVar4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar5 = thunk_FUN_0216e89c();
        uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar5,uVar3,0);
      }
      uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar5,uVar3);
    }
  }
LAB_022a3628:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

