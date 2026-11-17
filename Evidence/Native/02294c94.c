/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$RefreshReward
void Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshReward (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$RefreshReward
   void Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshReward
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleScenePanel__RefreshReward_2194c94(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 extraout_x1;
  
  if ((bRam0000000004f9b9bb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caddf0);
    FUN_02132f7c(PTR_DAT_04cade10);
    bRam0000000004f9b9bb = 1;
  }
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_RewardPool_22210ac
                        (*(long *)(param_1 + 0x40),0), puVar4 = PTR_DAT_04cadda0,
     puVar3 = PTR_DAT_04cac7b8, puVar2 = PTR_DAT_04ca9ae8, lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
    return;
  }
  uVar5 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                    (lVar6,0,*(undefined8 *)PTR_DAT_04cadda0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 02294d70 to 02394f6b has its CatchHandler @ 02294d70
                       catch() { ... } // from try @ 02294d70 with catch @ 02294d70
                       catch() { ... } // from try @ 02294fd8 with catch @ 02294d70 */
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar7 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(uVar5,1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_04cade10;
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar8 & 1) != 0) {
    Dino_BusSand_App_UI_UIPanel__Img_2200bc8(param_1,*(undefined8 *)PTR_DAT_04caddf0,uVar7,0);
  }
  lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
            (lVar6,0,*(undefined8 *)puVar4);
  uVar7 = Dino_BusSand_App_UI_BattleRoyaleUi__Amount_219b820(extraout_x1,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48,uVar7,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9f8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
  if ((uVar8 & 1) == 0) {
    if ((lVar9 == 0) ||
       (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar9,1,*(undefined8 *)PTR_DAT_04cada48), lVar6 == 0)) {
LAB_0229a1f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      lVar9 = 0;
      do {
        if (uVar1 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar10 = *(long **)(lVar6 + 0x20 + lVar9 * 8);
        if (plVar10 == (long *)0x0) goto LAB_0229a1f0;
        (**(code **)(*plVar10 + 0x518))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x520));
        uVar1 = *(uint *)(lVar6 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
  }
  return;
}

