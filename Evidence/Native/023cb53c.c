/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$PlaceClear
void Dino_BusSand_App_UI_GuidePanel__PlaceClear (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_Transform_o* root, UnityEngine_Rect_o lit, bool underFirst, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$PlaceClear
   void Dino_BusSand_App_UI_GuidePanel__PlaceClear (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_Transform_o* root, UnityEngine_Rect_o lit, bool underFirst, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_GuidePanel__PlaceClear_22cb53c
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               long param_5,long param_6,ulong param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar13 = param_4;
  if ((bRam0000000004f9c37a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd80);
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cafcc0);
    FUN_02132f7c(PTR_DAT_04cacfb8);
    bRam0000000004f9c37a = 1;
  }
  UnityEngine_Canvas__ForceUpdateCanvases_4681650(0);
  puVar2 = PTR_DAT_04cabd80;
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_6 == 0) {
LAB_023cb93c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar5 = (long *)UnityEngine_Transform__Find_43d4bec(param_6,*(undefined8 *)PTR_DAT_04cacfb8,0);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
    plVar5 = (long *)0x0;
  }
  lVar6 = UnityEngine_Component__GetComponentInParent_object__26f9d74(param_5,*(undefined8 *)puVar2)
  ;
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  fVar10 = 1.0;
  if ((uVar7 & 1) != 0) {
    if ((lVar6 == 0) || (lVar6 = UnityEngine_Canvas__get_rootCanvas_4680a14(lVar6,0), lVar6 == 0))
    goto LAB_023cb93c;
    fVar10 = (float)UnityEngine_Canvas__get_scaleFactor_467f504(lVar6,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(plVar5,0,0);
  if ((uVar7 & 1) != 0) {
    if (plVar5 == (long *)0x0) goto LAB_023cb93c;
    UnityEngine_RectTransform__get_rect_43cf450(plVar5,0);
    if (1.0 < fVar13) {
      UnityEngine_RectTransform__get_rect_43cf450(plVar5,0);
      fVar16 = fVar13 * 0.5;
      goto LAB_023cb6dc;
    }
  }
  fVar16 = 110.0;
LAB_023cb6dc:
  puVar2 = PTR_DAT_04cb6a88;
  puVar1 = PTR_DAT_04cafcc0;
  iVar4 = UnityEngine_Screen__get_height_436a6c8(0);
  fVar15 = (float)iVar4 * _UNK_00e200b8;
  fVar12 = _UNK_00e200b8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_UI_ScreenSafe__get_Area_21ff9f4(0);
  iVar4 = UnityEngine_Screen__get_height_436a6c8(0);
  fVar11 = (fVar13 + fVar12) - fVar15;
  fVar13 = (float)iVar4 * _UNK_00e1fea8;
  if (fVar11 <= (float)iVar4 * _UNK_00e1fea8) {
    fVar13 = fVar11;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c3b0 == '\0') {
    FUN_02132f7c(PTR_DAT_04cb6a88);
    cRam0000000004f9c3b0 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  if ((*(uint *)(*(long *)(lVar6 + 0xb8) + 8) & 0x7fffffff) < 0x7f800001) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9c3b0 == '\0') {
      FUN_02132f7c(PTR_DAT_04cb6a88);
      cRam0000000004f9c3b0 = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    fVar11 = *(float *)(*(long *)(lVar6 + 0xb8) + 8) + fVar15 * -0.5;
    if (fVar11 <= fVar13) {
      fVar13 = fVar11;
    }
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar10 = fVar10 * fVar16;
  uVar7 = Dino_BusSand_App_UI_HudPanel__get_FooterShown_230b8d8(0);
  if ((uVar7 & 1) == 0) {
    fVar16 = fVar15 * 0.5 + fVar12;
  }
  else {
    iVar4 = UnityEngine_Screen__get_height_436a6c8(0);
    fVar16 = (float)iVar4 * _UNK_00e20328;
    if ((float)iVar4 * _UNK_00e20328 <= fVar15 + fVar12) {
      fVar16 = fVar15 + fVar12;
    }
  }
  fVar11 = (param_2 - fVar15) - fVar10;
  fVar12 = fVar10 + param_4 + param_2 + fVar15;
  fVar15 = fVar10 + fVar12;
  bVar3 = fVar11 - fVar10 < fVar16;
  if ((param_7 & 1) == 0) {
    fVar14 = fVar12;
    if (fVar13 < fVar15) {
      fVar14 = fVar11;
    }
    if (bVar3 && fVar13 < fVar15) {
      fVar15 = fVar13 - fVar10;
      if (fVar12 <= fVar13 - fVar10) {
        fVar15 = fVar12;
      }
      fVar14 = fVar10 + fVar16;
      if (fVar10 + fVar16 <= fVar12) {
        fVar14 = fVar15;
      }
    }
  }
  else {
    fVar14 = fVar11;
    if (bVar3) {
      fVar14 = fVar12;
    }
    if (bVar3 && fVar13 < fVar15) {
      fVar12 = fVar13 - fVar10;
      if (fVar11 <= fVar13 - fVar10) {
        fVar12 = fVar11;
      }
      fVar14 = fVar10 + fVar16;
      if (fVar10 + fVar16 <= fVar11) {
        fVar14 = fVar12;
      }
    }
  }
  lVar6 = *(long *)(param_5 + 0x60);
  iVar4 = UnityEngine_Screen__get_width_436a6a0(0);
  if (cRam0000000004f9b948 == '\0') {
    FUN_02132f7c(PTR_DAT_04cacfc0);
    cRam0000000004f9b948 = '\x01';
  }
  fVar13 = **(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
  fVar10 = (*(float **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
  if ((bRam0000000004f9c381 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c381 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar6 != 0) {
    plVar5 = (long *)UnityEngine_Transform__get_parent_43d0d70(lVar6,0);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
      plVar5 = (long *)0x0;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(plVar5,0,0);
    if ((uVar7 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_5 + 0x50);
      if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
                ((float)iVar4 / 2.0,fVar14,plVar5,uVar9,&stack0xffffffffffffffd8,0);
      UnityEngine_Transform__set_localPosition_43cfda8(fVar13 + 0.0,fVar10 + 0.0,0,lVar6,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

