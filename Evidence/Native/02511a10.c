/* IL2CPP: Dino.BusSand.Core.Road$$set_SuctionPerTick
void Dino_BusSand_Core_Road__set_SuctionPerTick (Dino_BusSand_Core_Road_o* __this, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$set_SuctionPerTick
   void Dino_BusSand_Core_Road__set_SuctionPerTick (Dino_BusSand_Core_Road_o* __this, int32_t value,
   const MethodInfo* method); */

void Dino_BusSand_Core_Road__set_SuctionPerTick_2411a10(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9cb50 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb50 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = System_Math__Max_4830fc8(1,param_2,0);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  return;
}

