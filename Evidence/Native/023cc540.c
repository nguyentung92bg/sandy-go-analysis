/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$UseKitArrow
bool Dino_BusSand_App_UI_GuidePanel__UseKitArrow (Dino_BusSand_App_UI_GuidePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$UseKitArrow
   bool Dino_BusSand_App_UI_GuidePanel__UseKitArrow (Dino_BusSand_App_UI_GuidePanel_o* __this, const
   MethodInfo* method); */

uint Dino_BusSand_App_UI_GuidePanel__UseKitArrow_22cc540(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar3 = PTR_DAT_04cb6ac8;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c37d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4ee0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb6ad0);
    FUN_02132f7c(PTR_DAT_04cb6ac8);
    bRam0000000004f9c37d = 1;
  }
  uVar5 = Dino_BusSand_App_UI_UiSkin__Sprite_22a23f4(*(undefined8 *)puVar3,0);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar10);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  puVar3 = PTR_DAT_04cb6ad0;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x80) != 0) {
      uVar6 = UnityEngine_Transform__Find_43d4bec
                        (*(long *)(param_1 + 0x80),*(undefined8 *)PTR_DAT_04cb6ad0,0);
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar10);
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar7 & 1) != 0) goto LAB_023cc7a4;
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (lVar10 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                             (*(long *)(param_1 + 0x80),1,*(undefined8 *)PTR_DAT_04cb4ee0),
         lVar10 != 0)) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar1) {
          lVar11 = 0;
          do {
            if (uVar1 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar8 = *(long *)(lVar10 + 0x20 + lVar11 * 8);
            if (lVar8 == 0) goto LAB_023cc7c4;
            UnityEngine_Behaviour__set_enabled_43bc50c(lVar8,0,0);
            uVar1 = *(uint *)(lVar10 + 0x18);
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < (int)uVar1);
        }
        uVar6 = *(undefined8 *)(param_1 + 0x80);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        uVar12 = **(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8);
        uVar13 = (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1];
        if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        plVar9 = (long *)Dino_BusSand_App_UI_UiKit__Img_228203c
                                   (uVar12,uVar13,0,0,0x3f800000,uVar6,*(undefined8 *)puVar3,0,0,0);
        if (plVar9 != (long *)0x0) {
          UnityEngine_UI_Image__set_sprite_44a7258(plVar9,uVar5,0);
          UnityEngine_UI_Image__set_preserveAspect_44afae0(plVar9,1,0);
          (**(code **)(*plVar9 + 0x2c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2d0));
          uVar5 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar9,0);
          Dino_BusSand_App_UI_UiKit__Stretch_2281f58(0,0,0,0,uVar5,0);
          lVar10 = UnityEngine_UI_Graphic__get_rectTransform_44aaf14(plVar9,0);
          if (lVar10 != 0) {
            UnityEngine_Transform__set_eulerAngles_43d13c8(0,0,0x43340000,lVar10,0);
            goto LAB_023cc7a4;
          }
        }
      }
    }
LAB_023cc7c4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_023cc7a4:
  return (uVar4 ^ 0xffffffff) & 1;
}

