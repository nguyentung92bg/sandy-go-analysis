/* IL2CPP: Dino.BusSand.GameAudio$$.ctor
void Dino_BusSand_GameAudio___ctor (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAudio$$.ctor
   void Dino_BusSand_GameAudio___ctor (Dino_BusSand_GameAudio_o* __this, const MethodInfo* method);
    */

undefined1  [16] Dino_BusSand_GameAudio___ctor_2385f80(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar3 = PTR_DAT_04cbbc38;
  puVar2 = PTR_DAT_04cbb320;
  puVar1 = PTR_DAT_04cbb318;
  if ((bRam0000000004f9c873 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbc38);
    FUN_02132f7c(PTR_DAT_04cbb320);
    FUN_02132f7c(PTR_DAT_04cbb318);
    bRam0000000004f9c873 = 1;
  }
  uVar4 = *(undefined8 *)puVar3;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  uVar4 = FUN_02133068(uVar4,8);
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  thunk_FUN_02134474(param_1 + 0x110,uVar4);
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  thunk_FUN_02134474(param_1 + 0x118,uVar4);
  uVar4 = NEON_fmov(0xc1200000,4);
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

