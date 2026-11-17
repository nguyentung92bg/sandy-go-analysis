/* IL2CPP: Dino.BusSand.View.StageLayout$$AspectOf
float Dino_BusSand_View_StageLayout__AspectOf (UnityEngine_Camera_o* cam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$AspectOf
   float Dino_BusSand_View_StageLayout__AspectOf (UnityEngine_Camera_o* cam, const MethodInfo*
   method); */

float Dino_BusSand_View_StageLayout__AspectOf_23e6e28(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca8b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca8b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  fVar5 = _UNK_00e203d8;
  if ((uVar4 & 1) != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar2 = UnityEngine_Camera__get_pixelHeight_435ad54(param_1,0);
    if (0 < iVar2) {
      iVar2 = UnityEngine_Camera__get_pixelWidth_435aca0(param_1,0);
      iVar3 = UnityEngine_Camera__get_pixelHeight_435ad54(param_1,0);
      fVar5 = (float)iVar2 / (float)iVar3;
    }
  }
  return fVar5;
}

