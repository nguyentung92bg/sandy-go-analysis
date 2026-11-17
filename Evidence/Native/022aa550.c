/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$LayoutGp4
void Dino_BusSand_App_UI_GiftPackPanel__LayoutGp4 (UnityEngine_RectTransform_o* grid, System_Collections_Generic_List_Transform__o* nodes, int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackPanel$$LayoutGp4
   void Dino_BusSand_App_UI_GiftPackPanel__LayoutGp4 (UnityEngine_RectTransform_o* grid,
   System_Collections_Generic_List_Transform__o* nodes, int32_t n, const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackPanel__LayoutGp4_21aa550(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  
  puVar6 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ba58 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad7a8);
    FUN_02132f7c(PTR_DAT_04caecf8);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9ba58 = 1;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar10 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if (((int)param_3 < 1) || ((uVar10 & 1) != 0)) {
    return;
  }
  if (param_3 < 6) {
    iVar15 = 1;
    uVar5 = param_3;
  }
  else {
    if (cRam0000000004f9ba93 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9ba93 = '\x01';
    }
    puVar7 = PTR_DAT_04caa200;
    fVar16 = (float)(int)param_3 / 5.0;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      bVar9 = cRam0000000004f9ba93 == '\0';
    }
    else {
      bVar9 = false;
    }
    iVar15 = -0x80000000;
    if ((float)(int)fVar16 != INFINITY) {
      iVar15 = (int)fVar16;
    }
    if (bVar9) {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9ba93 = '\x01';
    }
    fVar16 = (float)(int)param_3 / (float)iVar15;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = 0x80000000;
    if ((float)(int)fVar16 != INFINITY) {
      uVar5 = (int)fVar16;
    }
  }
  puVar7 = PTR_DAT_04caecf8;
  lVar11 = *(long *)PTR_DAT_04caecf8;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar7;
  }
  lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar13 != 0) {
    uVar1 = uVar5 - 1;
    uVar2 = *(uint *)(lVar13 + 0x18) - 1;
    uVar14 = uVar1;
    if ((int)uVar2 <= (int)uVar1) {
      uVar14 = uVar2;
    }
    uVar2 = 0;
    if (-1 < (int)uVar1) {
      uVar2 = uVar14;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar2) {
LAB_022aa934:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar11 != 0) {
      uVar3 = iVar15 - 1;
      uVar4 = *(uint *)(lVar11 + 0x18) - 1;
      uVar14 = uVar3;
      if ((int)uVar4 <= (int)uVar3) {
        uVar14 = uVar4;
      }
      uVar4 = 0;
      if (-1 < (int)uVar3) {
        uVar4 = uVar14;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_022aa934;
      if (param_1 != 0) {
        fVar17 = *(float *)(lVar13 + (long)(int)uVar2 * 4 + 0x20);
        fVar16 = *(float *)(lVar11 + (long)(int)uVar4 * 4 + 0x20);
        UnityEngine_RectTransform__set_sizeDelta_43cfa70(fVar17,fVar16,param_1,0);
        lVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                           (param_1,*(undefined8 *)PTR_DAT_04cad7a8);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar6);
        }
        uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
        if ((uVar10 & 1) != 0) {
          if (lVar11 == 0) goto LAB_022aa930;
          UnityEngine_Behaviour__set_enabled_43bc50c(lVar11,0,0);
        }
        puVar8 = PTR_DAT_04cad7c8;
        puVar7 = PTR_DAT_04cabdb0;
        if (param_2 != 0) {
          uVar14 = 0;
          fVar16 = (fVar16 - (float)(int)uVar3 * 3.0) / (float)iVar15;
          fVar17 = ((fVar17 + -40.0) - (float)(int)uVar1 * 13.0) / (float)(int)uVar5;
          do {
            plVar12 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                                        (param_2,uVar14,*(undefined8 *)puVar8);
            if (plVar12 == (long *)0x0) {
              plVar12 = (long *)0x0;
            }
            else if (*plVar12 != *(long *)puVar7) {
              plVar12 = (long *)0x0;
            }
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = UnityEngine_Object__op_Equality_43c6f30(plVar12,0,0);
            if ((uVar10 & 1) == 0) {
              if (plVar12 == (long *)0x0) break;
              iVar15 = 0;
              if (uVar5 != 0) {
                iVar15 = (int)uVar14 / (int)uVar5;
              }
              uVar2 = param_3 - iVar15 * uVar5;
              uVar1 = uVar5;
              if ((int)uVar2 <= (int)uVar5) {
                uVar1 = uVar2;
              }
              UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f000000,plVar12,0);
              UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f000000,plVar12,0);
              UnityEngine_RectTransform__set_sizeDelta_43cfa70(fVar17,fVar16,plVar12,0);
              UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                        ((fVar17 + 13.0) *
                         ((float)(int)(uVar14 - uVar5 * iVar15) - (float)(int)(uVar1 - 1) / 2.0),
                         (fVar16 + 3.0) * ((float)(int)uVar3 / 2.0 - (float)iVar15),plVar12,0);
            }
            uVar14 = uVar14 + 1;
            if (param_3 == uVar14) {
              return;
            }
          } while( true );
        }
      }
    }
  }
LAB_022aa930:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

