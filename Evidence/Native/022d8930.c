/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$FinishAppend
void Dino_BusSand_App_UI_PassportPanel__FinishAppend (Dino_BusSand_App_UI_PassportPanel_o* __this, int32_t lastBefore, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$FinishAppend
   void Dino_BusSand_App_UI_PassportPanel__FinishAppend (Dino_BusSand_App_UI_PassportPanel_o*
   __this, int32_t lastBefore, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__FinishAppend_21d8930(long param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  
  if ((bRam0000000004f9bb6a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadc80);
                    /* try { // try from 022d8998 to 023d89bb has its CatchHandler @ 022d8844 */
    FUN_02132f7c(PTR_DAT_04cb0898);
    FUN_02132f7c(PTR_DAT_04cb08a0);
    FUN_02132f7c(PTR_DAT_04cb08a8);
                    /* try { // try from 022d89bc to 023d89bf has its CatchHandler @ 022d89c4 */
                    /* try { // try from 022d89c0 to 023d89c3 has its CatchHandler @ 022d89d8 */
                    /* catch() { ... } // from try @ 022d88a4 with catch @ 022d89c4
                       catch() { ... } // from try @ 022d89bc with catch @ 022d89c4
                       try { // try from 022d89c4 to 023d89eb has its CatchHandler @ 022d8844 */
    FUN_02132f7c(PTR_DAT_04cb08b0);
    bRam0000000004f9bb6a = 1;
  }
  if (*(char *)(param_1 + 0x49) == '\0') {
    return;
  }
                    /* catch() { ... } // from try @ 022d8924 with catch @ 022d89d8
                       catch() { ... } // from try @ 022d89c0 with catch @ 022d89d8 */
  if (*(long *)(param_1 + 0x40) != 0) {
    Dino_BusSand_App_Meta_PassportFeature__CommitPendingKeys_224785c(*(long *)(param_1 + 0x40),0);
    if (*(long *)(param_1 + 0x40) != 0) {
      Dino_BusSand_App_Meta_PassportFeature__SetPendingKeysCommitDirty_22478ec
                (*(long *)(param_1 + 0x40),0,0);
      Dino_BusSand_App_UI_PassportPanel__BlockInput_21d87cc(param_1,0);
      if (*(char *)(param_1 + 0x48) != '\0') {
        return;
      }
      Dino_BusSand_App_UI_PassportPanel__RefreshAll_21d42e8(param_1);
      if (*(long *)(param_1 + 0x40) != 0) {
        uVar10 = Dino_BusSand_App_Meta_PassportFeature__IsReachBonusBank_2246e10
                           (*(long *)(param_1 + 0x40),0);
        if ((uVar10 & 1) != 0) {
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_022d8bbc;
          iVar9 = Dino_BusSand_App_Meta_PassportFeature__get_StageCount_22449e0
                            (*(long *)(param_1 + 0x40),0);
          if (param_2 < iVar9 + -1) {
            uVar13 = *(undefined8 *)(param_1 + 0x70);
            if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar13,*(undefined8 *)PTR_DAT_04cb08a0,0);
          }
        }
        Dino_BusSand_App_UI_PassportPanel__ScrollToCurrent_21d44b0(param_1);
        uVar12 = param_2 + 1U & ((int)(param_2 + 1U) >> 0x1f ^ 0xffffffffU);
        iVar9 = Dino_BusSand_App_UI_PassportPanel__get_LastUnlocked_21d5284(param_1);
        puVar8 = PTR_DAT_04cb08b0;
        puVar7 = PTR_DAT_04cb08a8;
        puVar6 = PTR_DAT_04cb0898;
        puVar5 = PTR_DAT_04caec68;
        puVar4 = PTR_DAT_04cadc80;
        puVar3 = PTR_DAT_04cad7c8;
        puVar2 = PTR_DAT_04ca9ae8;
        if (iVar9 < (int)uVar12) {
          return;
        }
        while (lVar11 = *(long *)(param_1 + 0x78), lVar11 != 0) {
          if (*(int *)(lVar11 + 0x18) <= (int)uVar12) {
            return;
          }
          lVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar11,uVar12,*(undefined8 *)puVar3);
          if (lVar11 == 0) break;
          lVar11 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)puVar4,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar10 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
          if ((uVar10 & 1) == 0) {
            if (lVar11 == 0) break;
            uVar13 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)puVar7,0);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar5);
            }
            Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar13,*(undefined8 *)puVar8,0);
            uVar13 = UnityEngine_Transform__Find_43d4bec(lVar11,*(undefined8 *)puVar6,0);
            Dino_BusSand_App_UI_GiftPackUi__Play_21ada68(uVar13,*(undefined8 *)puVar8,0);
          }
          iVar9 = Dino_BusSand_App_UI_PassportPanel__get_LastUnlocked_21d5284(param_1);
          bVar1 = iVar9 <= (int)uVar12;
          uVar12 = uVar12 + 1;
          if (bVar1) {
            return;
          }
        }
      }
    }
  }
LAB_022d8bbc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

