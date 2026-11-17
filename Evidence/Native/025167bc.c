/* IL2CPP: Dino.BusSand.Core.Road$$NearestCenter
double Dino_BusSand_Core_Road__NearestCenter (Dino_BusSand_Core_Road_o* __this, double pos, double reference, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$NearestCenter
   double Dino_BusSand_Core_Road__NearestCenter (Dino_BusSand_Core_Road_o* __this, double pos,
   double reference, const MethodInfo* method); */

undefined1  [16]
Dino_BusSand_Core_Road__NearestCenter_24167bc(double param_1,double param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04caa200;
  if ((bRam0000000004f9cb6b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb6b = 1;
  }
  iVar1 = *(int *)(param_3 + 0x24);
  iVar3 = iVar1;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    iVar3 = *(int *)(param_3 + 0x24);
  }
  auVar4._0_8_ = ((param_1 - param_2) -
                 (double)(long)((param_1 - param_2) / (double)iVar1 + 0.5) * (double)iVar3) +
                 param_2;
  auVar4._8_8_ = 0;
  return auVar4;
}

