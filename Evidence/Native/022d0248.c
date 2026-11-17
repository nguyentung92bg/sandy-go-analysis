/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel$$Build
void Dino_BusSand_App_UI_PassportFinishGetPanel__Build (Dino_BusSand_App_UI_PassportFinishGetPanel_o* __this, System_Collections_Generic_List_PassportFeature_Reward__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel$$Build
   void Dino_BusSand_App_UI_PassportFinishGetPanel__Build
   (Dino_BusSand_App_UI_PassportFinishGetPanel_o* __this,
   System_Collections_Generic_List_PassportFeature_Reward__o* rewards, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportFinishGetPanel__Build_21d0248(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar8 = PTR_DAT_04caef98;
  puVar7 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022d0284 to 023d02a7 has its CatchHandler @ 022d053c */
  if ((bRam0000000004f9bb37 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad7a8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04cb03b0);
    FUN_02132f7c(PTR_DAT_04cb03b8);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caef98);
    FUN_02132f7c(PTR_DAT_04cb03c0);
    FUN_02132f7c(PTR_DAT_04cb03c8);
    bRam0000000004f9bb37 = 1;
  }
                    /* try { // try from 022d0314 to 023d031f has its CatchHandler @ 022d0540 */
  iStack_64 = 0;
  plVar11 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar8,0);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar7);
  }
  uVar12 = UnityEngine_Object__op_Equality_43c6f30(plVar11,0,0);
  if ((uVar12 & 1) != 0) {
    return;
  }
  if ((plVar11 != (long *)0x0) &&
     (lVar13 = UnityEngine_Transform__get_parent_43d0d70(plVar11,0), lVar13 != 0)) {
    lVar14 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar13,*(undefined8 *)PTR_DAT_04cad7a8);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar7);
    }
                    /* try { // try from 022d03a0 to 023d03a3 has its CatchHandler @ 022d0534 */
    uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
    if ((uVar12 & 1) != 0) {
      if (lVar14 == 0) goto LAB_022d0710;
      UnityEngine_Behaviour__set_enabled_43bc50c(lVar14,0,0);
    }
    puVar10 = PTR_DAT_04cb03c0;
    puVar9 = PTR_DAT_04cb03b8;
    puVar8 = PTR_DAT_04cabdb0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + 0x18);
      iStack_64 = 0;
      plVar20 = (long *)PTR_DAT_04caec68;
      if (0 < iVar3) {
        do {
          plVar16 = plVar11;
          if (iStack_64 != 0) {
            uVar15 = UnityEngine_Component__get_gameObject_43bcde8(plVar11,0);
            if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar7);
            }
            lVar14 = UnityEngine_Object__Instantiate_object__2805310
                               (uVar15,lVar13,0,*(undefined8 *)PTR_DAT_04cad390);
            if (lVar14 == 0) goto LAB_022d0710;
            plVar16 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar14,0);
          }
          uVar15 = System_Int32__ToString_482d750(&iStack_64,0);
          uVar15 = System_String__Concat_46c82e0(*(undefined8 *)puVar10,uVar15,0);
          if (plVar16 == (long *)0x0) goto LAB_022d0710;
          UnityEngine_Object__set_name_43c72ec(plVar16,uVar15,0);
          lVar14 = UnityEngine_Component__get_gameObject_43bcde8(plVar16,0);
          if (lVar14 == 0) goto LAB_022d0710;
          UnityEngine_GameObject__SetActive_43c1408(lVar14,1,0);
          System_Collections_Generic_List_PassportFeature_Reward___get_Item_3b58010
                    (&uStack_80,param_2,iStack_64,*(undefined8 *)puVar9);
          uStack_98 = uStack_78;
          uStack_a0 = uStack_80;
          uStack_90 = uStack_70;
          Dino_BusSand_App_UI_PassportFinishGetPanel__SetItem_21d0780(plVar16,&uStack_a0);
                    /* try { // try from 022d04d8 to 023d0507 has its CatchHandler @ 022d0530 */
          plVar2 = plVar16;
          if (*plVar16 != *(long *)puVar8) {
            plVar2 = (long *)0x0;
          }
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar12 = UnityEngine_Object__op_Inequality_43c8dec(plVar2,0,0);
          if ((uVar12 & 1) != 0) {
            if (plVar2 == (long *)0x0) goto LAB_022d0710;
                    /* try { // try from 022d0508 to 023d055b has its CatchHandler @ 022d00c0 */
                    /* catch() { ... } // from try @ 022d04d8 with catch @ 022d0530 */
                    /* catch() { ... } // from try @ 022d03a0 with catch @ 022d0534 */
                    /* catch() { ... } // from try @ 022d01f0 with catch @ 022d0538 */
                    /* catch() { ... } // from try @ 022d0284 with catch @ 022d053c */
                    /* catch() { ... } // from try @ 022d0314 with catch @ 022d0540 */
            iVar6 = iStack_64 / 3;
            iVar1 = iVar6 * -3 + iVar3;
                    /* try { // try from 022d0564 to 023d05ef has its CatchHandler @ 022d0564
                       catch() { ... } // from try @ 022d0564 with catch @ 022d0564
                       catch() { ... } // from try @ 022d0b60 with catch @ 022d0564 */
            if (2 < iVar1) {
              iVar1 = 3;
            }
            iVar5 = iStack_64 % 3;
            UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,plVar2,0);
            UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,plVar2,0);
            UnityEngine_RectTransform__set_sizeDelta_43cfa70(0x43910000,0x436c0000,plVar2,0);
                    /* try { // try from 022d05f0 to 023d0603 has its CatchHandler @ 022d0b74 */
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                      (((float)iVar5 - (float)(iVar1 + -1) / 2.0) * 326.0,
                       (float)iVar6 * -320.0 + -118.0,plVar2,0);
            plVar20 = (long *)PTR_DAT_04caec68;
          }
          if (*(int *)(*plVar20 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_GiftPackUi__Sample_21adb38
                    (plVar16,*(undefined8 *)PTR_DAT_04cb03c8,0,0);
          lVar14 = *(long *)(param_1 + 0x48);
          if (lVar14 == 0) goto LAB_022d0710;
          lVar17 = *(long *)(lVar14 + 0x10);
                    /* try { // try from 022d0660 to 023d06a7 has its CatchHandler @ 022d0b80 */
          lVar19 = *(long *)PTR_DAT_04cad6c0;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_022d0710;
          uVar4 = *(uint *)(lVar14 + 0x18);
          if (uVar4 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar4 + 1;
            puVar18 = (undefined8 *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
            *puVar18 = plVar16;
            thunk_FUN_02134474(puVar18,plVar16);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar14,plVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          iStack_64 = iStack_64 + 1;
        } while (iStack_64 < iVar3);
      }
      if (iVar3 == 0) {
        lVar13 = UnityEngine_Component__get_gameObject_43bcde8(plVar11,0);
        if (lVar13 == 0) goto LAB_022d0710;
        UnityEngine_GameObject__SetActive_43c1408(lVar13,0,0);
      }
                    /* try { // try from 022d070c to 023d077f has its CatchHandler @ 022d0b7c */
      return;
    }
  }
LAB_022d0710:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

