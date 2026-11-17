/* IL2CPP: Dino.BusSand.Core.StageOptions$$.ctor
void Dino_BusSand_Core_StageOptions___ctor (Dino_BusSand_Core_StageOptions_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageOptions$$.ctor
   void Dino_BusSand_Core_StageOptions___ctor (Dino_BusSand_Core_StageOptions_o* __this, const
   MethodInfo* method); */

long Dino_BusSand_Core_StageOptions___ctor_241e3f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbc670;
  if ((bRam0000000004f9cb93 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc670);
    bRam0000000004f9cb93 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(lVar2 + 0xb8);
  thunk_FUN_02134474();
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x41400000;
  *(undefined8 *)(param_1 + 0x1c) = 0x1e0000001e;
  return param_1;
}

