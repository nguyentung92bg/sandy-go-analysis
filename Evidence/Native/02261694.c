/* IL2CPP: Dino.BusSand.App.Tween$$Rotate
Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Rotate (UnityEngine_Transform_o* tr, UnityEngine_Quaternion_o to, float duration, bool local, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tween$$Rotate
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Rotate (UnityEngine_Transform_o* tr,
   UnityEngine_Quaternion_o to, float duration, bool local, const MethodInfo* method); */

long Dino_BusSand_App_Tween__Rotate_2161694
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,byte param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  puVar1 = PTR_DAT_04cac248;
                    /* catch() { ... } // from try @ 02261664 with catch @ 022616b8 */
  uVar9 = param_2;
  uVar10 = param_3;
  uVar11 = param_4;
  if ((bRam0000000004f9b827 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cac250);
    FUN_02132f7c(PTR_DAT_04cac248);
    bRam0000000004f9b827 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 != 0) {
    plVar7 = (long *)(lVar4 + 0x10);
    *plVar7 = param_6;
    thunk_FUN_02134474(plVar7,param_6);
    lVar5 = *plVar7;
    *(undefined4 *)(lVar4 + 0x28) = param_1;
    *(undefined4 *)(lVar4 + 0x2c) = param_2;
    *(undefined4 *)(lVar4 + 0x30) = param_3;
    *(undefined4 *)(lVar4 + 0x34) = param_4;
    *(byte *)(lVar4 + 0x38) = param_7 & 1;
    if ((param_7 & 1) == 0) {
      if (lVar5 == 0) goto LAB_02261804;
      uVar8 = UnityEngine_Transform__get_rotation_43d133c(lVar5,0);
    }
    else {
      if (lVar5 == 0) goto LAB_02261804;
      uVar8 = UnityEngine_Transform__get_localRotation_43d14b0(lVar5,0);
    }
    puVar3 = PTR_DAT_04cac250;
    puVar2 = PTR_DAT_04cac208;
    *(undefined4 *)(lVar4 + 0x18) = uVar8;
    puVar1 = PTR_DAT_04cac1e8;
    *(undefined4 *)(lVar4 + 0x1c) = uVar9;
    *(undefined4 *)(lVar4 + 0x20) = uVar10;
    uVar6 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar4 + 0x24) = uVar11;
    uVar6 = thunk_FUN_0216e89c(uVar6);
    System_Action_float____ctor_35f1448(uVar6,lVar4,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Tween__Value_2160f64(param_5,uVar6);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x18) = *plVar7;
      thunk_FUN_02134474();
      return lVar4;
    }
  }
LAB_02261804:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

