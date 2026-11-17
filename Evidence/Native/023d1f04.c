/* IL2CPP: Dino.BusSand.App.UI.HallScene$$AdaptBackground
void Dino_BusSand_App_UI_HallScene__AdaptBackground (Dino_BusSand_App_UI_HallScene_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HallScene$$AdaptBackground
   void Dino_BusSand_App_UI_HallScene__AdaptBackground (Dino_BusSand_App_UI_HallScene_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__AdaptBackground_22d1f04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c3bd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6d10);
    FUN_02132f7c(PTR_DAT_04cb6d18);
    FUN_02132f7c(PTR_DAT_04cb6d20);
    FUN_02132f7c(PTR_DAT_04cb6d28);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3bd = 1;
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uVar4 = UnityEngine_Screen__get_width_436a6a0(0);
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  uVar4 = UnityEngine_Screen__get_height_436a6c8(0);
  lVar7 = *(long *)puVar1;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_023d21d8;
  iVar5 = UnityEngine_Camera__get_pixelWidth_435aca0(*(long *)(param_1 + 0x20),0);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_023d21d8;
  iVar6 = UnityEngine_Camera__get_pixelHeight_435ad54(*(long *)(param_1 + 0x20),0);
  if ((iVar5 < 1) || (iVar6 < 1)) {
    iVar5 = UnityEngine_Screen__get_width_436a6a0(0);
    iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
    if (iVar5 < 1) {
      return;
    }
    if (iVar6 < 1) {
      return;
    }
  }
  uVar4 = 0x3f800000;
  fVar12 = (float)iVar5 / 1944.0;
  fVar11 = (float)iVar6 / 2640.0;
  fVar10 = fVar12;
  if (fVar12 <= fVar11) {
    fVar10 = fVar11;
  }
  bVar3 = _UNK_00e20440 <= fVar10;
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_023d21d8;
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_98,*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_04cb6d28);
  puVar2 = PTR_DAT_04cb6d18;
  lStack_70 = lStack_88;
  puStack_78 = puStack_90;
  uStack_80 = uStack_98;
  uStack_98 = 0;
  puStack_90 = &uStack_80;
  if (fVar11 <= fVar12) {
    uVar4 = 0;
  }
  while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_80,*(undefined8 *)puVar2), lVar7 = lStack_70, (uVar8 & 1) != 0)
  {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
    if ((uVar8 & 1) == 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_UI_CanvasScaler__set_referenceResolution_4682f88(0x44f30000,0x45250000,lVar7,0);
      if (bVar3 && fVar10 < 1.0) {
        *(undefined4 *)(lVar7 + 0x20) = 0;
        UnityEngine_UI_CanvasScaler__set_scaleFactor_4682f68(0x3f800000,lVar7,0);
      }
      else {
        *(undefined4 *)(lVar7 + 0x20) = 1;
        *(undefined4 *)(lVar7 + 0x34) = 0;
        *(undefined4 *)(lVar7 + 0x38) = uVar4;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_80,*(undefined8 *)PTR_DAT_04cb6d10);
  if (bVar3 && fVar10 < 1.0) {
LAB_023d2160:
    lVar7 = *(long *)(param_1 + 0x20);
    if (_UNK_00e20470 <= fVar11) goto LAB_023d2198;
    fVar10 = (float)atanf(fVar11 * _UNK_00e20860);
    fVar10 = fVar10 * _UNK_00e2040c;
  }
  else {
    if (fVar11 < fVar12) {
      fVar11 = fVar11 / fVar12;
      goto LAB_023d2160;
    }
    lVar7 = *(long *)(param_1 + 0x20);
LAB_023d2198:
    fVar10 = 60.0;
  }
  if (lVar7 != 0) {
    UnityEngine_Camera__set_fieldOfView_4355f50(fVar10,lVar7,0);
    return;
  }
LAB_023d21d8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

