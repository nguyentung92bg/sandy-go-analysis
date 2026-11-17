/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$TryResolveAnchor
bool Dino_BusSand_App_UI_GuidePanel__TryResolveAnchor (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_Vector2_o* screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$TryResolveAnchor
   bool Dino_BusSand_App_UI_GuidePanel__TryResolveAnchor (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_Vector2_o* screen, const MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_GuidePanel__TryResolveAnchor_22c912c
          (undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4,undefined8 *param_5
          )

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((bRam0000000004f9c36a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cb4e80);
    FUN_02132f7c(PTR_DAT_04cb6890);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c36a = 1;
  }
  *param_5 = 0;
  puVar2 = PTR_DAT_04caba50;
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)(param_4 + 0x38);
  if (lVar4 == 0) goto LAB_023c9474;
  if (*(char *)(lVar4 + 0x14) == '\0') {
LAB_023c93a0:
    uVar5 = *(undefined8 *)(lVar4 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (((*(long *)(param_4 + 0x38) == 0) ||
          (lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x28), lVar4 == 0)) ||
         (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar4 == 0)) {
LAB_023c9474:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar4,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_4 + 0x38) == 0) ||
           (lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x28), lVar4 == 0)) goto LAB_023c9474;
        uVar5 = *(undefined8 *)(param_4 + 0x50);
        uVar7 = UnityEngine_Transform__get_position_43d0e48(lVar4,0);
        if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_RectTransformUtility__WorldToScreenPoint_467e894
                          (uVar7,param_2,param_3,uVar5,0);
        goto LAB_023c9448;
      }
    }
    uVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    lVar6 = 0;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b88f == '\0') {
        FUN_02132f7c(PTR_DAT_04caba50);
        cRam0000000004f9b88f = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_023c9474;
      uVar5 = *(undefined8 *)(**(long **)(lVar4 + 0xb8) + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      lVar6 = 0;
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
        }
        if ((**(long **)(lVar4 + 0xb8) == 0) ||
           (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x20), lVar4 == 0)) goto LAB_023c9474;
        lVar6 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328(lVar4,0);
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar3 & 1) != 0) {
      lVar6 = UnityEngine_Camera__get_main_435d018(0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    lVar4 = *(long *)(param_4 + 0x38);
    if ((uVar3 & 1) == 0) {
LAB_023c939c:
      if (lVar4 == 0) goto LAB_023c9474;
      goto LAB_023c93a0;
    }
    if ((lVar4 == 0) ||
       (System_Nullable_Vector3___get_Value_2bd0e68(lVar4 + 0x14,*(undefined8 *)PTR_DAT_04cb6890),
       lVar6 == 0)) goto LAB_023c9474;
    uVar7 = UnityEngine_Camera__WorldToScreenPoint_435c56c(lVar6,0);
    if (param_3 <= 0.0) {
      lVar4 = *(long *)(param_4 + 0x38);
      goto LAB_023c939c;
    }
LAB_023c9448:
    uVar5 = 1;
    *(undefined4 *)param_5 = uVar7;
    *(undefined4 *)((long)param_5 + 4) = param_2;
  }
  return uVar5;
}

