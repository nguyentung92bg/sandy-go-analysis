/* IL2CPP: Dino.BusSand.Core.Lane$$get_ActiveLength
double Dino_BusSand_Core_Lane__get_ActiveLength (Dino_BusSand_Core_Lane_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lane$$get_ActiveLength
   double Dino_BusSand_Core_Lane__get_ActiveLength (Dino_BusSand_Core_Lane_o* __this, const
   MethodInfo* method); */

undefined8 Dino_BusSand_Core_Lane__get_ActiveLength_242f98c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9cc07 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cc07 = 1;
  }
  Dino_BusSand_Core_Lane__get_CutDistance_242f1fc(param_1);
  Dino_BusSand_Core_Lane__get_PathLength_242eefc(param_1);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  return 0;
}

