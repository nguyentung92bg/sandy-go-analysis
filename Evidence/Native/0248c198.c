/* IL2CPP: Dino.BusSand.Tween$$Scale
Dino_BusSand_Tween_o* Dino_BusSand_Tween__Scale (UnityEngine_Transform_o* tr, UnityEngine_Vector3_o to, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Tween$$Scale
   Dino_BusSand_Tween_o* Dino_BusSand_Tween__Scale (UnityEngine_Transform_o* tr,
   UnityEngine_Vector3_o to, float duration, const MethodInfo* method); */

long Dino_BusSand_Tween__Scale_238c198
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar1 = PTR_DAT_04cbbe60;
  uVar7 = param_2;
  uVar8 = param_3;
  if ((bRam0000000004f9c8a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cbbe68);
    FUN_02132f7c(PTR_DAT_04cbbe60);
    bRam0000000004f9c8a3 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar3 + 0x10);
    *plVar5 = param_5;
    thunk_FUN_02134474(plVar5,param_5);
    *(undefined4 *)(lVar3 + 0x24) = param_1;
    *(undefined4 *)(lVar3 + 0x28) = param_2;
    *(undefined4 *)(lVar3 + 0x2c) = param_3;
    puVar2 = PTR_DAT_04cbbe68;
    puVar1 = PTR_DAT_04cac208;
    if (*plVar5 != 0) {
      uVar6 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar5,0);
      uVar4 = *(undefined8 *)puVar1;
      *(undefined4 *)(lVar3 + 0x18) = uVar6;
      *(undefined4 *)(lVar3 + 0x1c) = uVar7;
      *(undefined4 *)(lVar3 + 0x20) = uVar8;
      uVar4 = thunk_FUN_0216e89c(uVar4);
      System_Action_float____ctor_35f1448(uVar4,lVar3,*(undefined8 *)puVar2,0);
      lVar3 = Dino_BusSand_Tween__Value_238bbfc(param_4,uVar4);
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = *plVar5;
        thunk_FUN_02134474();
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

