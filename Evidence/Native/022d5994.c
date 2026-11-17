/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$RefreshStage
void Dino_BusSand_App_UI_PassportPanel__RefreshStage (Dino_BusSand_App_UI_PassportPanel_o* __this, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$RefreshStage
   void Dino_BusSand_App_UI_PassportPanel__RefreshStage (Dino_BusSand_App_UI_PassportPanel_o*
   __this, int32_t i, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__RefreshStage_21d5994(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_54;
  
  iStack_54 = param_2;
  if ((bRam0000000004f9bb5a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0700);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cb03b0);
    FUN_02132f7c(PTR_DAT_04cad7c8);
                    /* try { // try from 022d59fc to 023d5b8f has its CatchHandler @ 022d5dc8 */
    FUN_02132f7c(PTR_DAT_04cb03b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0708);
    FUN_02132f7c(PTR_DAT_04cb0710);
    FUN_02132f7c(PTR_DAT_04cb0718);
    FUN_02132f7c(PTR_DAT_04cb03d8);
    FUN_02132f7c(PTR_DAT_04cb0720);
    FUN_02132f7c(PTR_DAT_04cb0728);
    FUN_02132f7c(PTR_DAT_04cb0730);
    FUN_02132f7c(PTR_DAT_04cb0738);
    FUN_02132f7c(PTR_DAT_04cb0740);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb0748);
    FUN_02132f7c(PTR_DAT_04cb0750);
    FUN_02132f7c(PTR_DAT_04cb06d8);
    FUN_02132f7c(PTR_DAT_04cb0758);
    FUN_02132f7c(PTR_DAT_04cb0760);
    FUN_02132f7c(PTR_DAT_04cb0768);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04cb0770);
    FUN_02132f7c(PTR_DAT_04cb0778);
    bRam0000000004f9bb5a = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                        (*(long *)(param_1 + 0x78),param_2,*(undefined8 *)PTR_DAT_04cad7c8),
     puVar1 = PTR_DAT_04ca9ae8, lVar8 != 0)) {
    lVar8 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cadc80,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (uVar4 = Dino_BusSand_App_Meta_PassportFeature__IsStageUnlocked_2246c88
                          (*(long *)(param_1 + 0x40),param_2,0), lVar8 != 0)) {
      lVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0758,0);
      puVar2 = PTR_DAT_04caec68;
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
                    /* try { // try from 022d5bc4 to 023d5d57 has its CatchHandler @ 022d5dc0 */
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar10,uVar4 & 1,0);
      puVar3 = PTR_DAT_04cb0740;
      uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0740,0);
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,(uVar4 ^ 0xffffffff) & 1,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
      lVar14 = 0;
      if ((uVar9 & 1) != 0) {
        if (lVar10 == 0) goto LAB_022d62b0;
        lVar14 = UnityEngine_Component__GetComponent_object__26f97e8
                           (lVar10,*(undefined8 *)PTR_DAT_04cb0700);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
      if ((uVar9 & 1) != 0) {
        if (cRam0000000004f9bba3 == '\0') {
          FUN_02132f7c(PTR_DAT_04cb0780);
          cRam0000000004f9bba3 = '\x01';
        }
        if (lVar14 == 0) goto LAB_022d62b0;
        puVar13 = *(undefined4 **)(*(long *)PTR_DAT_04cb0780 + 0xb8);
        UnityEngine_UI_RectMask2D__set_padding_468ce5c
                  (*puVar13,puVar13[1],puVar13[2],puVar13[3],lVar14,0);
      }
      if (param_2 == 0) {
        uVar11 = *(undefined8 *)PTR_DAT_04ca9c30;
      }
      else {
        uVar11 = System_Int32__ToString_482d750(&iStack_54,0);
      }
      uVar12 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0770,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar12,uVar11,0);
      uVar12 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0768,0);
      Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar12,uVar11,0);
      uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0718,0);
                    /* try { // try from 022d5d58 to 023d5e03 has its CatchHandler @ 022d57c4 */
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,iStack_54 == 0,0);
      uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0720,0);
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,iStack_54 == 0,0);
      lVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0710,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022d5850 with catch @ 022d5dbc */
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
                    /* catch() { ... } // from try @ 022d5bc4 with catch @ 022d5dc0 */
                    /* catch() { ... } // from try @ 022d5960 with catch @ 022d5dc4 */
                    /* catch() { ... } // from try @ 022d58c0 with catch @ 022d5dc8
                       catch() { ... } // from try @ 022d59fc with catch @ 022d5dc8 */
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
      if ((uVar9 & 1) != 0) {
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (lVar14 = Dino_BusSand_App_Meta_PassportFeature__FreeRewards_2245140
                               (*(long *)(param_1 + 0x40),iStack_54,0), lVar14 == 0))
        goto LAB_022d62b0;
        if (*(int *)(lVar14 + 0x18) < 1) {
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
        }
        else {
                    /* try { // try from 022d5e0c to 023d5e97 has its CatchHandler @ 022d5e0c
                       catch() { ... } // from try @ 022d5e0c with catch @ 022d5e0c
                       catch() { ... } // from try @ 022d63a0 with catch @ 022d5e0c */
          System_Collections_Generic_List_PassportFeature_Reward___get_Item_3b58010
                    (&uStack_78,lVar14,0,*(undefined8 *)PTR_DAT_04cb03b8);
        }
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_022d62b0;
        uVar5 = Dino_BusSand_App_Meta_PassportFeature__FreeBox_2245294
                          (*(long *)(param_1 + 0x40),iStack_54,0);
        uStack_a8 = uStack_70;
        uStack_b0 = uStack_78;
        uStack_a0 = uStack_68;
        Dino_BusSand_App_UI_PassportUi__SetReward_21d6c1c(lVar10,&uStack_b0,uVar5);
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (uVar6 = Dino_BusSand_App_Meta_PassportFeature__CanClaimFree_2247144
                              (*(long *)(param_1 + 0x40),iStack_54,0), lVar10 == 0))
        goto LAB_022d62b0;
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cb06d8,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 022d5e98 to 023d5eab has its CatchHandler @ 022d6404 */
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,uVar6 & 1,0);
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cb0738,0);
        if ((uVar4 & 1) == 0) {
          uVar7 = 0;
        }
        else {
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_022d62b0;
          uVar7 = Dino_BusSand_App_Meta_PassportFeature__IsFreeClaimed_2246fe4
                            (*(long *)(param_1 + 0x40),iStack_54,0);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 022d5f08 to 023d5f4f has its CatchHandler @ 022d6410 */
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,uVar7 & 1,0);
        uVar11 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cb0728,0);
        Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,uVar6 & 1,0);
      }
      lVar8 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0750,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
      if ((uVar9 & 1) == 0) {
        return;
      }
      if (lVar8 != 0) {
        lVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0778,0);
        lVar14 = *(long *)puVar2;
        if (iStack_54 == 0) {
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar14);
          }
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar10,1,0);
          uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb03d8,0);
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,0,0);
                    /* try { // try from 022d6044 to 023d61d7 has its CatchHandler @ 022d6410 */
          uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0708,0);
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,0,0);
          uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0748,0);
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,0,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
          uVar11 = 0;
          if ((uVar9 & 1) != 0) {
            if (lVar10 == 0) goto LAB_022d62b0;
            uVar11 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cb0730,0);
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,0,0);
        }
        else {
          if (*(int *)(lVar14 + 0xe4) == 0) {
                    /* try { // try from 022d5fa8 to 023d601b has its CatchHandler @ 022d640c */
            thunk_FUN_0218fdac(lVar14);
          }
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar10,0,0);
          if ((*(long *)(param_1 + 0x40) == 0) ||
             (lVar10 = Dino_BusSand_App_Meta_PassportFeature__PassRewards_2245198
                                 (*(long *)(param_1 + 0x40),iStack_54,0), lVar10 == 0))
          goto LAB_022d62b0;
          if (*(int *)(lVar10 + 0x18) < 1) {
            uStack_90 = 0;
            uStack_88 = 0;
            uStack_80 = 0;
          }
          else {
            System_Collections_Generic_List_PassportFeature_Reward___get_Item_3b58010
                      (&uStack_90,lVar10,0,*(undefined8 *)PTR_DAT_04cb03b8);
          }
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_022d62b0;
          uVar5 = Dino_BusSand_App_Meta_PassportFeature__PassBox_22452ec
                            (*(long *)(param_1 + 0x40),iStack_54,0);
          uStack_c8 = uStack_88;
          uStack_d0 = uStack_90;
          uStack_c0 = uStack_80;
          Dino_BusSand_App_UI_PassportUi__SetReward_21d6c1c(lVar8,&uStack_d0,uVar5);
        }
        lVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)puVar3,0);
        if (*(long *)(param_1 + 0x40) != 0) {
          uVar6 = Dino_BusSand_App_Meta_PassportFeature__get_HavePurchasedPassport_2246400
                            (*(long *)(param_1 + 0x40),0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(lVar10,(uVar6 ^ 0xffffffff) & 1,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
          uVar11 = 0;
          if ((uVar9 & 1) != 0) {
            if (lVar10 == 0) goto LAB_022d62b0;
            uVar11 = UnityEngine_Transform__Find_43d4bec(lVar10,*(undefined8 *)PTR_DAT_04cb0760,0);
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,0,0);
          uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb06d8,0);
          if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 022d620c to 023d639f has its CatchHandler @ 022d6408 */
            uVar6 = Dino_BusSand_App_Meta_PassportFeature__CanClaimPass_2247180
                              (*(long *)(param_1 + 0x40),iStack_54,0);
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,uVar6 & 1,0);
            uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0738,0);
            if ((uVar4 & 1) == 0) {
              uVar4 = 0;
            }
            else {
              if (*(long *)(param_1 + 0x40) == 0) goto LAB_022d62b0;
              uVar4 = Dino_BusSand_App_Meta_PassportFeature__IsPassClaimed_2247094
                                (*(long *)(param_1 + 0x40),iStack_54,0);
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar11,uVar4 & 1,0);
            return;
          }
        }
      }
    }
  }
LAB_022d62b0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

