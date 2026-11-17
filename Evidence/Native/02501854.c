/* IL2CPP: Dino.BusSand.View.VehicleView$$.ctor
void Dino_BusSand_View_VehicleView___ctor (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$.ctor
   void Dino_BusSand_View_VehicleView___ctor (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

long Dino_BusSand_View_VehicleView___ctor_2401854(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar4 = _UNK_00e696b8;
  *(undefined8 *)(param_1 + 0xa0) = 0xbf800000ffffffff;
  *(undefined8 *)(param_1 + 0x280) = uVar4;
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x288) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2b0) = uVar4;
  uVar1 = _UNK_00e6bd68;
  uVar4 = _UNK_00e6bd60;
  *(undefined4 *)(param_1 + 0x318) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x330) = 0x3f800000;
  cVar3 = cRam0000000004f9b65e;
  *(undefined4 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x138) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x14c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x234) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x29c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x2b8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x328) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x338) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x350) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x13c) = 1;
  *(undefined1 *)(param_1 + 0x150) = 1;
  *(undefined8 *)(param_1 + 0x2d4) = uVar1;
  *(undefined8 *)(param_1 + 0x2cc) = uVar4;
  *(undefined4 *)(param_1 + 0x374) = 0x7f7fffff;
  if (cVar3 == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65e = '\x01';
  }
  uVar5 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14);
  *(undefined8 *)(param_1 + 0x38c) =
       *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
  *(undefined4 *)(param_1 + 0x394) = uVar5;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa830a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa830a = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  return param_1;
}

