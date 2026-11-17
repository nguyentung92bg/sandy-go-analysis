/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_Progress
float Dino_BusSand_Core_StageEngine__get_Progress (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$get_Progress
   float Dino_BusSand_Core_StageEngine__get_Progress (Dino_BusSand_Core_StageEngine_o* __this, const
   MethodInfo* method); */

float Dino_BusSand_Core_StageEngine__get_Progress_2423b08(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if ((bRam0000000004f9cb98 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb98 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    iVar2 = *(int *)(lVar4 + 0x70);
    iVar3 = *(int *)(lVar4 + 0x10);
    iVar1 = *(int *)(lVar4 + 0x14);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar3 = System_Math__Max_4830fc8(1,iVar1 * iVar3,0);
    return 1.0 - (float)iVar2 / (float)iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

