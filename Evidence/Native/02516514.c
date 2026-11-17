/* IL2CPP: Dino.BusSand.Core.Road$$AheadOf
double Dino_BusSand_Core_Road__AheadOf (Dino_BusSand_Core_Road_o* __this, double from, double to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$AheadOf
   double Dino_BusSand_Core_Road__AheadOf (Dino_BusSand_Core_Road_o* __this, double from, double to,
   const MethodInfo* method); */

undefined1  [16] Dino_BusSand_Core_Road__AheadOf_2416514(double param_1,double param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04caa200;
  if ((bRam0000000004f9cb65 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb65 = 1;
  }
  iVar1 = *(int *)(param_3 + 0x24);
  iVar3 = iVar1;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    iVar3 = *(int *)(param_3 + 0x24);
  }
  auVar4._0_8_ = (param_2 - param_1) -
                 (double)(long)((param_2 - param_1) / (double)iVar1) * (double)iVar3;
  auVar4._8_8_ = 0;
  return auVar4;
}

