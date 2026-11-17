/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$RefreshDots
void Dino_BusSand_App_UI_ContinueBottomPanel__RefreshDots (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, int32_t count, UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ContinueBottomPanel$$RefreshDots
   void Dino_BusSand_App_UI_ContinueBottomPanel__RefreshDots
   (Dino_BusSand_App_UI_ContinueBottomPanel_o* __this, int32_t count, UnityEngine_UI_ScrollRect_o*
   scroll, const MethodInfo* method); */

void Dino_BusSand_App_UI_ContinueBottomPanel__RefreshDots_22c0f94
               (long param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  
  puVar5 = PTR_DAT_04cb66d8;
  puVar4 = PTR_DAT_04cb65f0;
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c333 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadb30);
    FUN_02132f7c(PTR_DAT_04cae8a0);
    FUN_02132f7c(PTR_DAT_04cae8b8);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb65f0);
    FUN_02132f7c(PTR_DAT_04cb66d8);
    bRam0000000004f9c333 = 1;
  }
  lVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  lVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    puVar5 = PTR_DAT_04cadb30;
    puVar4 = PTR_DAT_04cad390;
    if ((uVar8 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x40);
      puVar2 = (undefined8 *)PTR_DAT_04cae8b8;
      while (PTR_DAT_04cae8b8 = (undefined *)puVar2, lVar9 != 0) {
        if (param_2 <= *(int *)(lVar9 + 0x18)) {
          iVar16 = 0;
          goto LAB_023c11b8;
        }
        if (lVar6 == 0) break;
        uVar10 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        lVar9 = UnityEngine_Object__Instantiate_object__2805310
                          (uVar10,lVar7,0,*(undefined8 *)puVar4);
        uVar10 = UnityEngine_Object__get_name_43c71a4(lVar6,0);
        if (lVar9 == 0) break;
        UnityEngine_Object__set_name_43c72ec(lVar9,uVar10,0);
        UnityEngine_GameObject__SetActive_43c1408(lVar9,1,0);
        lVar11 = *(long *)(param_1 + 0x40);
        if (lVar11 == 0) break;
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar15 = *(long *)puVar5;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) break;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar14 = lVar9;
          thunk_FUN_02134474(plVar14,lVar9);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar11,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                    );
        }
        puVar2 = (undefined8 *)PTR_DAT_04cae8b8;
        lVar9 = *(long *)(param_1 + 0x40);
      }
      goto LAB_023c1218;
    }
  }
LAB_023c1240:
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(param_3,0,0);
  if ((uVar8 & 1) != 0) {
    if (param_3 == 0) goto LAB_023c1218;
    uVar12 = 1;
    if (param_2 < 2) {
      uVar12 = 2;
    }
    *(undefined4 *)(param_3 + 0x2c) = uVar12;
  }
  return;
  while( true ) {
    lVar6 = System_Collections_Generic_List_object___get_Item_3a81924(lVar9,iVar16,*puVar2);
    if (lVar6 == 0) break;
    UnityEngine_GameObject__SetActive_43c1408(lVar6,iVar16 < param_2,0);
    if (iVar16 < param_2) {
      if (*(long *)(param_1 + 0x40) == 0) break;
      uVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                         (*(long *)(param_1 + 0x40),iVar16,*puVar2);
      Dino_BusSand_App_UI_ContinueBottomPanel__SetDot_22c1b30(uVar10,iVar16 == 0);
    }
    lVar9 = *(long *)(param_1 + 0x40);
    iVar16 = iVar16 + 1;
    if (lVar9 == 0) break;
LAB_023c11b8:
    if (*(int *)(lVar9 + 0x18) <= iVar16) {
      if ((lVar7 != 0) &&
         (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar6 != 0)) {
        UnityEngine_GameObject__SetActive_43c1408(lVar6,1 < param_2,0);
        goto LAB_023c1240;
      }
      break;
    }
  }
LAB_023c1218:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

