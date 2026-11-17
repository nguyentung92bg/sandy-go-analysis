/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Toward
UnityEngine_Vector2_o Dino_BusSand_App_UI_HomeToonFace__Toward (Dino_BusSand_App_UI_HomeToonFace_o* __this, UnityEngine_Vector3_o world, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Toward
   UnityEngine_Vector2_o Dino_BusSand_App_UI_HomeToonFace__Toward
   (Dino_BusSand_App_UI_HomeToonFace_o* __this, UnityEngine_Vector3_o world, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomeToonFace__Toward_22f2b3c
               (float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(long *)(param_4 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_4 + 0x10) + 0x28), lVar1 != 0)) {
    fVar3 = param_2;
    fVar4 = param_3;
    fVar2 = (float)UnityEngine_Transform__get_position_43d0e48(lVar1,0);
    param_2 = param_2 - fVar3;
    param_3 = param_3 - fVar4;
    fVar3 = (float)UnityEngine_Transform__InverseTransformDirection_43d311c
                             (param_1 - fVar2,param_2,lVar1,0);
    if (cRam0000000004f9b9de == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9b9de = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar2 = _UNK_00e2043c;
    fVar4 = _UNK_00e2043c;
    if (_UNK_00e2043c <= param_3) {
      fVar4 = param_3;
    }
    atan2f(-fVar3,fVar4);
    fVar3 = SQRT(fVar3 * fVar3 + param_3 * param_3);
    if (fVar2 <= fVar3) {
      fVar2 = fVar3;
    }
    atan2f(param_2,fVar2);
    NEON_fmov(0xbf800000,4);
    NEON_fmov(0x3f800000,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

