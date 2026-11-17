/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$SmallRewards
void Dino_BusSand_App_UI_DailyGiftPanel__SmallRewards (Dino_BusSand_App_UI_DailyGiftPanel_o* __this, UnityEngine_RectTransform_o* node, System_Collections_Generic_List_KeyValuePair_int__long___o* get, int32_t state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.DailyGiftPanel$$SmallRewards
   void Dino_BusSand_App_UI_DailyGiftPanel__SmallRewards (Dino_BusSand_App_UI_DailyGiftPanel_o*
   __this, UnityEngine_RectTransform_o* node,
   System_Collections_Generic_List_KeyValuePair_int__long___o* get, int32_t state, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_DailyGiftPanel__SmallRewards_232b284
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam0000000004f9c5fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb8dc0);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cb8d68);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04cb8d90);
    bRam0000000004f9c5fa = 1;
  }
  puVar4 = PTR_DAT_04cb8dc0;
  if (param_3 != 0) {
    iVar2 = *(int *)(param_3 + 0x18);
    iVar1 = iVar2;
    if (1 < iVar2) {
      iVar1 = 2;
    }
    if (0 < iVar2) {
      iVar10 = 0;
      fVar14 = 1.0;
      if (iVar2 != 1) {
        fVar14 = _UNK_00e20994;
      }
      fVar12 = 45.0;
      if (iVar2 != 1) {
        fVar12 = 38.0;
      }
      do {
        auVar16 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                            (param_3,iVar10,*(undefined8 *)PTR_DAT_04cadda0);
        uVar8 = auVar16._8_8_;
        uVar5 = auVar16._0_8_;
        fVar15 = -55.0;
        if (iVar10 != 0) {
          fVar15 = 55.0;
        }
        fVar13 = 0.0;
        if (iVar2 != 1) {
          fVar13 = fVar15;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = Dino_BusSand_App_UI_DailyGiftPanel__RewardImage_232b58c
                          (fVar14 * *(float *)(&UNK_00e6a880 +
                                              (ulong)((uVar5 & 0xffffffff) == 0x3e9) * 4),param_2,
                           uVar5,uVar8);
        if ((lVar6 == 0) ||
           (lVar6 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(lVar6,0), lVar6 == 0))
        goto LAB_0242b570;
        uVar11 = 0xc20c0000;
        if ((uVar5 & 0xffffffff) != 0x3e9) {
          uVar11 = 0xc1f00000;
        }
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar13,uVar11,lVar6,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = Dino_BusSand_App_UI_DailyGiftPanel__Amount_232b77c(fVar12,param_2,uVar5,uVar8);
        if ((lVar6 == 0) || (lVar7 = TMPro_TMP_Text__get_rectTransform_42cd6a4(lVar6,0), lVar7 == 0)
           ) goto LAB_0242b570;
        fVar13 = 45.0;
        if (iVar2 != 1) {
          fVar13 = fVar15 + 18.0;
        }
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(fVar13,0xc2b20000,lVar7,0);
        if (param_4 == 1) {
          uStack_d8 = 0;
          uStack_d0 = 0;
          lVar7 = *(long *)(param_1 + 0x88);
          uStack_c8 = 0;
          System_ValueTuple_object__KeyValuePair_int__long_____ctor_30e9be4
                    (&uStack_d8,lVar6,uVar5,uVar8,*(undefined8 *)PTR_DAT_04cb8d90);
          if (lVar7 == 0) goto LAB_0242b570;
          lVar6 = *(long *)(lVar7 + 0x10);
          lVar9 = *(long *)PTR_DAT_04cb8d68;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_0242b570;
          uVar3 = *(uint *)(lVar7 + 0x18);
          if (uVar3 < *(uint *)(lVar6 + 0x18)) {
            lVar6 = lVar6 + (long)(int)uVar3 * 0x18;
            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar6 + 0x30) = uStack_c8;
            *(undefined8 *)(lVar6 + 0x28) = uStack_d0;
            *(undefined8 *)(lVar6 + 0x20) = uStack_d8;
            thunk_FUN_02134474(lVar6 + 0x20,0);
          }
          else {
            uStack_b8 = uStack_d0;
            uStack_c0 = uStack_d8;
            uStack_b0 = uStack_c8;
            System_Collections_Generic_List_ValueTuple_object__KeyValuePair_int__long_____AddWithResize_39b3f04
                      (lVar7,&uStack_c0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar1 != iVar10);
    }
    return;
  }
LAB_0242b570:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

