/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$RefreshRewardList
void Dino_BusSand_App_UI_CommonGetPanel__RefreshRewardList (Dino_BusSand_App_UI_CommonGetPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$RefreshRewardList
   void Dino_BusSand_App_UI_CommonGetPanel__RefreshRewardList (Dino_BusSand_App_UI_CommonGetPanel_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonGetPanel__RefreshRewardList_22ade38
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 extraout_x1;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  undefined4 uVar20;
  int iStack_64;
  
  if ((bRam0000000004f9c2b9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04cad530);
    FUN_02132f7c(PTR_DAT_04cb5f80);
    FUN_02132f7c(PTR_DAT_04cad588);
    FUN_02132f7c(PTR_DAT_04cad508);
    FUN_02132f7c(PTR_DAT_04caca58);
    FUN_02132f7c(PTR_DAT_04cadda0);
    FUN_02132f7c(PTR_DAT_04cb1380);
    FUN_02132f7c(PTR_DAT_04cad580);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caef98);
    FUN_02132f7c(PTR_DAT_04caa488);
    bRam0000000004f9c2b9 = 1;
  }
  puVar6 = PTR_DAT_04caef98;
  lVar16 = *(long *)(param_4 + 0x40);
  iStack_64 = 0;
  if (lVar16 != 0) {
    iVar1 = *(int *)(lVar16 + 0x18);
    *(undefined4 *)(lVar16 + 0x18) = 0;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar16 + 0x10),0,iVar1,0);
    }
    puVar4 = PTR_DAT_04cabdb0;
    plVar8 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_4,*(undefined8 *)puVar6,0);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else if (*plVar8 != *(long *)puVar4) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(plVar8,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)UnityEngine_Transform__get_parent_43d0d70(plVar8,0);
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
      }
      else if (*plVar10 != *(long *)puVar4) {
        plVar10 = (long *)0x0;
      }
      if ((*(long *)(param_4 + 0x38) != 0) &&
         (lVar16 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar16 != 0)) {
        iVar1 = *(int *)(lVar16 + 0x18);
        lVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad580);
        System_Collections_Generic_List_object____ctor_3a8138c
                  (lVar16,*(undefined8 *)PTR_DAT_04cad588);
        puVar6 = PTR_DAT_04cad530;
        if (lVar16 != 0) {
          lVar17 = *(long *)(lVar16 + 0x10);
          lVar18 = *(long *)PTR_DAT_04cad530;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar17 != 0) {
            uVar2 = *(uint *)(lVar16 + 0x18);
            if (uVar2 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
              puVar11 = (undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
              *puVar11 = plVar8;
              thunk_FUN_02134474(puVar11,plVar8);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar16,plVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            puVar5 = PTR_DAT_04cad390;
            puVar3 = PTR_DAT_04caa488;
            iStack_64 = 1;
            if (1 < iVar1) {
              do {
                uVar12 = UnityEngine_Component__get_gameObject_43bcde8(plVar8,0);
                if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
                }
                lVar17 = UnityEngine_Object__Instantiate_object__2805310
                                   (uVar12,plVar10,0,*(undefined8 *)puVar5);
                uVar12 = UnityEngine_Object__get_name_43c71a4(plVar8,0);
                uVar13 = System_Int32__ToString_482d750(&iStack_64,0);
                uVar12 = System_String__Concat_46d2b84(uVar12,*(undefined8 *)puVar3,uVar13,0);
                if (lVar17 == 0) goto LAB_023ae318;
                UnityEngine_Object__set_name_43c72ec(lVar17,uVar12,0);
                plVar14 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar17,0);
                if ((plVar14 != (long *)0x0) && (*plVar14 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
                  FUN_021335a4(plVar14);
                }
                lVar17 = *(long *)(lVar16 + 0x10);
                lVar18 = *(long *)puVar6;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar17 == 0) goto LAB_023ae318;
                uVar2 = *(uint *)(lVar16 + 0x18);
                if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar2 + 1;
                  plVar15 = (long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar15 = (long)plVar14;
                  thunk_FUN_02134474(plVar15,plVar14);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar16,plVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                iStack_64 = iStack_64 + 1;
              } while (iStack_64 < iVar1);
            }
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar9 = UnityEngine_Object__op_Inequality_43c8dec(plVar10,0,0);
            uVar20 = _UNK_00e1fe54;
            if ((uVar9 & 1) != 0) {
              if (plVar10 == (long *)0x0) goto LAB_023ae318;
              UnityEngine_RectTransform__get_rect_43cf450(plVar10,0);
              uVar20 = param_3;
            }
            puVar4 = PTR_DAT_04cb1380;
            puVar6 = PTR_DAT_04cadda0;
            if (*(int *)(lVar16 + 0x18) < 1) {
              return;
            }
            iVar19 = 0;
            do {
              lVar17 = System_Collections_Generic_List_object___get_Item_3a81924
                                 (lVar16,iVar19,*(undefined8 *)puVar4);
              if ((lVar17 == 0) ||
                 (lVar17 = UnityEngine_Component__get_gameObject_43bcde8(lVar17,0), lVar17 == 0))
              break;
              UnityEngine_GameObject__SetActive_43c1408(lVar17,iVar19 < iVar1,0);
              if (iVar19 < iVar1) {
                uVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                                   (lVar16,iVar19,*(undefined8 *)puVar4);
                Dino_BusSand_App_UI_CommonGetPanel__Place_22ae748(uVar20,uVar12,iVar19,iVar1);
                uVar12 = System_Collections_Generic_List_object___get_Item_3a81924
                                   (lVar16,iVar19,*(undefined8 *)puVar4);
                if ((*(long *)(param_4 + 0x38) == 0) ||
                   (lVar17 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar17 == 0)) break;
                uVar7 = System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                                  (lVar17,iVar19,*(undefined8 *)puVar6);
                if ((*(long *)(param_4 + 0x38) == 0) ||
                   (lVar17 = *(long *)(*(long *)(param_4 + 0x38) + 0x10), lVar17 == 0)) break;
                System_Collections_Generic_List_KeyValuePair_int__long____get_Item_3965544
                          (lVar17,iVar19,*(undefined8 *)puVar6);
                Dino_BusSand_App_UI_CommonGetPanel__SetRewardItem_22ae87c
                          (param_4,uVar12,uVar7,extraout_x1);
              }
              iVar19 = iVar19 + 1;
              if (*(int *)(lVar16 + 0x18) <= iVar19) {
                return;
              }
            } while( true );
          }
        }
      }
    }
  }
LAB_023ae318:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

