/* IL2CPP: Dino.BusSand.Core.SandGrid$$TryPullCenterDirection
bool Dino_BusSand_Core_SandGrid__TryPullCenterDirection (Dino_BusSand_Core_SandGrid_o* __this, int32_t x, int32_t y, int32_t dir, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$TryPullCenterDirection
   bool Dino_BusSand_Core_SandGrid__TryPullCenterDirection (Dino_BusSand_Core_SandGrid_o* __this,
   int32_t x, int32_t y, int32_t dir, const MethodInfo* method); */

uint Dino_BusSand_Core_SandGrid__TryPullCenterDirection_2418904
               (long param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  puVar4 = PTR_DAT_04caa200;
  if ((bRam0000000004f9cb7b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb7b = 1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar5 = System_Math__Max_4830fc8(uVar3,1,0);
  if (iVar5 < 1) {
    uVar6 = 0;
  }
  else {
    uVar2 = param_3 + 1;
    iVar8 = 2;
    uVar7 = param_2;
    while( true ) {
      uVar7 = uVar7 + param_4;
      uVar6 = Dino_BusSand_Core_SandGrid__TryPullFrom_2418768(param_1,uVar7,uVar2,param_2,param_3);
      if ((((int)(uVar7 | uVar2) < 0) || ((uVar6 & 1) != 0)) ||
         (*(int *)(param_1 + 0x10) <= (int)uVar7)) break;
      if ((*(int *)(param_1 + 0x14) <= (int)uVar2) ||
         (bVar1 = iVar5 < iVar8, iVar8 = iVar8 + 1, bVar1)) break;
    }
  }
  return uVar6 & 1;
}

