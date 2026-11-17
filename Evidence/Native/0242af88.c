/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$Day7Rewards
void Dino_BusSand_App_UI_DailyGiftPanel__Day7Rewards (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, UnityEngine_RectTransform_o* node, System_Collections_Generic_List_KeyValuePair_int__long___o* get, int32_t state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$Day7Rewards
   void Dino_BusSand_App_UI_DailyGiftPanel__Day7Rewards (Dino_BusSand_App_UI_DailyGiftPanel_o*
   __this, UnityEngine_RectTransform_o* node,
   System_Collections_Generic_List_KeyValuePair_int__long___o* get, int32_t state, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_DailyGiftPanel__Day7Rewards_232af88
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((bRam0000000004f9c5fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8dc0);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cb8d68);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04cb8d90);
    bRam0000000004f9c5fb = 1;
  }
  puVar3 = PTR_DAT_04cadda0;
  if (param_3 != 0) {
    iVar12 = *(int *)(param_3 + 0x18);
    if (iVar12 < 2) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = 0.0;
      iVar11 = 0;
      do {
        iVar4 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                          (param_3,iVar11,*(undefined8 *)puVar3);
        iVar12 = *(int *)(param_3 + 0x18);
        iVar1 = iVar11 + 2;
        fVar9 = 174.0;
        if (iVar4 != 0x3e9) {
          fVar9 = 128.0;
        }
        iVar11 = iVar11 + 1;
        fVar14 = fVar14 + fVar9;
      } while (iVar1 < iVar12);
      fVar14 = fVar14 * 0.5;
    }
    if (0 < iVar12) {
      iVar12 = 0;
      fVar14 = 11.0 - fVar14;
      do {
        auVar15 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                            (param_3,iVar12,*(undefined8 *)puVar3);
        uVar8 = auVar15._8_8_;
        uVar5 = auVar15._0_8_;
        uVar13 = uVar5 & 0xffffffff;
        if (*(int *)(*(long *)PTR_DAT_04cb8dc0 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = Dino_BusSand_App_UI_DailyGiftPanel__RewardImage_232b58c
                          (*(undefined4 *)(&UNK_00e69f50 + (ulong)(uVar13 == 0x3e9) * 4),param_2,
                           uVar5,uVar8);
        if ((lVar6 == 0) ||
           (lVar6 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar6,0), lVar6 == 0))
        goto LAB_0242b280;
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar14,0xc1b00000,lVar6,0);
        lVar6 = Dino_BusSand_App_UI_DailyGiftPanel__Amount_232b77c(0x42340000,param_2,uVar5,uVar8);
        if ((lVar6 == 0) || (lVar7 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar6,0), lVar7 == 0)
           ) goto LAB_0242b280;
        fVar9 = 38.0;
        if (uVar13 != 0x3e9) {
          fVar9 = 30.0;
        }
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar14 + fVar9,0xc2940000,lVar7,0);
        if (param_4 == 1) {
          uStack_b8 = 0;
          uStack_b0 = 0;
          lVar7 = *(long *)(param_1 + 0x88);
          uStack_a8 = 0;
          System_ValueTuple_object__KeyValuePair_int__long_____ctor_30e9be4
                    (&uStack_b8,lVar6,uVar5,uVar8,*(undefined8 *)PTR_DAT_04cb8d90);
          if (lVar7 == 0) goto LAB_0242b280;
          lVar6 = *(long *)(lVar7 + 0x10);
          lVar10 = *(long *)PTR_DAT_04cb8d68;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_0242b280;
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar2 * 0x18;
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar6 + 0x30) = uStack_a8;
            *(undefined8 *)(lVar6 + 0x28) = uStack_b0;
            *(undefined8 *)(lVar6 + 0x20) = uStack_b8;
            thunk_FUN_02134474(lVar6 + 0x20,0);
          }
          else {
            uStack_98 = uStack_b0;
            uStack_a0 = uStack_b8;
            uStack_90 = uStack_a8;
            System_Collections_Generic_List_ValueTuple_object__KeyValuePair_int__long_____AddWithResize_39b3f04
                      (lVar7,&uStack_a0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        fVar9 = 174.0;
        iVar12 = iVar12 + 1;
        if (uVar13 != 0x3e9) {
          fVar9 = 128.0;
        }
        if (*(int *)(param_3 + 0x18) <= iVar12) {
          fVar9 = -0.0;
        }
        fVar14 = fVar14 + fVar9;
      } while (iVar12 < *(int *)(param_3 + 0x18));
    }
    return;
  }
LAB_0242b280:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

