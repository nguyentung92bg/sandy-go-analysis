/* IL2CPP: Dino.BusSand.View.GarageView$$.ctor
void Dino_BusSand_View_GarageView___ctor (Dino_BusSand_View_GarageView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GarageView$$.ctor
   void Dino_BusSand_View_GarageView___ctor (Dino_BusSand_View_GarageView_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_View_GarageView___ctor_23b334c(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}

