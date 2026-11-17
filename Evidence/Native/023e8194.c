/* IL2CPP: Dino.BusSand.App.UI.HomeSideArt$$AddSale
UnityEngine_UI_Image_o* Dino_BusSand_App_UI_HomeSideArt__AddSale (Dino_BusSand_App_UI_HomeSideArt_Parts_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeSideArt$$AddSale
   UnityEngine_UI_Image_o* Dino_BusSand_App_UI_HomeSideArt__AddSale
   (Dino_BusSand_App_UI_HomeSideArt_Parts_o* p, const MethodInfo* method); */

long * Dino_BusSand_App_UI_HomeSideArt__AddSale_22e8194(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((bRam0000000004f9c434 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7428);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb7430);
    FUN_02132f7c(PTR_DAT_04cb7438);
    bRam0000000004f9c434 = 1;
  }
  puVar1 = PTR_DAT_04cad330;
  if (param_1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    puVar3 = PTR_DAT_04cb7438;
    puVar2 = PTR_DAT_04cb7430;
    uVar11 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
    uVar12 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar4 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                               (uVar11,uVar12,0xc2a50000,0xc1400000,0x3f800000,uVar7,
                                *(undefined8 *)puVar2,*(undefined8 *)puVar3,0,0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x2c8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x2d0));
      lVar5 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar4,0);
      if (lVar5 != 0) {
        fVar9 = _UNK_00e1fea8;
        UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,_UNK_00e1fea8,lVar5,0);
        lVar5 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar4,0);
        if (lVar5 != 0) {
          fVar8 = (float)UnityEngine_RectTransform__get_anchoredPosition_43cf828(lVar5,0);
          fVar10 = fVar9;
          lVar6 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar4,0);
          if (lVar6 != 0) {
            UnityEngine_RectTransform__get_sizeDelta_43cf9ac(lVar6,0);
            UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                      (fVar8 + 0.0,fVar9 + fVar10 * _UNK_00e2098c,lVar5,0);
            lVar5 = UnityEngine_Component__get_gameObject_43bcde8(plVar4,0);
            if ((lVar5 != 0) &&
               (lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                                  (lVar5,*(undefined8 *)PTR_DAT_04cb7428), lVar5 != 0)) {
              *(undefined4 *)(lVar5 + 0x20) = 0x40c00000;
              return plVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

