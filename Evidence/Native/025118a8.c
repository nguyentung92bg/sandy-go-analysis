/* IL2CPP: Dino.BusSand.Core.RoadBus$$get_Remaining
int32_t Dino_BusSand_Core_RoadBus__get_Remaining (Dino_BusSand_Core_RoadBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.RoadBus$$get_Remaining
   int32_t Dino_BusSand_Core_RoadBus__get_Remaining (Dino_BusSand_Core_RoadBus_o* __this, const
   MethodInfo* method); */

uint Dino_BusSand_Core_RoadBus__get_Remaining_24118a8(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_DAT_04caa200;
  if ((bRam0000000004f9cb4e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb4e = 1;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = iVar2 - iVar3;
  uVar1 = 0;
  if (uVar4 < 0x80000000) {
    uVar1 = uVar4;
  }
  return uVar1;
}

