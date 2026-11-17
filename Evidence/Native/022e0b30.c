/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$RefreshTarget
void Dino_BusSand_App_UI_StreakRateHallBar__RefreshTarget (Dino_BusSand_App_Meta_ActivityRewardEntry_o e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$RefreshTarget
   void Dino_BusSand_App_UI_StreakRateHallBar__RefreshTarget
   (Dino_BusSand_App_Meta_ActivityRewardEntry_o e, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRateHallBar__RefreshTarget_21e0b30(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar2 = PTR_DAT_04cae9a8;
  if ((bRam0000000004f9bba9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cb0c20);
    FUN_02132f7c(PTR_DAT_04cb0c28);
    FUN_02132f7c(PTR_DAT_04caf100);
    FUN_02132f7c(PTR_DAT_04cb0c30);
    FUN_02132f7c(PTR_DAT_04cb0c38);
    FUN_02132f7c(PTR_DAT_04cb0c40);
    bRam0000000004f9bba9 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar3 != 0) {
    uVar4 = UnityEngine_Transform__Find_43d4bec(lVar3,*(undefined8 *)PTR_DAT_04cb0c28,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      uStack_38 = param_1[1];
      uStack_40 = *param_1;
      uStack_30 = param_1[2];
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_StreakRateHallBar__ApplyRewardRibbon_21e0e4c
                (uVar4,&uStack_40,*(undefined8 *)PTR_DAT_04cb0c30,*(undefined8 *)PTR_DAT_04cb0c20,
                 *(undefined8 *)PTR_DAT_04cb0c38,*(undefined8 *)PTR_DAT_04cb0c40,
                 *(undefined8 *)PTR_DAT_04caf100);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

