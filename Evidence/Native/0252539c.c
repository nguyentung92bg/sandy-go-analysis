/* IL2CPP: Dino.BusSand.Core.StageEngine$$CheckEndSuction
void Dino_BusSand_Core_StageEngine__CheckEndSuction (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$CheckEndSuction
   void Dino_BusSand_Core_StageEngine__CheckEndSuction (Dino_BusSand_Core_StageEngine_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__CheckEndSuction_242539c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_1 + 0x104);
  if (0 < iVar1) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_02525414:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x70);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = (iVar2 * 100) / iVar1;
    }
    if (iVar3 <= *(int *)(param_1 + 0xec)) {
      lVar6 = *(long *)(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0xf4) = 1;
      *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x78);
      *(int *)(param_1 + 0x100) = iVar2;
      puVar4 = PTR_DAT_04caa200;
      if (lVar6 == 0) goto LAB_02525414;
      iVar1 = *(int *)(param_1 + 0xf0);
      if (*(int *)(lVar6 + 0x3c) < iVar1) {
        if ((bRam0000000004f9cb4f & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04caa200,iVar1,0);
          bRam0000000004f9cb4f = 1;
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = System_Math__Max_4830fc8(1,iVar1,0);
        *(undefined4 *)(lVar6 + 0x3c) = uVar5;
        return;
      }
    }
  }
  return;
}

