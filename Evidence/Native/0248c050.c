/* IL2CPP: Dino.BusSand.Tween$$Move
Dino_BusSand_Tween_o* Dino_BusSand_Tween__Move (UnityEngine_Transform_o* tr, UnityEngine_Vector3_o to, float duration, bool local, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Tween$$Move
   Dino_BusSand_Tween_o* Dino_BusSand_Tween__Move (UnityEngine_Transform_o* tr,
   UnityEngine_Vector3_o to, float duration, bool local, const MethodInfo* method); */

long Dino_BusSand_Tween__Move_238c050
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,byte param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  puVar1 = PTR_DAT_04cbbe50;
  uVar8 = param_2;
  uVar9 = param_3;
  if ((bRam0000000004f9c8a2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cbbe58);
    FUN_02132f7c(PTR_DAT_04cbbe50);
    bRam0000000004f9c8a2 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  if (lVar3 != 0) {
    plVar6 = (long *)(lVar3 + 0x10);
    *plVar6 = param_5;
    thunk_FUN_02134474(plVar6,param_5);
    lVar4 = *plVar6;
    *(undefined4 *)(lVar3 + 0x24) = param_1;
    *(undefined4 *)(lVar3 + 0x28) = param_2;
    *(undefined4 *)(lVar3 + 0x2c) = param_3;
    *(byte *)(lVar3 + 0x30) = param_6 & 1;
    if ((param_6 & 1) == 0) {
      if (lVar4 == 0) goto LAB_0248c18c;
      uVar7 = UnityEngine_Transform__get_position_43d0e48(lVar4,0);
    }
    else {
      if (lVar4 == 0) goto LAB_0248c18c;
      uVar7 = UnityEngine_Transform__get_localPosition_43cfce8(lVar4,0);
    }
    puVar2 = PTR_DAT_04cbbe58;
    puVar1 = PTR_DAT_04cac208;
    *(undefined4 *)(lVar3 + 0x18) = uVar7;
    *(undefined4 *)(lVar3 + 0x1c) = uVar8;
    *(undefined4 *)(lVar3 + 0x20) = uVar9;
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action_float____ctor_35f1448(uVar5,lVar3,*(undefined8 *)puVar2,0);
    lVar3 = Dino_BusSand_Tween__Value_238bbfc(param_4,uVar5);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x18) = *plVar6;
      thunk_FUN_02134474();
      return lVar3;
    }
  }
LAB_0248c18c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

