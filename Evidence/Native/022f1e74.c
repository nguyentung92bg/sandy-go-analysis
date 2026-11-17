/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardTips$$SpawnItems
void Dino_BusSand_App_UI_YachtRacingRewardTips__SpawnItems (Dino_BusSand_App_UI_YachtRacingRewardTips_o* __this, System_Collections_Generic_List_ActivityRewardEntry__o* rewards, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingRewardTips$$SpawnItems
   void Dino_BusSand_App_UI_YachtRacingRewardTips__SpawnItems
   (Dino_BusSand_App_UI_YachtRacingRewardTips_o* __this,
   System_Collections_Generic_List_ActivityRewardEntry__o* rewards, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingRewardTips__SpawnItems_21f1e74(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_64;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc28 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadb40);
    FUN_02132f7c(PTR_DAT_04cadb30);
    FUN_02132f7c(PTR_DAT_04cae8a0);
    FUN_02132f7c(PTR_DAT_04cae8a8);
    FUN_02132f7c(PTR_DAT_04cae8b0);
    FUN_02132f7c(PTR_DAT_04cae8b8);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa488);
                    /* try { // try from 022f1f1c to 023f1f1f has its CatchHandler @ 022f1f4c */
    bRam0000000004f9bc28 = 1;
  }
                    /* try { // try from 022f1f20 to 023f1f43 has its CatchHandler @ 022f1d70 */
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  iStack_64 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022f1f44 to 023f1f4b has its CatchHandler @ 022f1f4c */
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
  if ((uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 022f1f1c with catch @ 022f1f4c
                       catch() { ... } // from try @ 022f1f44 with catch @ 022f1f4c
                       try { // try from 022f1f4c to 023f1f67 has its CatchHandler @ 022f1d70 */
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022f1f68 to 023f203f has its CatchHandler @ 022f1f68
                       catch() { ... } // from try @ 022f1f68 with catch @ 022f1f68
                       catch() { ... } // from try @ 022f2090 with catch @ 022f1f68
                       catch() { ... } // from try @ 022f20ec with catch @ 022f1f68
                       catch() { ... } // from try @ 022f2130 with catch @ 022f1f68 */
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
    puVar7 = PTR_DAT_04cae8b8;
    puVar6 = PTR_DAT_04cae8b0;
    puVar5 = PTR_DAT_04cadb30;
    puVar4 = PTR_DAT_04cad390;
    puVar3 = PTR_DAT_04caa488;
    if ((uVar8 & 1) == 0) {
      iStack_64 = 0;
      if (param_2 != 0) {
        iVar1 = *(int *)(param_2 + 0x18);
        if (0 < iVar1) {
          do {
            lVar9 = *(long *)(param_1 + 0x60);
            if (lVar9 == 0) goto LAB_022f233c;
            if (iStack_64 < *(int *)(lVar9 + 0x18)) {
              lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                                (lVar9,iStack_64,*(undefined8 *)puVar7);
              if (lVar9 == 0) goto LAB_022f233c;
            }
            else {
              uVar15 = *(undefined8 *)(param_1 + 0x48);
              uVar16 = *(undefined8 *)(param_1 + 0x30);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              lVar9 = UnityEngine_Object__Instantiate_object__2805310
                                (uVar15,uVar16,0,*(undefined8 *)puVar4);
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_022f233c;
              uVar15 = UnityEngine_Object__get_name_43c71a4(*(long *)(param_1 + 0x48),0);
              uVar16 = System_Int32__ToString_482d750(&iStack_64,0);
                    /* try { // try from 022f2040 to 023f208f has its CatchHandler @ 022f2160 */
              uVar15 = System_String__Concat_46d2b84(uVar15,*(undefined8 *)puVar3,uVar16,0);
              if (lVar9 == 0) goto LAB_022f233c;
              UnityEngine_Object__set_name_43c72ec(lVar9,uVar15,0);
              lVar10 = *(long *)(param_1 + 0x60);
              if (lVar10 == 0) goto LAB_022f233c;
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar13 = *(long *)puVar5;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_022f233c;
              uVar14 = *(uint *)(lVar10 + 0x18);
              if (uVar14 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 022f2090 to 023f20e3 has its CatchHandler @ 022f1f68 */
                *(uint *)(lVar10 + 0x18) = uVar14 + 1;
                plVar12 = (long *)(lVar11 + (long)(int)uVar14 * 8 + 0x20);
                *plVar12 = lVar9;
                thunk_FUN_02134474(plVar12,lVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar10,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar15 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
            System_Collections_Generic_List_ActivityRewardEntry___get_Item_39e19e0
                      (&uStack_80,param_2,iStack_64,*(undefined8 *)puVar6);
                    /* try { // try from 022f20e4 to 023f20eb has its CatchHandler @ 022f2130 */
                    /* try { // try from 022f20ec to 023f2123 has its CatchHandler @ 022f1f68 */
            uStack_98 = uStack_78;
            uStack_a0 = uStack_80;
            uStack_90 = uStack_70;
            Dino_BusSand_App_UI_YachtRacingRewardTips__SetReward2_21f25dc(uVar15,&uStack_a0);
            UnityEngine_GameObject__SetActive_43c1408(lVar9,1,0);
            lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
            if (lVar9 == 0) goto LAB_022f233c;
                    /* try { // try from 022f2124 to 023f212f has its CatchHandler @ 022f2160 */
            UnityEngine_Transform__SetSiblingIndex_43d4730(lVar9,iStack_64 << 1,0);
                    /* catch() { ... } // from try @ 022f20e4 with catch @ 022f2130
                       try { // try from 022f2130 to 023f217b has its CatchHandler @ 022f1f68 */
            uVar15 = *(undefined8 *)(param_1 + 0x50);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar15,0,0);
            if ((uVar8 & 1) == 0) {
              lVar9 = *(long *)(param_1 + 0x68);
              if (lVar9 == 0) goto LAB_022f233c;
                    /* catch() { ... } // from try @ 022f2040 with catch @ 022f2160
                       catch() { ... } // from try @ 022f2124 with catch @ 022f2160 */
              if (iStack_64 < *(int *)(lVar9 + 0x18)) {
                lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                                  (lVar9,iStack_64,*(undefined8 *)puVar7);
                if (lVar9 == 0) goto LAB_022f233c;
              }
              else {
                uVar15 = *(undefined8 *)(param_1 + 0x50);
                uVar16 = *(undefined8 *)(param_1 + 0x30);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar9 = UnityEngine_Object__Instantiate_object__2805310
                                  (uVar15,uVar16,0,*(undefined8 *)puVar4);
                if (*(long *)(param_1 + 0x50) == 0) goto LAB_022f233c;
                uVar15 = UnityEngine_Object__get_name_43c71a4(*(long *)(param_1 + 0x50),0);
                uVar16 = System_Int32__ToString_482d750(&iStack_64,0);
                uVar15 = System_String__Concat_46d2b84(uVar15,*(undefined8 *)puVar3,uVar16,0);
                if (lVar9 == 0) goto LAB_022f233c;
                UnityEngine_Object__set_name_43c72ec(lVar9,uVar15,0);
                lVar10 = *(long *)(param_1 + 0x68);
                if (lVar10 == 0) goto LAB_022f233c;
                lVar11 = *(long *)(lVar10 + 0x10);
                lVar13 = *(long *)puVar5;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_022f233c;
                uVar14 = *(uint *)(lVar10 + 0x18);
                if (uVar14 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar14 + 1;
                  plVar12 = (long *)(lVar11 + (long)(int)uVar14 * 8 + 0x20);
                  *plVar12 = lVar9;
                  thunk_FUN_02134474(plVar12,lVar9);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar10,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
              }
              UnityEngine_GameObject__SetActive_43c1408(lVar9,1,0);
              lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
              if (lVar9 == 0) goto LAB_022f233c;
              UnityEngine_Transform__SetSiblingIndex_43d4730(lVar9,iStack_64 << 1 | 1,0);
            }
            iVar1 = *(int *)(param_2 + 0x18);
            iStack_64 = iStack_64 + 1;
          } while (iStack_64 < iVar1);
        }
        puVar3 = PTR_DAT_04cae8b8;
        lVar9 = *(long *)(param_1 + 0x60);
        while (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) <= iVar1) {
            lVar9 = *(long *)(param_1 + 0x68);
            if (lVar9 != 0) {
              uVar14 = *(int *)(param_2 + 0x18) - 1;
              uVar14 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
              goto LAB_022f2308;
            }
            break;
          }
                    /* try { // try from 022f22cc to 023f2337 has its CatchHandler @ 022f22cc
                       catch() { ... } // from try @ 022f22cc with catch @ 022f22cc
                       catch() { ... } // from try @ 022f234c with catch @ 022f22cc */
          lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar9,iVar1,*(undefined8 *)puVar3);
          if (lVar9 == 0) break;
          UnityEngine_GameObject__SetActive_43c1408(lVar9,0,0);
          iVar1 = iVar1 + 1;
          lVar9 = *(long *)(param_1 + 0x60);
        }
      }
      goto LAB_022f233c;
    }
  }
  return;
  while( true ) {
    UnityEngine_GameObject__SetActive_43c1408(lVar9,0,0);
    lVar9 = *(long *)(param_1 + 0x68);
    uVar14 = uVar14 + 1;
                    /* try { // try from 022f2338 to 023f234b has its CatchHandler @ 022f2364 */
    if (lVar9 == 0) break;
LAB_022f2308:
    puVar4 = PTR_DAT_04cadb40;
    if (*(int *)(lVar9 + 0x18) <= (int)uVar14) {
      uVar15 = *(undefined8 *)(param_1 + 0x30);
                    /* try { // try from 022f234c to 023f237b has its CatchHandler @ 022f22cc */
      if (*(int *)(*(long *)PTR_DAT_04cadb40 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 022f2338 with catch @ 022f2364 */
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_46873dc(uVar15,0);
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 022f240c with catch @ 022f237c */
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar15,0,0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_46873dc(uVar15,0);
      return;
    }
    lVar9 = System_Collections_Generic_List_object___get_Item_3a81924
                      (lVar9,uVar14,*(undefined8 *)puVar3);
    if (lVar9 == 0) break;
  }
LAB_022f233c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

