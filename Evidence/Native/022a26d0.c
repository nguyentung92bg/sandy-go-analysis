/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$BuildRewardBubble
void Dino_BusSand_App_UI_ClimbTowerItemView__BuildRewardBubble (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$BuildRewardBubble
   void Dino_BusSand_App_UI_ClimbTowerItemView__BuildRewardBubble
   (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerItemView__BuildRewardBubble_21a26d0(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba25 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cadb30);
    FUN_02132f7c(PTR_DAT_04cae8a0);
    FUN_02132f7c(PTR_DAT_04cae8a8);
    FUN_02132f7c(PTR_DAT_04cae8b0);
    FUN_02132f7c(PTR_DAT_04cae8b8);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae8c0);
    FUN_02132f7c(PTR_DAT_04cae8c8);
    bRam0000000004f9ba25 = 1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  lVar9 = Dino_BusSand_App_Meta_StreakTowerUtil__Rewards_2251c7c(*(undefined4 *)(param_1 + 0x38),0);
  puVar7 = PTR_DAT_04cae8c8;
  puVar6 = PTR_DAT_04cae8c0;
  puVar5 = PTR_DAT_04cae8b0;
  puVar4 = PTR_DAT_04cadb30;
  if (lVar9 != 0) {
    iVar1 = *(int *)(lVar9 + 0x18);
    if (0 < iVar1) {
      iVar17 = 0;
      do {
        lVar10 = *(long *)(param_1 + 0x90);
        if (lVar10 == 0) goto LAB_022a2ae0;
        if (iVar17 < *(int *)(lVar10 + 0x18)) {
          lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                             (lVar10,iVar17,*(undefined8 *)PTR_DAT_04cae8b8);
        }
        else {
          if (*(long *)(param_1 + 0x70) == 0) goto LAB_022a2ae0;
          uVar16 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x70),0);
          if (*(long *)(param_1 + 0x70) == 0) goto LAB_022a2ae0;
          uVar13 = UnityEngine_Transform__get_parent_43d0d70(*(long *)(param_1 + 0x70),0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar3);
          }
          lVar10 = UnityEngine_Object__Instantiate_object__2805310
                             (uVar16,uVar13,0,*(undefined8 *)PTR_DAT_04cad390);
          lVar12 = *(long *)(param_1 + 0x90);
          if (lVar12 == 0) goto LAB_022a2ae0;
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar15 = *(long *)puVar4;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_022a2ae0;
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            plVar11 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
            *plVar11 = lVar10;
            thunk_FUN_02134474(plVar11,lVar10);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar12,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (lVar10 == 0) goto LAB_022a2ae0;
        UnityEngine_GameObject__SetActive_43c1408(lVar10,1,0);
        lVar12 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
        if (lVar12 == 0) goto LAB_022a2ae0;
        uVar16 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)puVar6,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
        lVar12 = 0;
        if ((uVar8 & 1) != 0) {
          lVar12 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
          if ((lVar12 == 0) ||
             (lVar12 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)puVar6,0),
             lVar12 == 0)) goto LAB_022a2ae0;
          lVar12 = UnityEngine_Component__GetComponent_object__26f97e8
                             (lVar12,*(undefined8 *)PTR_DAT_04cad788);
        }
        System_Collections_Generic_List_ActivityRewardEntry___get_Item_39e19e0
                  (&uStack_78,lVar9,iVar17,*(undefined8 *)puVar5);
        uStack_88 = uStack_70;
        uStack_90 = uStack_78;
        uStack_80 = uStack_68;
        uVar16 = Dino_BusSand_App_Meta_StreakTowerUtil__RewardIcon_2252390(&uStack_90,1,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar16,0,0);
          if ((uVar8 & 1) != 0) {
            if (lVar12 == 0) goto LAB_022a2ae0;
            UnityEngine_UI_Image__set_sprite_44a7258(lVar12,uVar16,0);
          }
        }
        lVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
        if (lVar10 == 0) goto LAB_022a2ae0;
        uVar16 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)puVar7,0);
        System_Collections_Generic_List_ActivityRewardEntry___get_Item_39e19e0
                  (&uStack_78,lVar9,iVar17,*(undefined8 *)puVar5);
        uStack_a8 = uStack_70;
        uStack_b0 = uStack_78;
        uStack_a0 = uStack_68;
        uVar13 = Dino_BusSand_App_Meta_StreakTowerUtil__ValueString_2252014(&uStack_b0,0);
        Dino_BusSand_App_UI_ClimbTowerItemView__SetTexts_21a15f0(uVar16,uVar13);
        iVar1 = *(int *)(lVar9 + 0x18);
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar1);
    }
    puVar3 = PTR_DAT_04cae8b8;
    lVar9 = *(long *)(param_1 + 0x90);
    while (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) <= iVar1) {
        return;
      }
      lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar9,iVar1,*(undefined8 *)puVar3);
      if (lVar9 == 0) break;
      UnityEngine_GameObject__SetActive_43c1408(lVar9,0,0);
      iVar1 = iVar1 + 1;
      lVar9 = *(long *)(param_1 + 0x90);
    }
  }
LAB_022a2ae0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

