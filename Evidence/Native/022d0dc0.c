/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel.<CloseRoutine>d__15$$MoveNext
bool Dino_BusSand_App_UI_PassportFinishGetPanel__CloseRoutine_d__15__MoveNext (Dino_BusSand_App_UI_PassportFinishGetPanel__CloseRoutine_d__15_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel.<CloseRoutine>d__15$$MoveNext
   bool Dino_BusSand_App_UI_PassportFinishGetPanel__CloseRoutine_d__15__MoveNext
   (Dino_BusSand_App_UI_PassportFinishGetPanel__CloseRoutine_d__15_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_App_UI_PassportFinishGetPanel__CloseRoutine_d__15__MoveNext_21d0dc0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  
  if ((bRam0000000004f9bb3c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04caef48);
                    /* try { // try from 022d0e08 to 023d0f9f has its CatchHandler @ 022d11e0 */
    FUN_02132f7c(PTR_DAT_04cb0428);
    FUN_02132f7c(PTR_DAT_04cb0430);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bb3c = 1;
  }
  puVar2 = PTR_DAT_04cab1e8;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cad948,0);
    if (lVar8 == 0) {
LAB_022d0f98:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar8,*(undefined8 *)PTR_DAT_04cb0428,0);
    if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
    }
    uVar9 = Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar6,*(undefined8 *)PTR_DAT_04cb0430,0);
    uVar9 = NEON_fminnm(uVar9,_UNK_00e207cc);
    uVar6 = Dino_BusSand_App_UI_GiftPackUi__Wait_21ab7e4(uVar9,0);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar8 == 0) goto LAB_022d0f98;
    plVar3 = (long *)(lVar8 + 0x38);
    lVar7 = *plVar3;
    *plVar3 = 0;
    thunk_FUN_02134474(plVar3,0);
    if (*(int *)(*(long *)PTR_DAT_04caef48 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar8,0);
    if ((lVar4 == 0) ||
       (uVar5 = Dino_BusSand_App_Meta_PassportFeature__HaveBonusBankUnClaimedReward_224734c(lVar4,0)
       , (uVar5 & 1) == 0)) {
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      }
    }
    else {
      Dino_BusSand_App_UI_PassportUi__OpenBonusBank_21d0f9c(lVar7);
    }
  }
  return iVar1 == 0;
}

