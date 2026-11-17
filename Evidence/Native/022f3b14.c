/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel.<>c__DisplayClass12_0$$<RefreshStage>b__0
void Dino_BusSand_App_UI_YachtRacingStartPanel___c__DisplayClass12_0___RefreshStage_b__0 (Dino_BusSand_App_UI_YachtRacingStartPanel___c__DisplayClass12_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel.<>c__DisplayClass12_0$$<RefreshStage>b__0
   void Dino_BusSand_App_UI_YachtRacingStartPanel___c__DisplayClass12_0___RefreshStage_b__0
   (Dino_BusSand_App_UI_YachtRacingStartPanel___c__DisplayClass12_0_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_YachtRacingStartPanel___c__DisplayClass12_0___RefreshStage_b__0_21f3b14
               (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  int iStack_34;
  
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x10);
  iStack_34 = iVar1;
  if ((bRam0000000004f9bc2e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb1210);
    FUN_02132f7c(PTR_DAT_04cb1218);
    FUN_02132f7c(PTR_DAT_04cb0f98);
    FUN_02132f7c(PTR_DAT_04cadde8);
    bRam0000000004f9bc2e = 1;
  }
  if ((((*(long *)(lVar9 + 0x40) != 0) && (*(char *)(lVar9 + 0x60) == '\0')) &&
      (*(int *)(lVar9 + 0x48) <= iVar1)) &&
     ((*(long *)(lVar9 + 0x50) != 0 &&
      (uVar2 = Dino_BusSand_App_Meta_YachtRacingCore__StageRewardId_225525c
                         (*(long *)(lVar9 + 0x40),iVar1,0), 0 < (int)uVar2)))) {
    uVar2 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(uVar2,0);
    lVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    uVar4 = System_Int32__ToString_482d750(&iStack_34,0);
    uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb0f98,uVar4,0);
    uVar5 = FUN_01e782f0(*(undefined8 *)PTR_DAT_04ca9d18);
    uVar4 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(uVar4,uVar5,0);
    uVar4 = System_String__Concat_46d2b84
                      (*(undefined8 *)PTR_DAT_04cb1210,uVar4,*(undefined8 *)PTR_DAT_04cadde8,0);
    if (lVar3 != 0) {
      FUN_01e7704c(lVar3,uVar4);
      FUN_01e76ff0(lVar3,0,uVar4);
      uVar5 = Dino_BusSand_App_UI_YachtRacingUi__L_21f4b10(*(undefined8 *)PTR_DAT_04cb1218,lVar3,0);
      lVar3 = *(long *)(lVar9 + 0x50);
      uVar4 = *(undefined8 *)(lVar9 + 0x58);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      if ((uVar6 & 1) == 0) {
        plVar7 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar9,0);
        if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_04cabdb0)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar7);
        }
      }
      else {
        plVar7 = *(long **)(lVar9 + 0x58);
      }
      if (lVar3 != 0) {
        Dino_BusSand_App_UI_YachtRacingRewardTips__SetData_21ed678(lVar3,uVar8,plVar7,uVar2,uVar5);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

