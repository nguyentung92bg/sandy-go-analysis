/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel$$SetItem
void Dino_BusSand_App_UI_PassportFinishGetPanel__SetItem (UnityEngine_Transform_o* t, Dino_BusSand_App_Meta_PassportFeature_Reward_o r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel$$SetItem
   void Dino_BusSand_App_UI_PassportFinishGetPanel__SetItem (UnityEngine_Transform_o* t,
   Dino_BusSand_App_Meta_PassportFeature_Reward_o r, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportFinishGetPanel__SetItem_21d0780(long param_1,int *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  
  if ((bRam0000000004f9bb38 & 1) == 0) {
                    /* try { // try from 022d07a8 to 023d093f has its CatchHandler @ 022d0b80 */
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab490);
    FUN_02132f7c(PTR_DAT_04cb03d8);
    FUN_02132f7c(PTR_DAT_04cad978);
    FUN_02132f7c(PTR_DAT_04cb03e0);
    FUN_02132f7c(PTR_DAT_04cb03e8);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb03f0);
    FUN_02132f7c(PTR_DAT_04cb03f8);
    FUN_02132f7c(PTR_DAT_04cb0400);
    FUN_02132f7c(PTR_DAT_04cb0408);
    FUN_02132f7c(PTR_DAT_04cb0410);
    FUN_02132f7c(PTR_DAT_04cb0418);
    bRam0000000004f9bb38 = 1;
  }
  puVar4 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    lVar8 = UnityEngine_Transform__Find_43d4bec(param_1,*(undefined8 *)PTR_DAT_04cadc80,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar4);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
    if ((uVar9 & 1) == 0) {
      if (lVar8 == 0) goto LAB_022d0c14;
      iVar3 = *param_2;
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0418,0);
      puVar5 = PTR_DAT_04caec68;
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      bVar7 = iVar3 == 0x3e9;
      bVar1 = !bVar7;
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar7,0);
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb03e8,0);
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar7,0);
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0410,0);
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar7,0);
      puVar6 = PTR_DAT_04cb03d8;
                    /* try { // try from 022d0974 to 023d0b5f has its CatchHandler @ 022d0b78 */
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb03d8,0);
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar1,0);
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb0408,0);
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar1,0);
      uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)PTR_DAT_04cb03f0,0);
      Dino_BusSand_App_UI_GiftPackUi__SetActive_21a95f8(uVar10,bVar1,0);
      if ((*(byte *)(param_2 + 4) & 1) == 0) {
        uVar10 = System_Int64__ToString_482e7e4(param_2 + 2,0);
        if (iVar3 != 0x3e9) {
          uVar10 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cad978,uVar10,0);
        }
      }
      else {
        uVar10 = *(undefined8 *)(param_2 + 2);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar10 = Dino_BusSand_App_UI_GiftPackUi__TimeItemText_21ad894(uVar10,0);
      }
      puVar2 = (undefined8 *)PTR_DAT_04cb03e0;
      if (iVar3 != 0x3e9) {
        puVar2 = (undefined8 *)PTR_DAT_04cb0400;
      }
      uVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*puVar2,0);
      lVar12 = *(long *)puVar5;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar12);
      }
      Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar11,uVar10,0);
      if (iVar3 != 0x3e9) {
        uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)puVar6,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
        plVar13 = (long *)0x0;
        if ((uVar9 & 1) != 0) {
          lVar8 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)puVar6,0);
          if (lVar8 == 0) goto LAB_022d0c14;
          plVar13 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                      (lVar8,*(undefined8 *)PTR_DAT_04cad788);
        }
        if ((*(byte *)(param_2 + 4) & 1) == 0) {
          iVar3 = *param_2;
          if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = Dino_BusSand_App_UI_CommerceUi__ItemIcon_22a80e8(iVar3,0,0);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_04cab490 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = Dino_BusSand_App_UiAssets__Sprite_21636c4(*(undefined8 *)PTR_DAT_04cb03f8,0);
        }
                    /* try { // try from 022d0b60 to 023d0bbb has its CatchHandler @ 022d0564 */
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* catch() { ... } // from try @ 022d05f0 with catch @ 022d0b74 */
        uVar9 = UnityEngine_Object__op_Inequality_43c8dec(plVar13,0,0);
                    /* catch() { ... } // from try @ 022d0974 with catch @ 022d0b78 */
        if ((uVar9 & 1) != 0) {
                    /* catch() { ... } // from try @ 022d070c with catch @ 022d0b7c */
                    /* catch() { ... } // from try @ 022d0660 with catch @ 022d0b80
                       catch() { ... } // from try @ 022d07a8 with catch @ 022d0b80 */
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
          if ((uVar9 & 1) != 0) {
            if (plVar13 != (long *)0x0) {
              UnityEngine_UI_Image__set_sprite_44a7258(plVar13,uVar10,0);
                    /* try { // try from 022d0bc4 to 023d0c4f has its CatchHandler @ 022d0bc4
                       catch() { ... } // from try @ 022d0bc4 with catch @ 022d0bc4
                       catch() { ... } // from try @ 022d11c0 with catch @ 022d0bc4 */
              (**(code **)(*plVar13 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar13,
                         *(undefined8 *)(*plVar13 + 0x2b0));
              puVar4 = PTR_DAT_04cfca30;
              if ((bRam0000000004faae31 & 1) == 0) {
                FUN_02132f7c(PTR_DAT_04cfca30,1,0);
                bRam0000000004faae31 = 1;
              }
              uVar9 = UnityEngine_UI_SetPropertyUtility__SetStruct_bool__28b837c
                                ((long)plVar13 + 0xec,1,*(undefined8 *)puVar4);
              if ((uVar9 & 1) == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x045afb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar13 + 0x2f8))(plVar13,*(undefined8 *)(*plVar13 + 0x300));
              return;
            }
            goto LAB_022d0c14;
          }
        }
      }
    }
    return;
  }
LAB_022d0c14:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

