/* IL2CPP: Dino.BusSand.App.UI.UIManager$$AttachTo
void Dino_BusSand_App_UI_UIManager__AttachTo (Dino_BusSand_App_UI_UIManager_o* __this, UnityEngine_Camera_o* baseCam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$AttachTo
   void Dino_BusSand_App_UI_UIManager__AttachTo (Dino_BusSand_App_UI_UIManager_o* __this,
   UnityEngine_Camera_o* baseCam, const MethodInfo* method); */

void Dino_BusSand_App_UI_UIManager__AttachTo_21fdf64(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bc77 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1a58);
    FUN_02132f7c(PTR_DAT_04cb1a80);
    FUN_02132f7c(PTR_DAT_04cb1af8);
    FUN_02132f7c(PTR_DAT_04cb19f8);
    FUN_02132f7c(PTR_DAT_04cb1b00);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc77 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  plVar8 = (long *)(param_1 + 0x48);
  lVar9 = *plVar8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  if ((uVar3 & 1) != 0) {
    lVar9 = *plVar8;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,param_2,0);
    if ((uVar3 & 1) != 0) {
      if (*plVar8 == 0) goto LAB_022fe21c;
      lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                        (*plVar8,*(undefined8 *)PTR_DAT_04cb1a58);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar2);
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
      if ((uVar3 & 1) != 0) {
        if ((lVar9 == 0) ||
           (lVar9 = UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__get_cameraStack_423dddc
                              (lVar9,0), lVar9 == 0)) goto LAB_022fe21c;
        System_Collections_Generic_List_object___Remove_3a830f8
                  (lVar9,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cb1b00);
      }
    }
  }
  if (param_2 != 0) {
    lVar9 = UnityEngine_Component__GetComponent_object__26f97e8
                      (param_2,*(undefined8 *)PTR_DAT_04cb1a58);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
    if ((uVar3 & 1) != 0) {
      lVar9 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0);
      if (lVar9 == 0) goto LAB_022fe21c;
      lVar9 = UnityEngine_GameObject__AddComponent_object__275a54c
                        (lVar9,*(undefined8 *)PTR_DAT_04cb1a80);
    }
    if (lVar9 != 0) {
      *(undefined4 *)(lVar9 + 0x2c) = 0;
      lVar4 = UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__get_cameraStack_423dddc
                        (lVar9,0);
      if (lVar4 != 0) {
        uVar3 = System_Collections_Generic_List_object___Contains_3a81f90
                          (lVar4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cb19f8);
        if ((uVar3 & 1) != 0) {
code_r0x02132f28:
          *plVar8 = param_2;
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)plVar8 >> 0xc & 0x3f),
                         ((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
        lVar9 = UnityEngine_Rendering_Universal_UniversalAdditionalCameraData__get_cameraStack_423dddc
                          (lVar9,0);
        if (lVar9 != 0) {
          lVar4 = *(long *)(lVar9 + 0x10);
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          lVar6 = *(long *)PTR_DAT_04cb1af8;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
              *puVar5 = uVar7;
              thunk_FUN_02134474(puVar5);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar9,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
            goto code_r0x02132f28;
          }
        }
      }
    }
  }
LAB_022fe21c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

