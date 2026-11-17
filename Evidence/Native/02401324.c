/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$BuildGrid
void Dino_BusSand_App_UI_PlayerSettingPanel__BuildGrid (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, System_String_o* view, System_String_o* _template, System_Collections_Generic_List_int__o* ids, Dino_BusSand_App_UI_PlayerSettingPanel_GridSpec_o g, System_Collections_Generic_List_PlayerSettingPanel_Item__o* items, System_Action_PlayerSettingPanel_Item__o* setup, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$BuildGrid
   void Dino_BusSand_App_UI_PlayerSettingPanel__BuildGrid (Dino_BusSand_App_UI_PlayerSettingPanel_o*
   __this, System_String_o* view, System_String_o* _template,
   System_Collections_Generic_List_int__o* ids, Dino_BusSand_App_UI_PlayerSettingPanel_GridSpec_o g,
   System_Collections_Generic_List_PlayerSettingPanel_Item__o* items,
   System_Action_PlayerSettingPanel_Item__o* setup, const MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__BuildGrid_2301324
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,float *param_5
               ,long param_6,long param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  int iStack_64;
  
  if ((bRam0000000004f9c4dc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caefb0);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb7d00);
    FUN_02132f7c(PTR_DAT_04cb7d08);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb7d10);
    FUN_02132f7c(PTR_DAT_04cb6c10);
    FUN_02132f7c(PTR_DAT_04cb0740);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb7d18);
    bRam0000000004f9c4dc = 1;
  }
  iStack_64 = 0;
  lVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,param_2,0);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  lVar13 = 0;
  if ((uVar4 & 1) != 0) {
    lVar13 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(lVar3,param_3,0);
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
  if ((uVar4 & 1) != 0) {
    uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb7d18,param_3,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
    }
    puVar1 = PTR_DAT_04ca9af8;
    uVar9 = 0;
    if ((bRam0000000004fa626c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9af8,0);
      FUN_02132f7c(PTR_DAT_04ce7050);
      bRam0000000004fa626c = 1;
      uVar9 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      uVar9 = extraout_x1_00;
    }
    if (cRam0000000004f9d848 == '\0') {
      FUN_02132f7c(PTR_DAT_04ca9af8,uVar9);
      cRam0000000004f9d848 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    plVar12 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ce7050) {
          puVar8 = (undefined8 *)(lVar3 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_04457b18;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar12,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar8)(plVar12,2,uVar5,puVar8[1]);
    return;
  }
  if ((lVar13 != 0) && (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0), lVar6 != 0)
     ) {
    UnityEngine_GameObject__SetActive_43c1408(lVar6,0,0);
    plVar12 = (long *)UnityEngine_Transform__get_parent_43d0d70(lVar13,0);
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)0x0;
    }
    else if (*plVar12 != *(long *)PTR_DAT_04cabdb0) {
      plVar12 = (long *)0x0;
    }
    if (lVar3 != 0) {
      lVar3 = UnityEngine_Component__GetComponent_object__26f97e8
                        (lVar3,*(undefined8 *)PTR_DAT_04caefb0);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar3 == 0) goto LAB_02401a24;
        plVar14 = (long *)(lVar3 + 0x20);
        lVar6 = *plVar14;
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
        if ((uVar4 & 1) != 0) {
          *plVar14 = (long)plVar12;
          thunk_FUN_02134474(plVar14,plVar12);
        }
        *(undefined2 *)(lVar3 + 0x28) = 0x100;
      }
      iStack_64 = 0;
      if (param_4 != 0) {
        if (0 < *(int *)(param_4 + 0x18)) {
          do {
            uVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
            }
            lVar3 = UnityEngine_Object__Instantiate_object__2805310
                              (uVar5,plVar12,0,*(undefined8 *)PTR_DAT_04cad390);
            uVar5 = System_Int32__ToString_482d750(&iStack_64,0);
            uVar5 = System_String__Concat_46c82e0(param_3,uVar5,0);
            if (lVar3 == 0) goto LAB_02401a24;
            UnityEngine_Object__set_name_43c72ec(lVar3,uVar5,0);
            UnityEngine_GameObject__SetActive_43c1408(lVar3,1,0);
            plVar14 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
            if (plVar14 == (long *)0x0) goto LAB_02401a24;
            if (*plVar14 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar14);
            }
            UnityEngine_RectTransform__set_anchorMax_43cf768(0,0x3f800000,plVar14,0);
            UnityEngine_RectTransform__set_anchorMin_43cf5e4(0,0x3f800000,plVar14,0);
            UnityEngine_RectTransform__set_pivot_43cfbf4(0,0x3f800000,plVar14,0);
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                      (*param_5 + (param_5[4] + param_5[2]) * (float)(iStack_64 % 3),
                       -(param_5[1] + (param_5[5] + param_5[3]) * (float)(iStack_64 / 3)),plVar14,0)
            ;
            lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb7d00);
            System_Object___ctor_4870e5c(lVar6,0);
            uVar2 = System_Collections_Generic_List_int___get_Item_3a2bd74
                              (param_4,iStack_64,*(undefined8 *)PTR_DAT_04cae230);
            if (lVar6 == 0) goto LAB_02401a24;
            *(undefined4 *)(lVar6 + 0x10) = uVar2;
            uVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
            *(undefined8 *)(lVar6 + 0x18) = uVar5;
            thunk_FUN_02134474();
            lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
            if (lVar7 == 0) goto LAB_02401a24;
            uVar5 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)PTR_DAT_04cadc80,0);
            puVar8 = (undefined8 *)(lVar6 + 0x20);
            *puVar8 = uVar5;
            thunk_FUN_02134474(puVar8,uVar5);
            uVar4 = UnityEngine_Object__op_Equality_43c6f30(*puVar8,0,0);
            if ((uVar4 & 1) != 0) {
              uVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
              *puVar8 = uVar5;
              thunk_FUN_02134474(puVar8,uVar5);
            }
            uVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
            uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                              (uVar5,*(undefined8 *)PTR_DAT_04cb7d10,0);
            *(undefined8 *)(lVar6 + 0x28) = uVar5;
            thunk_FUN_02134474();
            uVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
            uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                              (uVar5,*(undefined8 *)PTR_DAT_04cb0740,0);
            *(undefined8 *)(lVar6 + 0x30) = uVar5;
            thunk_FUN_02134474();
            uVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
            uVar5 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                              (uVar5,*(undefined8 *)PTR_DAT_04cb6c10,0);
            *(undefined8 *)(lVar6 + 0x38) = uVar5;
            thunk_FUN_02134474();
            if (param_6 == 0) goto LAB_02401a24;
            lVar3 = *(long *)(param_6 + 0x10);
            lVar7 = *(long *)PTR_DAT_04cb7d08;
            *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
            if (lVar3 == 0) goto LAB_02401a24;
            uVar10 = *(uint *)(param_6 + 0x18);
            if (uVar10 < *(uint *)(lVar3 + 0x18)) {
              *(uint *)(param_6 + 0x18) = uVar10 + 1;
              plVar14 = (long *)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
              *plVar14 = lVar6;
              thunk_FUN_02134474(plVar14,lVar6);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (param_6,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            if (param_7 == 0) goto LAB_02401a24;
            (**(code **)(param_7 + 0x18))
                      (*(undefined8 *)(param_7 + 0x40),lVar6,*(undefined8 *)(param_7 + 0x28));
            iStack_64 = iStack_64 + 1;
          } while (iStack_64 < *(int *)(param_4 + 0x18));
        }
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(plVar12,0,0);
        if ((uVar4 & 1) != 0) {
          fVar15 = 0.0;
          uVar10 = *(int *)(param_4 + 0x18) + 2;
          if (2 < (int)uVar10) {
            uVar10 = uVar10 / 3;
            fVar15 = param_5[1] + param_5[5] * (float)uVar10 + param_5[3] * (float)(int)(uVar10 - 1)
            ;
          }
          if (plVar12 == (long *)0x0) goto LAB_02401a24;
          uVar5 = UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar12,0);
          UnityEngine_RectTransform__set_sizeDelta_43cfa70(uVar5,fVar15,plVar12,0);
          uVar5 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar12,0);
          UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(uVar5,0,plVar12,0);
        }
        return;
      }
    }
  }
LAB_02401a24:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

