/* IL2CPP: Dino.BusSand.View.SandBoardView$$Texel
UnityEngine_Color32_o Dino_BusSand_View_SandBoardView__Texel (Dino_BusSand_View_SandBoardView_o* __this, uint8_t c, int8_t shade, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SandBoardView$$Texel
   UnityEngine_Color32_o Dino_BusSand_View_SandBoardView__Texel (Dino_BusSand_View_SandBoardView_o*
   __this, uint8_t c, int8_t shade, const MethodInfo* method); */

uint Dino_BusSand_View_SandBoardView__Texel_23e60d8(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((bRam0000000004f9ca7f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbfb8);
    bRam0000000004f9ca7f = 1;
  }
  if ((param_2 & 0xff) == 0) {
    uVar2 = 0;
    uVar1 = 0;
    param_3 = 0;
    param_2 = 0;
  }
  else if (*(char *)(param_1 + 0x50) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cbbfb8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    param_2 = Dino_BusSand_Core_SandPalette__Resolve_2419918(param_2,param_3,0);
    param_3 = param_2 >> 8;
    uVar2 = param_2 & 0xff000000;
    uVar1 = param_2 & 0xff0000;
  }
  else {
    uVar1 = 0;
    param_3 = param_3 ^ 0xffffff80;
    uVar2 = 0xff000000;
  }
  return uVar2 | uVar1 | (param_3 & 0xff) << 8 | param_2 & 0xff;
}

