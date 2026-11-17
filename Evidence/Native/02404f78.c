/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel.<>c__DisplayClass44_0$$<SetupAvatarItem>b__0
void Dino_BusSand_App_UI_PlayerSettingPanel___c__DisplayClass44_0___SetupAvatarItem_b__0 (Dino_BusSand_App_UI_PlayerSettingPanel___c__DisplayClass44_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel.<>c__DisplayClass44_0$$<SetupAvatarItem>b__0
   void Dino_BusSand_App_UI_PlayerSettingPanel___c__DisplayClass44_0___SetupAvatarItem_b__0
   (Dino_BusSand_App_UI_PlayerSettingPanel___c__DisplayClass44_0_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_PlayerSettingPanel___c__DisplayClass44_0___SetupAvatarItem_b__0_2304f78
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar3 = PTR_DAT_04cae570;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  if ((bRam0000000004f9c4de & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7dc8);
    FUN_02132f7c(PTR_DAT_04cb7dd0);
    FUN_02132f7c(PTR_DAT_04cb7dd8);
    FUN_02132f7c(PTR_DAT_04cb7de0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cb7ab8);
    bRam0000000004f9c4de = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  uStack_50 = 0;
  uStack_58 = 0;
  lStack_48 = 0;
  Dino_BusSand_App_UI_PlayerSettingPanel__HideLockTips_23028d8(lVar9);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_PlayerIdentity__SetHeadIcon_226c424(uVar6,0);
  uVar10 = *(undefined8 *)(lVar9 + 0x78);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar8 & 1) != 0) {
    lVar11 = *(long *)(lVar9 + 0x78);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIcon_226beb4(0);
    if (lVar11 == 0) goto LAB_02403008;
    Dino_BusSand_App_UI_CommonHeadView__RefreshHead_22cf440(lVar11,uVar6,0);
  }
  puVar5 = PTR_DAT_04cb7dd0;
  puVar4 = PTR_DAT_04cb7dc8;
  puVar2 = PTR_DAT_04cb7ab8;
  if (*(long *)(lVar9 + 0x60) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_58,*(long *)(lVar9 + 0x60),*(undefined8 *)PTR_DAT_04cb7de0);
    while( true ) {
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_58,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_58,*(undefined8 *)puVar4);
        return;
      }
      if (lStack_48 == 0) break;
      uVar10 = *(undefined8 *)(lStack_48 + 0x28);
      iVar1 = *(int *)(lStack_48 + 0x10);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar7 = Dino_BusSand_App_Meta_PlayerIdentity__get_HeadIcon_226beb4(0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_PlayerSettingPanel__SetActive_230125c(uVar10,iVar1 == iVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02403008:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

