/* IL2CPP: Dino.BusSand.App.Tween$$Move
Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Move (UnityEngine_Transform_o* tr, UnityEngine_Vector3_o to, float duration, bool local, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Tween$$Move
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_Tween__Move (UnityEngine_Transform_o* tr,
   UnityEngine_Vector3_o to, float duration, bool local, const MethodInfo* method); */

long Dino_BusSand_App_Tween__Move_21613dc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,byte param_6)

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
  
  puVar1 = PTR_DAT_04cac228;
  uVar9 = param_2;
  uVar10 = param_3;
  if ((bRam0000000004f9b825 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cac230);
    FUN_02132f7c(PTR_DAT_04cac228);
    bRam0000000004f9b825 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  if (lVar4 != 0) {
    plVar7 = (long *)(lVar4 + 0x10);
    *plVar7 = param_5;
    thunk_FUN_02134474(plVar7,param_5);
    lVar5 = *plVar7;
    *(undefined4 *)(lVar4 + 0x24) = param_1;
    *(undefined4 *)(lVar4 + 0x28) = param_2;
    *(undefined4 *)(lVar4 + 0x2c) = param_3;
    *(byte *)(lVar4 + 0x30) = param_6 & 1;
    if ((param_6 & 1) == 0) {
      if (lVar5 == 0) goto LAB_0226153c;
      uVar8 = UnityEngine_Transform__get_position_43d0e48(lVar5,0);
    }
    else {
      if (lVar5 == 0) goto LAB_0226153c;
      uVar8 = UnityEngine_Transform__get_localPosition_43cfce8(lVar5,0);
    }
    puVar3 = PTR_DAT_04cac230;
    puVar2 = PTR_DAT_04cac208;
    puVar1 = PTR_DAT_04cac1e8;
    *(undefined4 *)(lVar4 + 0x18) = uVar8;
    *(undefined4 *)(lVar4 + 0x1c) = uVar9;
    uVar6 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar4 + 0x20) = uVar10;
    uVar6 = thunk_FUN_0216e89c(uVar6);
    System_Action_float____ctor_35f1448(uVar6,lVar4,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Tween__Value_2160f64(param_4,uVar6);
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x18) = *plVar7;
      thunk_FUN_02134474();
      return lVar4;
    }
  }
LAB_0226153c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

