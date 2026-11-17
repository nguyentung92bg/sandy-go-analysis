/* IL2CPP: Dino.BusSand.View.PicturePaper$$Apply
void Dino_BusSand_View_PicturePaper__Apply (Dino_BusSand_View_PicturePaper_o* __this, UnityEngine_Material_o* m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.PicturePaper$$Apply
   void Dino_BusSand_View_PicturePaper__Apply (Dino_BusSand_View_PicturePaper_o* __this,
   UnityEngine_Material_o* m, const MethodInfo* method); */

void Dino_BusSand_View_PicturePaper__Apply_23dc5bc(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca44 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd7e8);
    FUN_02132f7c(PTR_DAT_04cbd7f8);
    FUN_02132f7c(PTR_DAT_04cbd818);
    FUN_02132f7c(PTR_DAT_04cbd8a0);
    FUN_02132f7c(PTR_DAT_04cb6f68);
    bRam0000000004f9ca44 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Material__SetTexture_43831cc
            (param_2,*(undefined8 *)PTR_DAT_04cbd818,*(undefined8 *)(param_1 + 0x18),0);
  UnityEngine_Material__SetVector_4383100
            ((float)*(int *)(param_1 + 0x20),(float)*(int *)(param_1 + 0x24),
             1.0 / (float)*(int *)(param_1 + 0x20),1.0 / (float)*(int *)(param_1 + 0x24),param_2,
             *(undefined8 *)PTR_DAT_04cbd8a0,0);
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  UnityEngine_Material__SetFloat_4383048
            ((float)*(int *)(param_1 + 0x20) / (float)iVar1,param_2,*(undefined8 *)PTR_DAT_04cbd7e8,
             0);
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  fVar6 = (float)*(int *)(param_1 + 0x20) / (float)iVar1;
  UnityEngine_Material__SetFloat_4383048
            (SQRT(fVar6 * fVar6 + 1.0) * _UNK_00e20ae0,param_2,*(undefined8 *)PTR_DAT_04cbd7f8,0);
  uVar3 = UnityEngine_Shader__PropertyToID_4372cb4
                    (*(undefined8 *)PTR_DAT_04cb6f68,*(undefined8 *)PTR_DAT_04cb6f68,0);
  if ((bRam0000000004fa6d88 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf6620);
    FUN_02132f7c(PTR_DAT_04cab588);
    bRam0000000004fa6d88 = 1;
  }
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_2,0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab588 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (pcRam0000000004fa6f68 == (code *)0x0) {
      pcRam0000000004fa6f68 = (code *)FUN_02132f40(&UNK_00e40218);
    }
                    /* WARNING: Could not recover jumptable at 0x0447fb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa6f68)(0x3f800000,lVar5,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

