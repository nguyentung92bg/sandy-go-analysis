/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$FillTiles
void Dino_BusSand_App_UI_SimpleActivityContinuePanel__FillTiles (UnityEngine_Transform_o* root, System_Collections_Generic_List_IStakeActivity__o* list, System_Single_array* spacingBy234, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SimpleActivityContinuePanel$$FillTiles
   void Dino_BusSand_App_UI_SimpleActivityContinuePanel__FillTiles (UnityEngine_Transform_o* root,
   System_Collections_Generic_List_IStakeActivity__o* list, System_Single_array* spacingBy234, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_SimpleActivityContinuePanel__FillTiles_21890c8
               (long *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b971 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadb38);
    FUN_02132f7c(PTR_DAT_04cad920);
    FUN_02132f7c(PTR_DAT_04cadac0);
    FUN_02132f7c(PTR_DAT_04cadb40);
    FUN_02132f7c(PTR_DAT_04cada88);
    FUN_02132f7c(PTR_DAT_04cada98);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cadb48);
    FUN_02132f7c(PTR_DAT_04cadb50);
    FUN_02132f7c(PTR_DAT_04cadb58);
    FUN_02132f7c(PTR_DAT_04cadb60);
    bRam0000000004f9b971 = 1;
  }
  uStack_68 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,4);
  if (lVar7 == 0) goto LAB_02289678;
  if (*(int *)(lVar7 + 0x18) != 0) {
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_04cadb50;
                    /* catch() { ... } // from try @ 02289484 with catch @ 0228920c */
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20));
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_04cadb60;
      thunk_FUN_02134474((undefined8 *)(lVar7 + 0x28));
                    /* try { // try from 0228923c to 02389323 has its CatchHandler @ 022894c8 */
      if (2 < *(uint *)(lVar7 + 0x18)) {
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_04cadb58;
        thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30));
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)PTR_DAT_04cadb48;
          thunk_FUN_02134474((undefined8 *)(lVar7 + 0x38));
          if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
            uVar6 = 0;
            uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= uVar6) goto LAB_0228967c;
              if (param_1 == (long *)0x0) goto LAB_02289678;
              lVar8 = UnityEngine_Transform__Find_43d4bec
                                (param_1,*(undefined8 *)(lVar7 + 0x20 + uVar6 * 8),0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
              if ((uVar12 & 1) != 0) {
                if ((lVar8 == 0) ||
                   (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar8 == 0))
                goto LAB_02289678;
                UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
              }
              uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          puVar5 = PTR_DAT_04cadac0;
          puVar4 = PTR_DAT_04cada98;
          puVar3 = PTR_DAT_04cad920;
          if (param_2 != 0) {
            if (0 < *(int *)(param_2 + 0x18)) {
                    /* try { // try from 02289340 to 02389357 has its CatchHandler @ 022894c4 */
              iVar15 = 0;
              iVar16 = 0;
              do {
                plVar9 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                                           (param_2,iVar15,*(undefined8 *)puVar4);
                if (plVar9 == (long *)0x0) goto LAB_02289678;
                lVar7 = *plVar9;
                uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar6 != 0) {
                  piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                      puVar10 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_022893b0;
                    }
                    uVar6 = uVar6 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar6 != 0);
                }
                puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar5,0);
LAB_022893b0:
                uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                lVar7 = Dino_BusSand_App_UI_SimpleActivityContinuePanel__TileNode_2189be0
                                  (uVar11,&uStack_68);
                if (lVar7 == 0) {
                  lVar7 = 0;
                }
                else {
                  if (param_1 == (long *)0x0) goto LAB_02289678;
                  lVar7 = UnityEngine_Transform__Find_43d4bec(param_1,lVar7,0);
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 022893f4 to 02389403 has its CatchHandler @ 022894a8 */
                  thunk_FUN_0218fdac();
                }
                uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
                if ((uVar6 & 1) == 0) {
                  uVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                                     (param_2,iVar15,*(undefined8 *)puVar4);
                  plVar9 = (long *)thunk_FUN_0216e7a0(uVar11,*(undefined8 *)puVar3);
                    /* try { // try from 02289424 to 0238942b has its CatchHandler @ 022894ac */
                  if (plVar9 == (long *)0x0) {
LAB_02289530:
                    if (lVar7 == 0) goto LAB_02289678;
                  }
                  else {
                    lVar13 = *plVar9;
                    lVar8 = *(long *)puVar3;
                    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar6 != 0) {
                      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == lVar8) {
                          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                          goto LAB_0228947c;
                        }
                        uVar6 = uVar6 - 1;
                        piVar14 = piVar14 + 4;
                    /* try { // try from 02289458 to 02389483 has its CatchHandler @ 022894c4 */
                      } while (uVar6 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_0216b7a4(plVar9,lVar8,2);
LAB_0228947c:
                    /* try { // try from 02289484 to 023894f7 has its CatchHandler @ 0228920c */
                    lVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    if (lVar8 == 0) goto LAB_02289530;
                    if (lVar7 == 0) goto LAB_02289678;
                    uVar11 = UnityEngine_Transform__Find_43d4bec(lVar7,uStack_68,0);
                    /* catch() { ... } // from try @ 022893f4 with catch @ 022894a8 */
                    Dino_BusSand_App_UI_ActivityContinueUi__SetTexts_2187940(uVar11,lVar8);
                    /* catch() { ... } // from try @ 02289424 with catch @ 022894ac */
                  }
                  lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
                  if (lVar8 == 0) goto LAB_02289678;
                  UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0);
                  UnityEngine_Transform__SetSiblingIndex_43d4730(lVar7,iVar16,0);
                  iVar16 = iVar16 + 1;
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < *(int *)(param_2 + 0x18));
            }
            if (param_1 != (long *)0x0) {
              lVar7 = UnityEngine_Component__GetComponent_object__26f97e8
                                (param_1,*(undefined8 *)PTR_DAT_04cadb38);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
              if (((param_3 != 0) && ((uVar6 & 1) != 0)) &&
                 (0xfffffffc < *(int *)(param_2 + 0x18) - 5U)) {
                uVar1 = *(int *)(param_2 + 0x18) - 2;
                if (*(uint *)(param_3 + 0x18) <= uVar1) goto LAB_0228967c;
                if (lVar7 == 0) goto LAB_02289678;
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing_4685a08
                          (*(undefined4 *)(param_3 + (ulong)uVar1 * 4 + 0x20),lVar7,0);
              }
              if (*param_1 != *(long *)PTR_DAT_04cabdb0) {
                param_1 = (long *)0x0;
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar6 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
              if ((uVar6 & 1) == 0) {
                return;
              }
              if (*(int *)(*(long *)PTR_DAT_04cadb40 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_46873dc(param_1,0);
              return;
            }
          }
LAB_02289678:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
LAB_0228967c:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

